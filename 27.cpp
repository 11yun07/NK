#include <iostream>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < 3; i++) {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << "The maximum number is : " << max << '\n';
    cout << "The minimum number is : " << min << '\n';
}
// 64 位输出请用 printf("%lld")