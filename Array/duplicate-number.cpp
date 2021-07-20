/*
Find the Duplicate Number 

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
*/

#include <iostream>
using namespace std;

int duplicateNumber(int Arr[], int n)
{
    int slow = Arr[0];
    int fast = Arr[0];
    
    do
    {
        slow = Arr[slow];
        fast = Arr[Arr[fast]];
    }while(slow != fast);

    fast = Arr[0];
    while(slow != fast)
    {
        slow = Arr[slow];
        fast = Arr[fast];
    }

    return slow;
}

int main()
{
    int Arr[] = {1,3,4,2,2};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    cout << duplicateNumber(Arr, n);
}