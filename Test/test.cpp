#include<iostream>

using namespace std;

int addTwoNumbers(int a, int b) {
    return a + b;
}

void testAddTwoNumbers() {
    cout << "Running testAddTwoNumbers..." << endl;

    int a = 5;
    int b = 3;
    int expectedResult = 8;

    int result = addTwoNumbers(a, b);

    if (result == expectedResult) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed! Expected result: " << expectedResult << ", but got: " << result << endl;
    }
}

int main() {
    testAddTwoNumbers();
    return 0;
}