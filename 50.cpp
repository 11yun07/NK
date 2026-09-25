#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >>a[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout << a[j][i];
            cout <<" ";
        }
        cout <<endl;
    }
}
// 64 位输出请用 printf("%lld")