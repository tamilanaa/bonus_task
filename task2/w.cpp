//тип треугольника
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a){
        cout << "impossible";
    }else {
        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;

        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2){
            cout << "right" << endl;
        }else if (a2 + b2 > c2 || a2 + c2 > b2 || b2 + c2 > a2){
            cout << "acute" << endl;
        }else {
            cout << "obtuse" << endl;
        }
    }
    return 0;
}

