/*
Array Subset of another array 

Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
*/

#include <iostream>
#include <string>
using namespace std;

string subset(int Arr1[], int Arr2[], int m, int n)
{
    int count = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(Arr1[i] == Arr2[j])
            {
                count++;
            }
        }
    }

    if(count == n)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int Arr1[] = {11, 1, 13, 21, 3, 7};
    int Arr2[] = {11, 3, 7, 1};
    int m = sizeof(Arr1)/sizeof(Arr1[0]);
    int n = sizeof(Arr2)/sizeof(Arr2[0]);

    cout << subset(Arr1, Arr2, m, n);
}