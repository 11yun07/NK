#include <iostream>
using namespace std;

int main() {
    string s;
    cin >>s;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '5'){
            s[i] = '*';
        }
        cout <<s[i];
    }
}
// 64 位输出请用 printf("%lld")