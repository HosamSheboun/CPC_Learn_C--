#include <iostream>
using namespace std;

int main()
{
    int N = 100;
    cout << "Enter the size of the array: ";
    cin >> N;

    int arr1[N] = {10, 20, 30, 40, 50};

    cout << "Enter The First Array's Elements: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
        cout << "Element " << i + 1 << ": ";
        cout << "Element recorded: " << arr1[i] << endl;
    }

    cout << "The elements you entered are: " << endl;
    for (int i = 0; i < N; i++) {
        cout << arr1[i] << "  ";
    }

    return 0;
}

