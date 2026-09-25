#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >>s;
    for(int i = 0;i+3<=s.length();i++){
        string s1 = s.substr(i,3);
        if(s1 == "bob" || s1 == "Bob" || s1 == "bOb" || s1 == "boB" || s1 == "BOb" || s1 == "BoB" || s1 == "bOB" || s1 == "BOB"){
            cout <<i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
// 64 位输出请用 printf("%lld")