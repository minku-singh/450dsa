/* 
Move all negative numbers to beginning and positive to end with constant extra space

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
*/

// Two pointer approach

#include <iostream>
using namespace std;

void toBeginToEnd(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        if(arr[start] > 0 && arr[end] > 0)
        {
            end--;
        }

        else if(arr[start] > 0 && arr[end] < 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }

        else if(arr[start] < 0 && arr[end] < 0)
        {
            start++;
        }

        else if(arr[start] < 0 && arr[end] > 0)
        {
            start++;
            end--;
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
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    toBeginToEnd(arr, n);
    printArr(arr, n);
}


