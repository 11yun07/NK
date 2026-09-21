#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >>n>>m;
    long long int a[n][m];
    for(int i = 0;i<n;i++){
        a[i][0] = 1;
    }  
    for(int j = 0;j<m;j++){
        a[0][j] = 1;
    }
    int c = pow(10, 9) + 7;
    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
            a[i][j] = a[i][j]%c;
        }
    }
    cout << a[n-1][m-1]%c;
}
// 64 位输出请用 printf("%lld")