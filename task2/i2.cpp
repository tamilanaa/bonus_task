// королева / ферзь
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if(x == x1 || y == y1 || abs(x - x1) == abs(y - y1)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}