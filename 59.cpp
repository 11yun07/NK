#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    string a;
    a = a + s[0];
    for(int i = 0;i<s.length();i++){
        if(s[i] == ' '){
            a = a + s[i+1];
        }
    }
    for(int i = 0;i<a.length();i++){
        if(a[i]>='a' && a[i] <= 'z'){
            a[i] = a[i] - 'a' + 'A';
        }
    }
    cout << a;
}
// 64 位输出请用 printf("%lld")