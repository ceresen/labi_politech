#include <iostream>
#include <stdlib.h>


using namespace std;

int summ_of_numbers(int n) {  //считает сумму цифр числа, стоящих на четных местах
  int sum=0;
  char buffer[64]; //создаем строку длиной 64 символа
  snprintf(buffer,64,"%d",n); //форматируем наше число n в строку n
  for(int i = 0 ; i < strlen(buffer); ++i) //бежим по строке
  {
    if(i % 2) //если разряд числа четный
      sum += buffer[i] - '0';   //по таблице asci добавляем разницу (саму цифру)
  }
  return sum;
}

int* my_copy(int* a, int size)
{
  int* new_arr = new int[size];
  for (int i = 0; i < size; i++) {
    new_arr[i] = a[i];
  }
  return (new_arr);
}

int main()
{
  setlocale(LC_ALL, "Russian");
  int choice;

  int num;
  cout << "Введите количество элементов динамического массива: ";
  cin >> num;
  int* a = new int[num];
  for (int i = 0; i < num; i++) {
    int new_element;
    cout << "Введите новый элемент массива: ";
    cin >> new_element;
    a[i] = new_element;
  }

  while (true) {
    cout << '\n' << "Что вы хотите выполнить? \n" << endl << "2. вывод введенного массива \n" << "3. сортировка по сумме четных разрядов \n" << "4. сортировка по последним цифрам \n" << "5. Выход \n" << endl;
    cin >> choice;

    switch (choice)
    {      
      case 2:
      {
        int* array;
        array = my_copy(a, num);
        int length = _msize(array) / sizeof(int);
        
        for (int i = 0; i < length; i++) { 
          cout << array[i] << " ";
        }
        
        delete [] array;
        break;
      }
      case 3:
      {
        int* array;
        array = my_copy(a, num);
        int length = _msize(array) / sizeof(int);

        for (int i=0; i<length-1; i++) {
          for (int j=0; j<length-1; j++) {
            if (summ_of_numbers(array[j]) > summ_of_numbers(array[j+1]))
              swap(array[j], array[j+1]);
          }
        }

        for (int i = 0; i < length; i++) { //вывод отсортированного массива
          cout << array[i] << " ";
        }
        delete[] array;
        break;
      }
    
      case 4:
      {
        /*
        пояснение 
        a = [1223, 756], после сортировки должен быть [1223, 756]
        a = [1223, 896, 756], после сортировки должно быть [1223, 896, 756]
        */
        int* array;
        array = my_copy(a, num);
        int length = _msize(array) / sizeof(int);

        for (int i=0; i<length; i++) {
          for (int j = 0; j < length - 1; j++) {
            if (array[j]%10 > array[j+1]%10)
              swap(array[j], array[j + 1]);
            else if (array[j] % 10 == array[j + 1] % 10) {
              if (array[j] < array[j+1])
                swap(array[j], array[j + 1]);
            }
          }
        }
      
        for (int i = 0; i < length; i++) { //вывод отсортированного массива
          cout << array[i] << " ";
        }
        delete[] array;
        break;
      }
      
      case 5:
      {
        exit(3);
      }
    }
  }



}

