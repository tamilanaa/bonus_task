//степени двойки 
#include <iostream> 
using namespace std;

int main(){
    int n, a = 1;
    cin >> n;
    cout << a << endl;
    while(a < n){
        a *= 2;
        if(a >= n){
            break;
        }
        cout << a << endl;

    }
    return 0;
}