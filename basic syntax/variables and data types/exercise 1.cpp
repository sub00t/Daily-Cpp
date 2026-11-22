/* 

Store and Print a Customer Badge:

Print a customer badge for "Alice" with 250 loyalty points and free shipping enabled.
Store the name in a `string`, the points in an `int`, and the shipping flag in a `bool` before printing.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO: store the exact customer name "Alice"
    string customerName = "Alice";

    // TODO: store the exact point total 250
    int loyaltyPoints = 250;

    // TODO: store true because free shipping is enabled
    bool freeShipping = true;

    cout << boolalpha;
    cout << "Customer: " << customerName << endl;
    cout << "Points: " << loyaltyPoints << endl;
    cout << "Free shipping: " << freeShipping << endl;

    return 0;
}
