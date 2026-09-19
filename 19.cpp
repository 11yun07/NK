#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b>>c;
    if((a%10 == 0) && (b%10 == 0) && c%10 == 0){
        cout << a*0.2 + b*0.3 + c*0.5<<endl;
    }
}
// 64 位输出请用 printf("%lld")