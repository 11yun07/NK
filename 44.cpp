#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n,k;
        cin >> n>>k;
        int a;
        int s,cnt;
        s = 0;
        cnt = 0;
        for(int j = 0;j<n;j++){
            cin >> a;
            if(a>=k){
                s = s+a;
            }else if(a == 0 && s>=1){
                s = s -1 ;
                cnt = cnt + 1;
            }
        }
        cout <<cnt<<endl;
    }
    

}
// 64 位输出请用 printf("%lld")