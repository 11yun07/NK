#include <iostream>
#include <vector>
using namespace std;

int main() {
    int L,M;
    cin >>L>>M;
    int sum = 0;
    vector<int> a(L+1,0);
    for(int i = 0;i<M;i++){
        int l,r;
        cin >>l>>r;
        for(int i = l;i<=r;i++){
            a[i] = 1;
        }
    }
    for(int i = 0;i<=L;i++){
        sum += a[i];
    }
    cout << L+1 - sum;
}
// 64 位输出请用 printf("%lld")