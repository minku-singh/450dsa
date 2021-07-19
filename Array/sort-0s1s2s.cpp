// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order. DUTCH NATIONAL FLAG ALGORITHM

#include <iostream>
#include <algorithm>
using namespace std;

void sortArr(int arr[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid <= end)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[start++], arr[mid++]); // in next statement, both will be incremented
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid], arr[end--]);
            break;
        }
    }
}

void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 2, 1, 2, 0, 1, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArr(arr, n);
    printArr(arr, n);
}

