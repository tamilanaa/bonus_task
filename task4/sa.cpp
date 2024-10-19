//символы и строки
// проверить, является ли символ цифрой

#include <iostream>
using namespace std;
int main(){
    char a;
    cin >> a;

    bool isdigit = false;
    if(a >= '0' && a <= '9'){
        isdigit = true;
    }if(isdigit){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}