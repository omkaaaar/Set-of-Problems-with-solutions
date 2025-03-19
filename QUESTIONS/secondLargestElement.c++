// Online C++ compiler to run C++ program online
#include <iostream>
// #include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    // for(int i = 0; i<n;i++){
    //     if(secondLargest < arr[i] && arr[i] != largest){
    //         secondLargest = arr[i];
    //     }
    // }
    cout << secondLargest;
    return 0;
}