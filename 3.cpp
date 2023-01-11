#include <iostream>
using namespace std;
 
int main() {
    int ch, vol, chng;
    cout << "Enter your volume: ";
    cin >> vol;
    while(ch!=3) {
        cout << "1. Increase Volume \n2. Decrease Volume \n3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch==1 || ch==2){
            cout << "Enter the volume you want: ";
            cin >> chng;
        }
        switch(ch) {
            case 1:
                cout << "The present volume is " << (chng) << " & steps taken is " << (chng-vol)<< endl;
                break;
            case 2:
                cout << "The present volume is " << ((chng>vol)?0:chng) << " & steps taken is " << (((chng>vol)?vol:(vol-chng))) << endl;
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}