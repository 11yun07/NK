#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a>>b;
    if(a>b){
        cout <<">"<<endl;
    }else if(a<b){
        cout << "<"<<endl;
    }else{
        cout<<"="<<endl;
    }
}
// 64 位输出请用 printf("%lld")