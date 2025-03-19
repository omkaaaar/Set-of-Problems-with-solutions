#include <bits/stdc++.h>
using namespace std;

// Reverse function
int reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// ! This is a function to rotate the array by d places
// ? if we observe correctly it is just reverse of the array from 0 to K - 1 and from K to N and after that rotatind the entie array
// ? eg: array [1 2 3 4 5] k=2
// ? [1 2] [3 4 5] now reverse 0 to K-1 i.e: [2 1] and reverse [K to N] i.e: [5 4 3]
// ? now we have the entire array as [2 1 5 4 3] and if we reverse it again we get [3 4 5 1 2]

void leftRotate(int arr[], int n, int k)
{
    reverse(arr, 0, k - 1);
    // ! here's what happen when we call reverse function on 0 to K-1
    // ! reverse 0 to K-1 i.e: [2 1]
    reverse(arr, k, n - 1);
    // ! reverse [K to N] i.e: [5 4 3]

    reverse(arr, 0, n - 1);
    // ! reverse 0 to N-1 we get [3 4 5 1 2]
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    leftRotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}