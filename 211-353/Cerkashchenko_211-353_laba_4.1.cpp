#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::strstr;

void input(char* text) 
{ 
    cout << "Введите строку: "<< '\n';
    cin.ignore();
    std::cin.getline(text, 256);
}

bool Palindrom(char* cstr) 
{ 
    int i = 0;
    int j = strlen(cstr) - 1;
    while (i < j) {
        if (cstr[i] == ' ') i++;
        if (cstr[j] == ' ') j++;
        cstr[i] = tolower(cstr[i]);
        cstr[j] = tolower(cstr[j]);
        if (cstr[i] != cstr[j]) {
            return false;
            break;
        }
        i++;
        j--;

    }
    return true;
}

void encrypted(char* text, int key) 
{  
    char encr_text[256];
    const char* abc = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    strcpy_s(encr_text, text);
    for (int i = 0; i < std::strlen(text); i++) {
        if (std::strchr(abc, encr_text[i]))
            text[i] = char(int(encr_text[i]) + key);
        else text[i] = encr_text[i];
    }
}

int find_substring1(char* str_for_search,char* substring, int& start_position) 
{ 
    for (int i = 0; i < start_position; i++) str_for_search[i] = '.';
    if (int(std::strstr(str_for_search, substring)) > 0) {
        start_position = std::strlen(str_for_search) - std::strlen((std::strstr(str_for_search, substring)));
    }
    else {
        start_position = -1;
    }
    return start_position;
}

void find_substring2(char* str_for_search, char* substring) 
{ 
    int arr[256];
    int counter = 0;
    int start = 0;
    char str_for_search_in[256];
    strcpy_s(str_for_search_in, str_for_search);
    while (start != -1) {
        for (int i = 0; i < start; i++) str_for_search_in[i] = '.';
        if (int(std::strstr(str_for_search_in, substring)) > 0) {
            start = std::strlen(str_for_search) - std::strlen((std::strstr(str_for_search_in, substring)))+1;
            arr[counter] = start;
            counter++;
        }
        else {
            start = -1;
        }
    }
    for (int i = 0; i < counter; i++) cout << arr[i]-1<<" ";
    cout << "\n";
}

void task4(char* str)
{
    int flag = 0;
    for (int i = 0; i <= std::strlen(str); i++) {
        if (flag == 1 and str[i] != '"') cout << str[i];
        else {
            if (flag == 0 and str[i] == '"') flag = 1;
            else {
                flag = 0;
                cout << " ";
            }
        }
    }
    cout << "\n";
}





int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    char cstr1[256] = " ";
    int key;
    int a = 0;
    char sub[256] = " ";
    int start;
    while (a == 0)
    {
        std::cout << "Что вы хотите выполнить?" "\n" << "1. Ввод" "\n" << "2. 1" "\n" << "3.  2.1" "\n"  << "4.  2.2" "\n" << "5.  3" "\n" "6.  4" "\n" "7. Выход" "\n";
        cin >> choise;
        switch (choise)
        {
        case 1:
            input(cstr1);
            break;
        case 2:
            cout<<bool(Palindrom(cstr1))<<'\n';
            break;
        case 3:
            cout << "Введите подстроку "; cin >> sub;
            cout << "Введите позицию начала "; cin >> start;
            find_substring1(cstr1,sub,start);
            cout << start << "\n";
            break;
        case 4:
            cout << "Введите подстроку "; cin >> sub;
            find_substring2(cstr1, sub);
            break;
        case 5:
            cout << "Введите ключ "; cin >> key;
            encrypted(cstr1, key);
            cout << "\n" << cstr1;
            break;
        case 6:
            task4(cstr1);
            break;
        case 7:
            cout << "Всего хорошего";
            a++;
        default:
            break;
        }
    }
    return 0;
}
