#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a1 = 0;
    int a2 = 1;
    int a3 = 1;
    if(n == 1){
        cout << 0;
        return 0;
    }
    if(n == 2 || n==3){
        cout << 1;
        return 0;
    }
    for(int i = 3;i<n;i++){
        int t2 = a2;
        int t3 = a3;
        a3 = a1 + 2*a2 + a3;
        a1 = t2;
        a2 = t3;
    }
    cout << a3 <<endl;
}
// 64 位输出请用 printf("%lld")