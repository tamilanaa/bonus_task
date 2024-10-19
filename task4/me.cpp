// mnozhestva
// встречалось ли раньше

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> boldy;  
    int a;

    while (cin >> a) {
        if (boldy.find(a) != boldy.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            boldy.insert(a);
        }
    }
    return 0;
}
