#include <iostream>>
using namespace std;

void cnt(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    cnt(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    cnt(n, n);
    return 0;
}