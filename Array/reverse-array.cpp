// ITERATIVE AND RECURSIVE APPROACH

/* Write a program to reverse an array or string
Difficulty Level : Basic
Last Updated : 08 Sep, 2020
 
Given an array (or string), the task is to reverse the array/string.
Examples : 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include <iostream>
#include <algorithm> // :: swap(var, var)
using namespace std;

// Iterative function to reverse the array
void reverseArr(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// OR, (write either recursive or iterative)

// Recursive function to reverse an array
void recursiveReverse(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    swap(arr[start], arr[end]);
    recursiveReverse(arr, start+1, end-1);
}

// function to print the array
void printArr(int arr[],int end)
{
    for(int i = 0; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;

    reverseArr(arr, start, end);
    // or
    recursiveReverse(arr, start, end);
    printArr(arr, end);
}