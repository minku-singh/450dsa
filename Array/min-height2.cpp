/*
Minimize the Heights II 
Medium Accuracy: 28.62% Submissions: 100k+ Points: 4
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
*/

#include <iostream>
#include <cmath>
using namespace std;

int minHeight(int Arr[], int n, int k)
{
    int minEle;
    int maxEle;

    int result = Arr[n-1]-Arr[0];

    for(int i = 0; i < n; i++)
    {
        minEle = min(Arr[0]+k, Arr[i]-k);
        maxEle = max(Arr[i-1]+k, Arr[n-1]-k);
        result = min(result, maxEle - minEle);
    }

    return result;
}

int main()
{
    int Arr[] = {1, 5, 8, 10};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int k = 2;
    cout << minHeight(Arr, n, k);
}