#include <iostream>
#include <string>

using namespace std;

int main() {
    std::cout << "Hello, world!" << std::endl;

    // Can also be written with namespace std, but is inefficient.
    // Why should we prefer i/o stream?
    /*
        * Type-safe: The type of object provided is known statically.
        * Less error prone: No redundant % tokens like in C
        * Comparable performance: If used properly, can be faster than C i/o
    */
    cout << "Hello, world!\n";

    // There are a lot of types in C++; here are a few important ones.
    int ten = 10; // An integer value, stores 4 bytes.
    unsigned int unsignedTen = 10; // An unsigned int, with NO negative values.

    long tenLong = 10; // A long value, stores 8 bytes.
    float tenFloat = 10.0; // A float value, stores 4 bytes.
    double tenDouble = 10.0; // A double value, stores 8 bytes.

    // C++ does not provide 128 bit integers. //

    // void is an incomplete type without a value
    // also indicates a function with no return type or no parameters
        // e.g. void f(), f(void)

    int i1 = 1; 
    int* i2 = &i1; // This is a pointer to the memory address of i1.
    int* i3 = nullptr; // This is a nullptr, pointing to 0x0 (replaces the NULL macro).

    cout << i2 << endl; // WILL NOT ALWAYS OUTPUT THE SAME ADDRESS!

    auto three = 1 + 2; // Specifies that the type will be automatically deduced
    // Can be used for manitainapility and for hiding complex type definition
    // May look code less readable due to type hiding
    cout << sizeof(three) << endl; // Will be 4 bytes, as inferred int.

    auto x = 0; // Makes no sense; x = int

    // Auto can also be used to define function input.
    // ONLY WORKS IN C++20!!

    /*
    int f(auto x) {
        return sizeof(x);
    }

    cout << f(3) << endl; // Returns 4, since sizeof(int) is 4.
    cout << f(3.0) << endl; // Returns 8, since sizeof(double) is 8.
    */

    // When it comes to operators ...
    /*
     * Unary operators have higher precendence than binary operators

     * Standard math operators (+, *, etc.) have higher precedence
     * than comparison, bitwise and logic operators.
     * 
     * Bitwise operators have higher precendence than logic operators.
     * 
     * Compound assignment operators have lower priority.
     * 
     * The comma operator has the lowest precedence.
    */

    return 0;
}