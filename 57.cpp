#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    string s;
    cin >>s;
    for(int i = 0;i<s.length();i++){
        s[i] = (s[i] - 'a' + n)%26 + 'a';
    }
    cout<<s;
}
// 64 位输出请用 printf("%lld")