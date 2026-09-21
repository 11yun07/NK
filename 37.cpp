#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    n = abs(n);
    int s = 0;
    while(n!=0){
        int b = n%10;
        n /= 10;
        s += b;
    }
    cout << s;
}
// 64 位输出请用 printf("%lld")