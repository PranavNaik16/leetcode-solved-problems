// 509 - fibonacci series solving using recursion(can also solve using DP

#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci
int fib(int n) {
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // recursive call
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;

    return 0;
}
