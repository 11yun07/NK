#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    cout <<fixed <<setprecision(10) << a<<endl;
}
// 64 位输出请用 printf("%lld")