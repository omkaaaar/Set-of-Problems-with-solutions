
// ## 🧠 Problem: Two Sum

// You are given:
// - An integer array `arr[]`
// - An integer `target`

// ### ✅ Variant 1:
// Check if **any two different numbers** in the array **add up to the target**.

// - Return `"YES"` if such a pair exists.
// - Otherwise, return `"NO"`.

// ### 🔢 Variant 2:
// Find the **indices** of the two numbers whose sum equals the target.

// - Return the pair of indices `[i, j]` (0-based).
// - If no such pair exists, return `[-1, -1]`.

// 📝 **Note:** You cannot use the **same element twice**.

// ---

// ### 🧪 Examples:

// #### Example 1:
// ```
// Input:  arr = [2, 6, 5, 8, 11]
//         target = 14

// Output:
// Variant 1 → "YES"
// Variant 2 → [1, 3]  (6 + 8 = 14)
// ```

// #### Example 2:
// ```
// Input:  arr = [2, 6, 5, 8, 11]
//         target = 15

// Output:
// Variant 1 → "NO"
// Variant 2 → [-1, -1]  (No such pair exists)
// ```

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}