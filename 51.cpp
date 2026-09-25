#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<vector<int>> a(n,vector<int>(n,1)); 
    for(int i = 2;i<n;i++){
        for(int j = 1;j<i;j++){
            a[i][j] = a[i-1][j - 1] + a[i - 1][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<< a[i][j];
            cout << " ";
        }
        cout <<endl;
    }
}
// 64 位输出请用 printf("%lld")