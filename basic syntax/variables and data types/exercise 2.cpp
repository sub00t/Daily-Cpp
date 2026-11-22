/*
Use Three Initialization Styles:

Create three integer variables using the three C++ initialization styles.
Use copy initialization for `copyInit` with 12, direct initialization for `directInit` with 20, and brace initialization for `braceInit` with 30.

*/

#include <iostream>

using namespace std;

int main() {
    // TODO: use copy initialization with the value 12
    int copyInit = 12;

    // TODO: use direct initialization with the value 20
    int directInit(20);

    // TODO: use brace initialization with the value 30
    int braceInit{30};

    cout << "copyInit = " << copyInit << endl;
    cout << "directInit = " << directInit << endl;
    cout << "braceInit = " << braceInit << endl;

    return 0;
}
