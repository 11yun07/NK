#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int K;
    cin >>K;
    cout <<fixed<<setprecision(10)<<(K - 273.15)*1.8 + 32<<endl;
}
// 64 位输出请用 printf("%lld")