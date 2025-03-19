#include<iostream>
using namespace std;

int sum(int a, int b){
    // cout << "Hey "<< name;
    int add = a+b;
    return add;
}
int main(){
    int a,b;
    cin >> a >> b;
    int result = sum(a,b);
    cout << "Answers is: " << result << endl;
    return 0;
}