#include <iostream>
using namespace std;

int main()
{
  //1

  cout << "1.\n" << "Cherkashchenko Anastasiya Mikhailovna, 211-353\n" << endl;

  //2
  //int

  int temp_int;
  temp_int = sizeof(int);
  temp_int = 0b01111111111111111111111111111111;

  cout << "2.\n" << "int: " << endl << "size of int - " << sizeof(int) << endl;
  cout << "max int = " << temp_int << endl;

  temp_int = 0b10000000000000000000000000000000;

  cout << "min int = " << temp_int << "\n" << endl;

  //unsigned int

  unsigned int temp_unsigned_int;
  temp_unsigned_int = sizeof(unsigned int);
  temp_unsigned_int = 0b0111111111111111111111111111111111111111111111111111111111111111;

  cout << "unsigned int: " << endl << "size of unsigned int - " << sizeof(unsigned int) << endl;
  cout << "max unsignet int = " << temp_unsigned_int << endl;

  temp_unsigned_int = 0b0;

  cout << "min unsiged int = " << temp_unsigned_int << "\n" << endl;

  //unsigned short

  unsigned short temp_unsigned_short;
  temp_unsigned_short = sizeof(unsigned short);
  temp_unsigned_short = 0b0111111111111111111111111111111;

  cout << "unsigned short: " << endl << "size of unsigned short - " << sizeof(unsigned short) << endl;
  cout << "max unsigned short = " << temp_unsigned_short << endl;

  temp_unsigned_short = 0b0;

  cout << "min unsigned short = " << temp_unsigned_short << "\n" << endl;

  //short

  short temp_short;
  temp_short = sizeof(short);
  temp_short = 0b0111111111111111;

  cout << "short: " << endl << "size of short - " << sizeof(short) << endl;
  cout << "max short = " << temp_short << endl;

  temp_short = 0b1000000000000000;

  cout << "min short = " << temp_short << "\n" << endl;

  //long

  long temp_long;
  temp_long = sizeof(long);
  temp_long = 0b01111111111111111111111111111111;

  cout << "long: " << endl << "size of long - " << sizeof(long) << endl;
  cout << "max long = " << temp_long << endl;

  temp_long = 0b10000000000000000000000000000000;

  cout << "min long = " << temp_long << "\n" << endl;

  //long llong

  long long temp_wlong;
  temp_wlong = sizeof(long long);
  temp_wlong = 0b0111111111111111111111111111111111111111111111111111111111111111;

  cout << "long long: " << endl << "size of long long - " << sizeof(long long) << endl;
  cout << "max long long = " << temp_wlong << endl;

  temp_wlong = 0b1000000000000000000000000000000000000000000000000000000000000000;

  cout << "min long long = " << temp_wlong << "\n" << endl;

  //double

  double temp_double;
  temp_double = sizeof(double);
  temp_double = 0b0111111111111111111111111111111111111111111111111111111111111111;

  cout << "double: " << endl << "size of double - " << sizeof(double) << endl;
  cout << "max double = " << temp_double << endl;

  temp_double = 0b0000000000000000000000000000000000000000000000000000000000000001;

  cout << "min double = " << temp_double << "\n" << endl;

  //char

  char temp_char;
  temp_char = sizeof(char);
  temp_char = 0b01111111;

  char ch(temp_char);
  int b(ch);

  cout << "char: " << endl << "size of char - " << sizeof(char) << endl;
  cout << "max char = " << b << endl;

  char temp_gchar = 0b10000000;

  char ch1(temp_gchar);
  int g(ch1);

  cout << "min char = " << g << "\n" << endl;

  //bool

  bool temp_bool;
  temp_bool = sizeof(bool);
  temp_bool = 0b011111111111111;

  cout << "bool: " << endl << "size of bool - " << sizeof(bool) << endl;
  cout << "max bool = " << temp_bool << " (True)" << endl;

  temp_bool = 0b0;

  cout << "min bool = " << temp_bool << " (False)" << "\n" << endl;

//3
/*
cout << "3.\n" << "enter your number:" << endl;
  int number, rem;
  cin >> number;

  while (number > 1)
  {
    number /= 2;
    rem = number % 2;
*/

//4

cout << "4.\n" << "enter your numbers : " << endl;
int a, x, b;
cin >> a >> b;
x = b / a;
cout << a << " * x = " << b;
cout << "x = " << a / b;
cout << "x = " << x;

//5

double c1, c2, c_middle;

cout << "5.\n" << "enter coordinates: " << endl;
cin >> c1 >> c2;
c_middle = (c1 + c2)/ 2;
cout << c_middle;

  return 0;

}
