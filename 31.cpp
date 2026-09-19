#include <iostream>
using namespace std;

int main() {
    int T;
    cin >>T;
    for(int i = 0; i<T;i++){
        int n;
        cin >>n;
        int t = 0;
        for(int j = 2;j<n;j++){
            if(n%j == 0){
                t++;
            }
        }
        if(n>1&&t==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}
// 64 位输出请用 printf("%lld")