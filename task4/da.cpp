// действительные числа
// a + b = c

#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    if(a + b == c){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}