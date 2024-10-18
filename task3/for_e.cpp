//геометрическая прогрессия 
//1+a+a2+...+an
 
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a, n, s = 0;
    cin >> a >> n;
    for(int i = 0; i <= n; i++){
        s += pow(a, i);
    }cout << s;
    return 0;
}
