#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        char column = position[0];
        char row = position[1];

        for (char currentRow = '1'; currentRow <= '8'; ++currentRow) {
            if (currentRow != row) {
                cout << column << currentRow << '\n';
            }
        }

        for (char currentColumn = 'a'; currentColumn <= 'h'; ++currentColumn) {
            if (currentColumn != column) {
                cout << currentColumn << row << '\n';
            }
        }
    }

    return 0;
}