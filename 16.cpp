#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a/3600<<" "<< (a - 3600*(a/3600))/60<<" "<< a - 3600*(a/3600) -  60*((a - 3600*(a/3600))/60)<<endl;
}
// 64 位输出请用 printf("%lld")