#include <iostream>
using namespace std;

// void fun(int i, int add)
// {
//     if (i < 1)
//     {
//         cout << add;
//         return;
//     }
//     fun(i - 1, add + i);
// }
int main()
{
    // int n;
    // cin >> n;
    // fun(n, 0);
    // return 0;

    int n, sum = 0, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}