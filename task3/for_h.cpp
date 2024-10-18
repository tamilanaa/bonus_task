//сумма степеней
// 1+2+2^2+2^3+…+2^N. 

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, s = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){ 
        s += pow(2, i);
    }cout << s;
    return 0;
}