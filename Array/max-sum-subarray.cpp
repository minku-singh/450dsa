/*
Kadane's Algorithm 
Medium Accuracy: 51.0% Submissions: 100k+ Points: 4
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Example 1:
Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
*/

// KADANE'S ALGORITHM
#include <iostream>
using namespace std;

int maxSum(int Arr[], int n)
{
    int c_sum = Arr[0];
    int o_sum = Arr[0];

    for(int i = 1; i < n; i++)
    {
        if(c_sum > 0)
        {
            c_sum += Arr[i];
        }

        else
        {
            c_sum = Arr[i];
        }

        // check if overall sum is less than current sum or not
        if(o_sum < c_sum)
        {
            o_sum = c_sum;
        }
    }
    return o_sum;
}

int main()
{
    int Arr[] = {-1,-2,-3,-4};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    cout << maxSum(Arr, n);
}
