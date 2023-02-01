#include <iostream>
using namespace std;

/**
 * Question
 * Arrays
 * A person 'A' is trying to shoot person 'B' who is hiding behind N number of people. 
 * Everyone is standing in same line A and B have the same height and people between them are of different heights. 
 * A wants to know the minimum number of people who need to get shoot, so that B is visible in his line of sight.
 * Note: 
 * - Let line of sight is a straight line drawn between the top most point of two object.
 * - B is visble to A if no body crosses this line.
 * - Even if people are of same height as both, B is visible to A.
 * - A and B have same height.
 * 
 * Input:
 * - First line of input contains single integer T, denoting the number of test cases
 * - First line of each test case two space seperated integers N and K, denoting number of players/people between A and B resp.
 * - Second line of each test case, N space seperated integers denoting the no of players and height between A and B respectively.
 * - Each test case will have minimum number of players get shoot.
 */

/**
 * no of people 
 * Enter A & B value 
 * Enter the value of people
 * Check how many should A should before shooting B
 */
int main() {
    int T, N, K, a[10];
    int ct=0;
    cout << "Enter the number of test case: ";
    cin >> T;
    for(int i=0; i<T; i++) {
        cout << "Enter the common value of A & B: ";
        cin >> K;
        cout << "Enter the number of players: ";
        cin >> N;
        cout << "Enter the value of players between A & B: " << endl;
        for(int i=0; i<N; i++) { cin >> a[i]; if(a[i]<=K) ct++; cout << a[i];}
        // if(a[0]!='\0') {cout << "No players were between "; }
        cout << ((ct!=0)?(ct+" got shoot."): "No one got shoot") << endl;
    }
    return 0;
}