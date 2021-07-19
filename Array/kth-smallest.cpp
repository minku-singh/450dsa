/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
*/

/*Using map from STL*/
#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int kthSmallest(map<int, int>m, int k)
{
    int freq = 0;
    for(auto it = m.begin(); it != m.end(); it++)
    {
        freq += it -> second;

        if(freq >= k)
        {
            return it -> first;
        }
    }
    return 0;
}

int main()
{
    int arr[] = { 12, 3,3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    map <int, int> m;
    for(int i = 0; i < n; i++)
    {
        // matlab jo array ke elements hai wo index ban jaenge, and un index ke parallel jo bhi values honge wo ++ ho jaenge
        m[arr[i]]++;  // elements of array as first, frequency as second
    }

    cout << kthSmallest(m, k);

}

/*
Using SET from STL

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    set<int> s(arr, arr + n);
    set<int>::iterator itr = s.begin(); 

    advance(itr, k-1);

    cout << *itr << "\n";

    return 0;
}
*/