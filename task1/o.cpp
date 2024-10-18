//Стоимость покупки
#include <iostream>
using namespace std;

int main(){
    int r, c, rc, n;
    cin >> r >> c >> n;
    rc = (r * 100 + c) * n;
    cout << rc / 100 << ' ' << rc % 100;
}