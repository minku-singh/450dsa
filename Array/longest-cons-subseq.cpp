/*
Longest consecutive subsequence 

Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int subsequence(int Arr[], int n)
{
    vector <int> v;
    v.push_back(Arr[0]);

// adding only non-repeated items
    for(int i = 1; i < n; i++)
    {
        if(Arr[i] != Arr[i-1])
        {
            v.push_back(Arr[i]);
        }
    }

    int largest_sub = 1;
    int current_lar = 1;

    for(int i = 1; i < n; i++)
    {
        if(v[i] == v[i-1]+1)
        {
            current_lar++;
        }
        else
        {
            current_lar = 1;
        }

        if(current_lar > largest_sub)
        {
            largest_sub = current_lar;
        }
    }
    return largest_sub;
}

int main()
{
    int Arr[] = {1,9,3,10,4,20,2};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    sort(Arr, Arr+n);
    cout << subsequence(Arr, n);
}