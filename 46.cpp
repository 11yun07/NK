#include <iostream>
using namespace std;

int main() {
    int n,k,m;
    cin >>n>>k>>m;
    int a[n];
    for(int i = 0;i <n ;i++){
        a[i] = 0;
    }
    int left = k;
    int t = 0;
    int sum = 0;
    while(sum < n-1){
        if(a[left%n] == 0){
            t+=1;
            if(t == m){
                a[left%n] = 1;
                t = 0;
                sum +=1;
            }
        }
        left = left + 1;    
    }
    for(int i = 0;i<n;i++){
        if(a[i] == 0){
            cout <<i;
            return 0;
        }
    }
}
// 64 位输出请用 printf("%lld")