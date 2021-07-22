/*
Given an array of size n and a number k, find all elements that appear more than n/k times

Given an array of size n, find all elements in array that appear more than n/k times. For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. There are two elements that appear more than two times, 2 and 3. 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> moreThan(int Arr[], int n, int k)
{
    vector <int> v;
    int count = 1;
    sort(Arr, Arr+n);

    for(int i = 1; i < n; i++)
    {
        if(Arr[i] == Arr[i-1])
        {
            count++;
        }

        else
        {
            count = 1;
        }

        if(count > (n/k))
        {
            v.push_back(Arr[i]);
        }
    }
    return v;
}

int main()
{
    int Arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    int k = 4;

    vector <int> v1;
    v1 = moreThan(Arr, n, k);

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}