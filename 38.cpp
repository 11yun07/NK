#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i = 0;i <= n;i++){
        int t = i;
        int g = 0;
        for(int j = 0;j<=5;j++){
            if(t%10 == 4){
                g++;
                
            }
            t = t/10;
        }
        if(i%4 != 0 && g == 0){
            cout<<i<<endl;
        }
    }
}
// 64 位输出请用 printf("%lld")