#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int sum = 0;
    for(int i = 1;i < n;i++){
        for(int j = 0;j<i;j++){
            sum += a[i][j];
        }
    }
    if(sum == 0){
        cout << "YES";
    }else{
        cout <<"NO";
    }

}
// 64 位输出请用 printf("%lld")