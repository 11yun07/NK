#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >>n>>m;
    long long int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            long long int a;
            cin >>a;
            sum +=a;
        }
    }
    cout << sum;
}
// 64 位输出请用 printf("%lld")