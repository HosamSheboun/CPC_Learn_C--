#include <iostream>
using namespace std;

int main() {

    int arr1[4] = {10, 20, 30, 40};
    cout << "Enter The First Array's Elements: " << endl;

    for (int i = 0; i < 4; i++) {
        cin >> arr1[i];
        cout << "Element " << i + 1 << ": ";
        cout << "Element recorded: " << arr1[i] << endl;
    }

    cout << "The array contains: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << arr1[i] << "  ";
    }

    return 0;
} 