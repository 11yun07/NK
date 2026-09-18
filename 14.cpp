#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x1,y1;
    int x2,y2;
    cin >>x1>>y1;
    cin >>x2>>y2;
    double de,dm,delta;
    de = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    dm = abs(x1 - x2) + abs(y1 - y2);
    delta = fabs(de - dm);
    cout << fixed << setprecision(15) << delta << endl;
}
// 64 位输出请用 printf("%lld")