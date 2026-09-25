#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >>n;
    string s;
    for(int i = 1;i<=1000;i++){
        s = s + to_string(i);
    }
    cout << s[n-1];
}
// 64 位输出请用 printf("%lld")