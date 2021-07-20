/*
Merge Without Extra Space 
Hard Accuracy: 36.41% Submissions: 68336 Points: 8
Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

Example 1:
Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
*/

#include <iostream>
#include <algorithm>
using namespace std;

void mergeArrays(int Arr1[], int Arr2[], int m, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(Arr1[i] > Arr2[0])
        {
            swap(Arr1[i], Arr2[0]);
            if(Arr2[0] > Arr2[1])
            {
                sort(Arr2, Arr2+m);
            }
        }
    }
}

void printArr(int Arr1[], int Arr2[], int m, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << Arr1[i] << " ";
    }

    for(int i = 0; i < m; i++)
    {
        cout << Arr2[i] << " ";
    }
}

int main()
{
    int Arr1[] = {1,3,5,7};
    int n = sizeof(Arr1)/sizeof(Arr1[0]);
    int Arr2[] = {0,2,6,8,9};
    int m = sizeof(Arr2)/sizeof(Arr2[0]);

    mergeArrays(Arr1, Arr2, m, n);
    printArr(Arr1, Arr2, m, n);
}