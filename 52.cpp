#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            char c;
            cin >>c;
            if(c == '.'){
                a[i][j] = 0;
            }else{
                a[i][j] = -1;
            }
        }
    }
    vector<vector<int>> b(n,vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((i>=1 && i<n-1) && (j>=1 && j<m-1)){
                b[i][j] = abs(a[i-1][j-1]) + abs(a[i-1][j]) + abs(a[i-1][j+1]) + abs(a[i][j-1]) + abs(a[i][j+1]) + abs(a[i+1][j-1]) + abs(a[i+1][j]) + abs(a[i+1][j+1]);
            }
        }
    }
    b[0][0] = abs(a[0][1]) + abs(a[1][1]) + abs(a[1][0]);
    b[0][m-1] =abs(a[0][m-2])+ abs(a[1][m-1])+ abs(a[1][m-2]);
    b[n-1][0] =abs(a[n-1][1])+ abs(a[n-2][0])+ abs(a[n-2][1]);
    b[n-1][m-1] = + abs(a[n-1][m-2])+ abs(a[n-2][m-2])+ abs(a[n-2][m-1]);

    for(int j = 1;j<m-1;j++){
        b[0][j] = abs(a[0][j-1])+ abs(a[0][j+1])+ abs(a[1][j-1])+ abs(a[1][j])+ abs(a[1][j+1]);
        b[n-1][j] = abs(a[n-1][j-1])+ abs(a[n-1][j+1])+ abs(a[n-2][j-1])+ abs(a[n-2][j])+ abs(a[n-2][j+1]);
    }

    for(int i = 1;i<n-1;i++){
        b[i][0] = abs(a[i - 1][0])+ abs(a[i+1][0])+ abs(a[i][1])+ abs(a[i+1][1])+ abs(a[i-1][1]);
        b[i][m-1] = abs(a[i+1][m-1])+ abs(a[i-1][m-1])+ abs(a[i][m-2])+ abs(a[i+1][m-2])+ abs(a[i-1][m-2]);
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j] == -1){
                cout <<"*";
            }else{
                cout <<b[i][j];
            }
        }
        cout<<endl;
    }

}
// 64 位输出请用 printf("%lld")