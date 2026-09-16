#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int value;

    cout << "Enter the number of values: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;

        sum += value;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
