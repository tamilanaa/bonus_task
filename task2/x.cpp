//коровы
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << n << " korova";
    }else if(n == 0 || n >= 5){
        cout << n << " korov";
    }else{
        cout << n << " korovy";
    }
    return 0;
}