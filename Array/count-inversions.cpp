/*
Count Inversions 
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
*/

#include <iostream>
using namespace std;

int countInversion(int Arr[], int n)
{
    int inversion = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(Arr[j] < Arr[i])
            {
                inversion++;
            }
        }
    }
    return inversion;
}

int main()
{
    int Arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    cout << countInversion(Arr, n);
}