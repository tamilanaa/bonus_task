//mnozhestva
//разные

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> uni;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        uni.insert(a);
    }
    cout << uni.size();

    return 0;
}
