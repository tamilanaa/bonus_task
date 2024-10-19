// целые числа
// номер строки и страницы

#include <iostream>
using namespace std;

int main() {
    int k, n; 
    cin >> k >> n;

    int page = (n - 1) / k + 1;
    int line = n % k;
    if (line == 0) {
        line = k; 
    }
    cout << page << " " << line ;

    return 0;
}
