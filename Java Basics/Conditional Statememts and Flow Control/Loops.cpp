#include <iostream>

/* 
Explanation:
For Loop:
Syntax: for (initialization; condition; increment/decrement).
The loop runs as long as the condition is true.
Example: The for loop runs 5 times, printing values from 0 to 4.
*/

int main() {
    std::cout << "For loop example:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    /*
    While Loop:
    Syntax: while (condition).
    The loop runs as long as the condition is true.
    Example: The while loop also runs 5 times, printing values from 0 to 4.
    */

    std::cout << "\nWhile loop example:" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        ++j;
    }

    /*
    Do-While Loop:
    Syntax: do { /* statements */ } while (condition);.
    The loop executes the statements at least once before checking the condition.
    Example: The do-while loop runs 5 times, printing values from 0 to 4.
    */

    std::cout << "\nDo-while loop example:" << std::endl;
    int k = 0;
    do {
        std::cout << "k = " << k << std::endl;
        ++k;
    } while (k < 5);

    /*
    Infinite Loop:
    An infinite loop runs forever. The example here is commented out to prevent it from running indefinitely.
    Syntax: while (true) { /* statements */ }.
    */

    // std::cout << "\nInfinite loop example (will run forever if uncommented):" << std::endl;
    // while (true) {
    //     std::cout << "This will run forever!" << std::endl;
    // }

    return 0;
}
