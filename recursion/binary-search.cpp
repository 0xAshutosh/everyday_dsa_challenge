#include <iostream>
using namespace std;

int binarySearch(int* arr, int start, int size, int key) {
    if (start > size) return -1;

    int mid = start + (size - start) / 2;

    if (arr[mid] == key) return mid;
    else if (key > arr[mid]) return binarySearch(arr, mid + 1, size, key);
    
    return binarySearch(arr, start, mid - 1, key);
}

int main(void) {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int key;
    cin >> key;

    cout << binarySearch(arr, 0, n - 1, key) << endl;

    delete []arr;

    return 0;
}