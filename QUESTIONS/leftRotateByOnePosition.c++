#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    // ! taking input for the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // ! rotating the array by one position by placing the first element at the temp variable and then shifting all the elements to the left by one position and then placing the temp variable at the last position
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    // ! printing the array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}