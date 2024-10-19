//символы и строки
// являкется ли слово палиндромом?

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s; 
    bool pal = true; 
    int left = 0; 
    int right = s.size() - 1; 

    while(left < right){
        if (s[left] != s[right]){
            pal = false;
            break;
        }
        left++; 
        right--;
    }if(pal){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}
