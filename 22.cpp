#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%400 == 0 || (n%4 == 0 && n%100 != 0)){
        cout<< "yes"<<endl;
    }else{
        cout << "no"<<endl;
    }
    
}
// 64 位输出请用 printf("%lld")