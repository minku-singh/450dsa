/* Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. */

/* TOURNAMENT METHOD : DIVIDE AND CONQUER 
Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array. */

#include <iostream>
using namespace std;

class Pair
{
    public:
    int min;
    int max;
};         // this is very imp mannnnn ; use it

Pair getMinMax(int arr[], int start, int end)
{
    Pair minmax, mml, mmr;

    // only one element in the array
    if(start == end)
    {
        minmax.max = arr[start];
        minmax.min = arr[start];
        return minmax;
    }

    // only two elements in the array
    if(end == start + 1)
    {
        if(arr[end] > arr[start])
        {
            minmax.max = arr[end];
            minmax.min = arr[start];
        }

        else
        {
            minmax.max = arr[start];
            minmax.min = arr[end];
        }
        return minmax;
    }

    int mid = (start+end)/2;
    mml = getMinMax(arr, start, mid);
    mmr = getMinMax(arr, mid+1, end);

    if(mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }

    if(mml.min < mmr.min)
    {
        minmax.min = mml.min;
    }
    else
    {
        minmax.min = mmr.min;
    }

    return minmax;

}

int main()
{
    int arr[] = {23, 56,12, 76,45};
    int n = sizeof(arr)/ sizeof(arr[0]);

    Pair ans;
    int start = 0;
    int end = n-1;
    ans = getMinMax(arr, start, end);

    cout << "max : " << ans.max << ", min : " << ans.min;
}

/* #include <iostream>
using namespace std;

class Pair
{
    public : 
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    // to store the ans
    Pair minmax;

    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }

    if(arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }

    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }

        else if(arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

int main()
{
    int arr[] = {23, 56,12, 76,45};
    int n = sizeof(arr)/ sizeof(arr[0]);

    Pair ans;
    ans = getMinMax(arr, n);
    cout << "max : " << ans.max << ", min : " << ans.min;
}
*/