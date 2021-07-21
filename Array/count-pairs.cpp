/*
Count pairs with given sum 

Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
*/

#include <iostream>
using namespace std;

int countPairs(int Arr[], int n, int k)
{
    int ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(Arr[i] + Arr[j] == k)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int Arr[] = {1, 5, 7, 1};
    int n = 4;
    int k = 6;

    cout << countPairs(Arr, n, k);
}