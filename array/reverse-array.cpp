#include <iostream>
using namespace std;

void reverse(int* arr, int size) {
    int i = 0, j = size - 1;

    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main(void) {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    reverse(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete []arr;
    return 0;
}