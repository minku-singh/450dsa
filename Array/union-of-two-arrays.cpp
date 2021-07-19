/* Intersection INCOMPLETE
Given two unsorted arrays that represent two sets (elements in every array are distinct), find the union and intersection of two arrays.
For example, if the input arrays are: 
arr1[] = {7, 1, 5, 2, 3, 6} 
arr2[] = {3, 8, 6, 20, 7} 
Then your program should print Union as {1, 2, 3, 5, 6, 7, 8, 20} and Intersection as {3, 6, 7}
*/

// Unordered map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]); 

    int arr2[] = {3, 8, 6, 20, 7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    unordered_map <int, int> m;

    for(int i = 0; i < n1; i++)
    {
        m[arr1[i]]++;
    }

    for(int i = 0; i < n2; i++)
    {
        m[arr2[i]]++;
    }

    cout << "Union : ";
    for(auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr -> first << " ";
    }
    cout << endl;


    // This didnt work
    cout << "Intersection : ";
    for(auto itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr -> second > 0)
        {
            cout << itr -> first << " ";
        }
    }    


}

/* Using set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]); 

    int arr2[] = {3, 8, 6, 20, 7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    set <int> s;

    for(int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }

    cout << "Union : ";
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

}
*/