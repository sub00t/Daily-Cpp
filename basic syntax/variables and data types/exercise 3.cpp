/*
Update a Stock Count

Track a product's stock count as values change during the program.
Start with 18 items in stock, subtract 7 items sold today, then add 2 returned items. 
Store whether the final stock count is below 15 in a `bool` named `needsRestock`.

*/

#include <iostream>

using namespace std;

int main() {
    // TODO: start with 18 items in stock
    int stockCount{18};

    // TODO: store 7 items sold today
    int soldToday{7};

    // TODO: store 2 returned items
    int returnedToday{2};

    // TODO: update stockCount by subtracting soldToday and adding returnedToday
    stockCount -= soldToday;
    stockCount += returnedToday;

    // TODO: store whether stockCount is below 15
    bool needsRestock{ stockCount < 15 };

    cout << boolalpha;
    cout << "Final stock: " << stockCount << endl;
    cout << "Needs restock: " << needsRestock << endl;

    return 0;
}
