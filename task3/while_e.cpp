//двоичный логарифм 
#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n; 
    int k = 0;     
    int a = 1;

    while (a < n) {
        a *= 2; 
        k ++; 
    }

    cout << k;
    return 0;
}