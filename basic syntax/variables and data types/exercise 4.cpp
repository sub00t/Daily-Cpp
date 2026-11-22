/*
Compare Truncation and Brace Initialization:

Show what happens when the price 29.99 is stored as different types.
Store 29.99 in a `double` named `price`. Create `copyVersion` as an `int` using copy initialization from `price`, 
`directVersion` as an `int` using direct initialization from `price`, and `braceVersion` as a `double` using brace initialization from `price`.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // TODO: store 29.99 as a double
    double price{29.99};

    // TODO: use copy initialization from price into an int
    int copyVersion = price;

    // TODO: use direct initialization from price into an int
    int directVersion(price);

    // TODO: use brace initialization from price into a double
    double braceVersion{price};

    cout << fixed << setprecision(2);
    cout << "Original price: " << price << endl;
    cout << "Copy int: " << copyVersion << endl;
    cout << "Direct int: " << directVersion << endl;
    cout << "Brace double: " << braceVersion << endl;

    return 0;
}
