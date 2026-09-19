#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    cout <<2*(a*b + a*c + b*c)<<"\n"<<a*b*c<<endl;
}
// 64 位输出请用 printf("%lld")