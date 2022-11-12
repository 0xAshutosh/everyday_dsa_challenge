#include <iostream>
using namespace std;

int arrSum(int* arr, int size) {
    if (size == 0) return 0;

    return arr[0] + arrSum(arr + 1, size - 1);
}

int main(void) {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << arrSum(arr, n) << endl;

    delete []arr;

    return 0;
}