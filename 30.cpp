#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b && a+b!=0) { // 注意 while 处理多个 case
        cout << a + b << endl;
    }
}
// 64 位输出请用 printf("%lld")