

// This problem is a variation of the popular Dutch National flag algorithm.

// This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

// arr[0….low-1] contains 0. [Extreme left part]
// arr[low….mid-1] contains 1.
// arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array

// The middle part i.e. arr[mid….high] is the unsorted segment.

// Approach:

// The steps will be the following:

// First, we will run a loop that will continue until mid <= high.
// There can be three different values of mid pointer i.e. arr[mid]
// If arr[mid] == 0, we will swap arr[low] and arr[mid] and will increment both low and mid. Now the subarray from index 0 to (low-1) only contains 0.
// If arr[mid] == 1, we will just increment the mid pointer and then the index (mid-1) will point to 1 as it should according to the rules.
// If arr[mid] == 2, we will swap arr[mid] and arr[high] and will decrement high. Now the subarray from index high+1 to (n-1) only contains 2.
// In this step, we will do nothing to the mid-pointer as even after swapping, the subarray from mid to high(after decrementing high) might be unsorted. So, we will check the value of mid again in the next iteration.
// Finally, our array should be sorted.

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
