// Task 60.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*60. Пусть дана вещественная матрица порядка
m n  ,
все элементы
которой различны. Переставить ее строки и столбцы так, чтобы ее
наибольший элемент оказался в левом верхнем углу.*/

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter M(lines): ";
    cin >> M;
    cout << "Enter N(columns): ";
    cin >> N;
    double** a = new double* [M];
    for (int i = 0; i < M; ++i) {
        a[i] = new double[N];
    }
    cout << "Enter Matrix:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }
    double max = a[0][0];
    int maxi = 0;
    int maxj = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    if (maxi != 0) {
        double* t = a[0];
        a[0] = a[maxi];
        a[maxi] = t;
    }
    if (maxj != 0) {
        for (int i = 0; i < M; ++i) {
            double temp = a[i][0];
            a[i][0] = a[i][maxj];
            a[i][maxj] = temp;
        }
    }
    cout << "New Matrix:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < M; ++i) {
        delete[] a[i];
    }
    delete[] a;
    cout << endl;
    system("pause");
    return 0;

}
