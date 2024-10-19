//символы и строки
//совпалают ли строки?

#include <iostream>
#include <string>
using namespace std;

bool compare(string s1, string s2){
    return s1 == s2;
}
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(compare(s1, s2)){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}