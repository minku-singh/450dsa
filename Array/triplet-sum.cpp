/*
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool tripletSum(int Arr[], int n, int X)
{
    sort(Arr, Arr+n);

    for(int i = 0; i < n; i++)
    {
        int l = i+1;
        int r = n-1;

        while(l<r)
        {
            if(Arr[i] + Arr[l] + Arr[r] == X)
            {
                return true;
            }
            else if(Arr[i] + Arr[l] + Arr[r] > X)
            {
                r--;
            }
            else
            {
                l--;
            }
        }
    }
    return false;
}

int main()
{
    int Arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int X = 13;
    cout << tripletSum(Arr, n, X);
}