#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int power(int n) {
    if (n == 0) return 1;
    return 2 * power(n - 1);
}

void print0(int n) {
    if (n == 0) return;
    cout << n << endl;
    print0(n - 1);
}

void print(int n) {
    if (n == 0) return;
    print(n - 1);
    cout << n << endl;
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

// recursion-1

int main(void) {
    int n;
    cin >> n;
    // cout << fact(n) << endl;
    // cout << power(n) << endl;
    // print(n);
    cout << fib(n) << endl;
    return 0;
}