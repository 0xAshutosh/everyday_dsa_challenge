#include <iostream>
using namespace std;

int linearSearch(int* arr, int size, int key) {
    if (size == 0) return -1;

    if (arr[0] == key) return 0;

    int ans = linearSearch(arr + 1, size - 1, key);

    if (ans == -1) return ans;
    
    return ans + 1;
}

int main(void) {
    int n, key;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cin >> key;

    cout << linearSearch(arr, n, key) << endl;

    delete []arr;

    return 0;
}