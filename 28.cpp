#include <iostream>
using namespace std;

int main() {
    int b;
    cin >>b;
    int a = b%100;
    if(a>=3 && a<= 5){
        cout <<"spring"<<endl;
    }else if(a>=6 && a<=8){
        cout <<"summer"<<endl;
    }else if(a>=9 && a<=11){
        cout <<"autumn"<<endl;
    }else{
        cout <<"winter"<<endl;
    }
}
// 64 位输出请用 printf("%lld")