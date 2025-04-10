#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    // We assume elements are in a known small range (like 0 to 1000)
    const int MAX = 100005;
    int freq[MAX] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < MAX; i++)
    {
        if (freq[i] > n / 2)
        {
            return i;
        }
    }

    return -1;
}

// ! Brute force approach
// int majorityElement(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == arr[i])
//             {
//                 cnt++;
//             }
//         }

//         if (cnt > n / 2)
//             return arr[i];
//     }

//     return -1;
// }

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = majorityElement(arr, n);
    cout << "The majority element is: " << ans << endl;

    return 0;
}
