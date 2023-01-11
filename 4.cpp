#include <iostream>
using namespace std;

int main() {
    int T, following, followers;
    cout << "Enter the no of test case: ";
    cin >> T;
    for (int i = 0; i < T; i++){
        cout << "Enter the count of following and followers: ";
        cin >> following >> followers;
        cout << ((following>(10*followers))?"The account is spam":"The account is not spam") << endl;
    }
    return 0;
}