//ax2 + bx + c = 0.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if(d > 0){
        int x1 = (-b + sqrt(d)) / (2 * a);
        int x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << ' ' << x2;
    }else if(d == 0){
        cout << -b / (2 * a);
    }
    return 0;
}