#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 1;b = 1;
    int n;
    cin >>n;
    for(int i = 2;i<n;i++){
        int t = a;
        a = a+b;
        b = t;
    }
    cout<<a;
}
// 64 位输出请用 printf("%lld")