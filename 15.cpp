#include <iostream>
using namespace std;

int main() {
    int a;
    cin >>a;
    cout<<a/1000 + a%1000/100 + a%100/10 + a%10<<endl;
}
// 64 位输出请用 printf("%lld")