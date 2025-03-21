

// array1[] = {1 2 3 3 4 5 6}
// array2[] = {2 3 3 5 6 6 7}

// make use of two pointers approach place i on first element of array1 and place j on first element on array2.

// compare elements of both the array

// if(element of array 1 < element of array 2)
//     move i to the next index

// else (element of array 1 == element of array 2)
//     move indexes(i, j) of both the arrays to the next element



#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int arr1[], int arr2[], int n, int m)
{
        int i = 0, j = 0;
        vector<int> ans;
        while(i<n && j < m){
            if(arr1[i] < arr2[j]){
                i++;

            }else if(arr2[j] < arr1[i]){
                j++;
            }
            
            else{
                ans.push_back(arr2[j]);
                i++; j++;   
            }
        }
        return ans; 
}

int main()



{
    int n = 7, m = 7;
    int arr1[] = {1, 2, 3, 3, 4, 5, 6};
    int arr2[] = {2, 3, 3, 5, 6, 6, 7};
    vector<int> intersection = findIntersection(arr1, arr2, n, m);
    cout << "Intersection of arr1 and arr2 is  " << endl;
    for (auto &val : intersection)
        cout << val << " ";
    return 0;
}