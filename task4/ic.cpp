//целые числа
//k - ая секунда суток

#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    int h = k / 3600;
    int m = (k % 3600)/ 60;
    cout <<"It is " << h << " hours " << m << " minutes.";

    return 0;
}

// входные данные
// 13257
// выходные данные
// It is 3 hours 40 minutes.