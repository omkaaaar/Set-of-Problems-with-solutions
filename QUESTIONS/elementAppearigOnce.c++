#include <bits/stdc++.h>
using namespace std;

// Given an sorted array [1 2 4 5 6] find the element that is missing.

// The missing element is the element that is missing in the array.

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // we create a hashtable and assign it with zero values.
    // int hash[n + 1] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] = 1;
    // }

    // // traverse the hash table and find element that index value with 0 and return it as answer
    // for (int i = 1; i <= n + 1; i++)
    // {
    //     if (hash[i] == 0)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    // return 0;


    int sum = n*(n+1)/2;
    int sum2 = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum2 += arr[i];
    }
    int ans = sum - sum2;
    cout << ans << endl;
    return 0;
}