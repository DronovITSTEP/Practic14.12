#include <iostream>
using namespace std;
int main()
{
    //int arr[5] = {4,6,7,8,7};
    //int arr1[5] = {4,6,7,8}; // {4,6,7,8,0}
    //arr[2] = 10;

    //const int x = 10;
    //int arr2[x];
    //for (int i = 0; i < 10; i++) {
    //    arr2[i] = rand() % 10;
    //    cout << arr2[i] << " ";
    //}

    //float arr3[]{4.7, 9.2};

    /*
    написать программу, которая находит сумму всех отрицательных значений в массиве
    */

    /*const int size = 5; // размер массива
    int arr[size] = { 23,-11,9,-18,-25 }; // создание и инициализация массива
    int sum = 0; // для хранения суммы

    //цикл для прохождения по всем элементам массива
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) 
            sum += arr[i]; // ищем отрицательное число
    }

    cout << "Sum = " << sum << endl;*/

    /*
    необходимо найти максимум и минимум в массиве
    */
    /*const int size = 5; // размер массива
    int arr[size] = { 23,11,9,18,25 }; // создание и инициализация массива

    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) 
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Max = " << max << " Min = " << min << endl;*/

    /*
    const int size = 8;
    double arr[size] = { -5.7, 6.0, 2,0,-4.7, 6, 8.1, -4};
    double pozitive = 0;
    for (int i = size; i >= 0; i--) {
        if (arr[i] > 0) {
            pozitive = arr[i];
            break;
        }
    }

    double negative = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negative = arr[i];
            break;
        }
    }
    cout << "Last positive number: " << pozitive << endl;
    cout << "First negative number: " << negative << endl;*/
    
    /*
    Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. 
    Пользователь вводит прибыль фирмы за каждый месяц.
    */
    /*double sum = 0;
    const int size = 6;
    double arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;*/
    /*
    Написать программу, которая выводит одномерный массив в обратном порядке.
    */
    for (int i = size - 1; i >= 0; i--)
        cout << arr[i];

    /*
    Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься 
    в массив, необходимо вычислить периметр пятиугольника 
    (периметр — сумма всех сторон).
    */
    int per = 0;
    for (int i = 0; i < 5; i++) {
        per += arr[i];
    }


    /*
    Пользователь вводит прибыль фирмы за год
    (12 месяцев). Необходимо определить месяц, в котором
    прибыль была максимальна и месяц, в котором прибыль
    была минимальна.
    */
}
