#include <iostream>
using namespace std;
 
int main() {
    int X, Y, T;
    cout << "Enter the number of test case: ";
    cin >> T;
    for(int i=0; i<T; i++) {
        cout << "Enter the prices of two chocolates: ";
        cin >> X >> Y;
        if(X>Y) {
            cout << "Second chocolate is cheaper." << endl;
        }
        else if (X<Y) {
            cout << "First chocolate is cheaper." << endl;
        } else {
            cout << "Any" << endl;
        }
    }
    return 0;
}