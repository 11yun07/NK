#include <iostream>
using namespace std;

int main() {
    string n;
    cin >>n;
    for(int i = n.length() - 3;i>0;i -= 3){
        n.insert(i,",");
    }
    cout <<n;
}
// 64 位输出请用 printf("%lld")