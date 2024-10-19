//символы и строки
//удали пробелы

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    bool probel = false; 

    for (int i = 0; i < a.size(); i++){
        char c = a[i];
        if(c == ' '){
            if (!probel){
                b += ' '; 
                probel = true; 
            }
        }else{ 
            b += c; 
            probel = false; 
        }
    }
    cout << b;
    return 0;
}
