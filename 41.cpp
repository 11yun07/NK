#include <iostream>
using namespace std;

int main() {
    long long int a[100];
    for(int i = 0; i<100;i++){
        a[i] = -1;
    }
    int n = -1;
    int i = 0;
    while(n != 0){
        cin >>n;
        a[i] = n;
        i++;
    }
    i = i - 2;
    for(;i>=0;i--){
        cout<<a[i];
        cout<<" ";
    }
}
// 64 位输出请用 printf("%lld")