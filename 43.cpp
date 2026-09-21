#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >>T;
    for(int i = 0;i <T;i++){
        int n;
        cin >>n;
        long long int a[n];
        for(int j = 0;j<n;j++){
            cin >>a[j];
        }
        long long int max = a[0];
        long long int min = a[0];
        double avg = 0;
        for(int j = 0;j<n;j++){
            if(max < a[j]){
                max = a[j];
            }
            if(min > a[j]){
                min = a[j];
            }
            avg += a[j];
        }
        cout<<max - min<<" ";
        avg = avg/n;
        double std = 0;
        for(int j = 0;j <n;j++){
            std = std + pow(a[j] - avg,2);
        }
        std = std / n;
        cout << fixed<<setprecision(3)<<std<<endl;
    }
}
// 64 位输出请用 printf("%lld")