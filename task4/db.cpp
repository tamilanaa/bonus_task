//действительные числа
// пробежка 1

#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    int z = x;
    int c = 1;
    while(z < y){
        z += z * 0.7;
        c++;
    }cout << c;
    return 0;
}