// No need to test this, really
//
// Just for completeness
#include <unistd.h>
#include <iostream>
#include "2235_add-2-ints.cpp"
using std::cout;
int main() {
    cout << "2 + 2 = " << Solution().sum(2, 2) << "\n";
    cout << "minus 1, thats 3 - quick math\n";
    return 0;
}
