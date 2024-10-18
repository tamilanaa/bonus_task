// билеты на метро 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t60 = n / 60;      
    n %= 60;                  
    int t10 = n / 10;      
    n %= 10;                  
    int t1 = n;           

    if (t1 * 15 > 125) {   
        t10++;
        t1 = 0;
    }if (t10 * 125 + t1 * 15 > 440) {  
        t60++;
        t10 = 0;
        t1 = 0;
    }
    cout << t1 << " " << t10 << " " << t60 << endl;
    return 0;
}
