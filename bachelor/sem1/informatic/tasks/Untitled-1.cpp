#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    bool plus = false;
    bool correct = true;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a > 0){
            plus = true;
        }
        if (plus && a < 0){
            correct = false;
        }
    }
    if (correct) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}
