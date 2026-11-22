/*
Build a small receipt using `auto` so the compiler deduces the variable types from the initial values:

Use these exact initial values:
`string{"Wireless Mouse"}` for the item name, 4 for the quantity, 12.50 for the unit price,
0.10 for the discount rate, 0.08 for the tax rate, true for express shipping, and 'E' for the category code.
Compute subtotal as quantity times unit price, discount as subtotal times discount rate, after-discount amount as subtotal minus discount,
tax as after-discount amount times tax rate, and total as after-discount amount plus tax.


*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // TODO: use auto with string{"Wireless Mouse"}
    auto itemName = string{"Wireless Mouse"};

    // TODO: use auto with 4
    auto quantity = 4;

    // TODO: use auto with 12.50
    auto unitPrice(12.50);

    // TODO: use auto with 0.10
    auto discountRate(0.10);

    // TODO: use auto with 0.08
    auto taxRate{0.08};

    // TODO: use auto with true
    auto expressShipping = true;

    // TODO: use auto with 'E'
    auto categoryCode = 'E';

    // TODO: compute receipt values using auto
    auto subtotal = quantity * unitPrice;
    auto discount = subtotal * discountRate;
    auto afterDiscount = subtotal - discount;
    auto tax = afterDiscount * 0.08;
    auto total = afterDiscount + tax;

    cout << boolalpha << fixed << setprecision(2);
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Category: " << categoryCode << endl;
    cout << "Express shipping: " << expressShipping << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
