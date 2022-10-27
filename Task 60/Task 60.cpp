// Task 60.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Let a real matrix of order
m n  ,
all elements
which are different. Rearrange its rows and columns so that it
The largest item is in the upper left corner.*/

#include <iostream>
using namespace std;

int main()
{
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
