#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int a[n],b[n];
    for(int i = 0;i<n;i++){
        cin >>a[i];
        b[i] = 0;
    }
    cout <<b[0]<<" ";
    for(int i = 1;i<n;i++){
        for(int j =i - 1;j>=0;j--){
            if(a[j]<a[i])
            b[i] += 1;
        }
        cout <<b[i]<<" ";
    }
}
// 64 位输出请用 printf("%lld")