#include <iostream>
#include <string>
#include <list>

using namespace std;
bool compare(string a, string b)
{
  return (a == b);
}
int main()

{
  setlocale(LC_ALL, "ru");


  string surname;
  string group;

  list<string> listSurname;
  list<string> listGroup;


  cout << "Номер группы, фамилия : " << endl;
  cin >> group >> surname;

  while (true)
  {
    if ((group == "-") and (surname == "-"))
    {
      break;
    }
    
    listSurname.push_back(group + " " + surname);
    listGroup.push_back(group);
    
    cout << "Номер группы, фамилия : " << endl;
    cin >> group >> surname;
  }

  listGroup.unique(compare);
  listSurname.unique(compare);
  
  for (auto group : listGroup)
  {
    cout << group << ":" << endl;
    for (auto surname : listSurname)
    {
      if (surname.find(group) != string::npos)
      {
        cout << surname << endl;
      }
    }
    cout << endl;
  }
  
}