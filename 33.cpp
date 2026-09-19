#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double s = 0;
    for(int i = 0;i< n;i++){
        s += double(1)/(i+1);
    }
    cout << s;
}
// 64 位输出请用 printf("%lld")