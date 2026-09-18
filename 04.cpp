#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int a;
    long long int b;
    float c;
    char d;
    string e;
    cin >> a>>b >>c >>d >>e;
    cout << a <<endl;
    cout << b <<endl;
    cout << fixed << setprecision(1) << c << endl;
    cout << d <<endl;
    cout << e <<endl;
}
// 64 位输出请用 printf("%lld")