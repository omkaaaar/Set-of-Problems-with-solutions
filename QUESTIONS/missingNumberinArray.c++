#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ? Traverse the array and campare the value.
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        //! if the value of flag is 0 then that value is our missing value

        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
                // ! After comparing if the value is 1 then we brak out of the loop
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}