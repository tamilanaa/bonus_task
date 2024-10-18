//сумма - 1  
//1+1/22+1/32+...+1/n2.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    double s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        s += 1.0 / (i * i);
    }cout << s;

    return 0;
}