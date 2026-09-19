#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>>c;
    float avg;
    avg = (a + b + c)/3.00;
    if(avg >= 60){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
// 64 位输出请用 printf("%lld")