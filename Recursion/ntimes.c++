#include <iostream>>
using namespace std;

int count = 0;
void cnt()
{
    if (count == 4)
        return;
    cout << "Hello bsdk" << count << endl;
    count++;
    cnt();
}

int main()
{
    cnt();
    return 0;
}