// Task 60.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*60. Пусть дана вещественная матрица порядка
m n  ,
все элементы
которой различны. Переставить ее строки и столбцы так, чтобы ее
наибольший элемент оказался в левом верхнем углу.*/

#include <iostream>
using namespace std;

int main(){

    const int rows = 5;
    const int cols = 8;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            arr[i][j] = rand() % 10;
        }
    }
        for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
