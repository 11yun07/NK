#include <iostream>
using namespace std;

int main() {
    long int n,x;
    cin >>n>>x;
    int t = 0;
    for(long int i = 1;i<=n;i++){
        long int j = i;
        while(j != 0){
            if(j%10 == x){
                t++;
            }
            j /= 10;
        }
    }
    cout <<t<<endl;
}
// 64 位输出请用 printf("%lld")