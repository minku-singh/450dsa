/*
Cyclically rotate an array by one 
Given an array, rotate the array by one position in clock-wise direction.

Example 1:
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/

// TWO POINTER APPROACH
#include <iostream>
using namespace std;

void cyclicallyRotate(int A[], int n)
{
    int start = 0;
    int end = n-1;

    swap(A[start], A[end]);
    start++;

    while(start <= end)
    {
        swap(A[start++], A[end]);
    }
}

void printA(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}


int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A)/sizeof(A[0]);

    cyclicallyRotate(A, n);
    printA(A, n);
}

/* Brute force 
#include <iostream>
using namespace std;

void cyclicallyRotate(int A[], int n)
{
    int temp = A[n-1];

    // traverse from last to first and shift adjacent elements
    for(int i = n-1; i > 0; i--)
    {
        A[i] = A[i-1];
    }

    A[0] = temp;
}

void printA(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A)/sizeof(A[0]);

    cyclicallyRotate(A, n);
    printA(A, n);
}
*/