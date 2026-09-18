#include <iostream>
using namespace std;

int main() {
    int a;
    cin >>a;
    cout << (a%100 - a%10)/10<<endl;
}
// 64 位输出请用 printf("%lld")