//точная степень двойки
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

       while (n > 1) {
        if (n % 2 != 0) { 
            cout << "NO" << endl;
            return 0;
        }
        n /= 2; 
    } cout << "YES";

    return 0;
}