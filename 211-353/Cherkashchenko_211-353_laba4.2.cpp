#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
using namespace std;

void NoWSread(char* text) {
    cout << "Ввод: " << endl;
    cin.ignore(255, '\n');
    cin.getline(text, 255);
}




string file_format(const string file_path_full) {
    string str;
    int j;
    for (int i = 0; i < file_path_full.size(); i++)
        if (file_path_full.at(i) == '.') j = i;
    for (int i = j + 1; i < file_path_full.size(); i++)
        str += file_path_full.at(i);
    return str;
}



string file_name(const string file_path_full) {
    string str;
    int i1, i2;
    for (int i = 0; i < file_path_full.size(); i++) {
        if (file_path_full.at(i) == '\\') i1 = i;
        if (file_path_full.at(i) == '.') i2 = i;
    }
    for (int i = i1 + 1; i < i2; i++)
        str += file_path_full.at(i);
    return str;
}



string file_path(const string file_path_full) {
    string str;
    int i1;
    for (int i = 0; i < file_path_full.size(); i++) {
        if (file_path_full.at(i) == '\\') i1 = i;
    }
    for (int i = 0; i < i1; i++)
        str += file_path_full.at(i);
    return str;
}

bool file_rename(string* file_path_full) {
    string s = *file_path_full;
    string path = file_path(s);
    string format = file_format(s);
    char text[255];
    NoWSread(text);
    string new_name = text;
    s = path + '\\' + new_name + '.' + format;
    *file_path_full = s;
    return true;
}



char file_disk(const string file_path_full) {
    return file_path_full.at(0);
}


bool file_copy(const string file_path_full) {
    bool b = true;
    string path = file_path(file_path_full);
    string format = file_format(file_path_full);
    string new_name = file_name(file_path_full) + "_copy";
    new_name = path + '\\' + new_name + '.' + format;
    ifstream fi;
    fi.open(file_path_full);
    if (fi) {
        ofstream fo(new_name);
        while (!fi.eof()) {
            string s;
            getline(fi, s);
            fo << s << endl;
        }
        fi.close();
        fo.close();
    }
    else { b = false; }
    return b;
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    bool a = true;
    int x;
    while (a) {
        cout << "1. Расширение\n2. название\n3. расположение\n4. Диск\n5. переименовать\n6. Скопировать\n7. Выход\n";
        cin >> x;
        switch (x) {
        case 1:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            cout << file_format(s) << endl;
            break;
        }
        case 2:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            cout << file_name(s) << endl;
            break;
        }
        case 3:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            cout << file_path(s) << endl;
            break;
        }
        case 4:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            cout << file_disk(s) << endl;
            break;
        }
        case 5:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            cout << "Нажмите Enter\n";
            file_rename(&s);
            cout << s << endl;
            break;
        }
        case 6:
        {
            char text[255];
            NoWSread(text);
            string s = text;
            bool b = file_copy(s);
            if (b) cout << "Файл скопирован" << endl;
            else cout << "Файл не найден" << endl;
            break;
        }
        case 7:
        {
            a = false;
            break;
        }
        }
    }
}