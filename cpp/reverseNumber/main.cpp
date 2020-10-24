#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;

    cout << "Enter an integer: ";
    cin >> n;

    do
        reversedNumber = reversedNumber * 10 + (n % 10);
    while((n /= 10) != 0);

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
