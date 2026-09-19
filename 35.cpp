#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int s = 0;
    int s1 = 0;
    for(int i = 1;i<=n ;i++){
        s += i;
        s1 += s;
    }
    cout << s1;
}
// 64 位输出请用 printf("%lld")