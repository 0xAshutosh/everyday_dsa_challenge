#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int i = m + 1, j = arr.size() - 1;

    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        arr.push_back(j);
    }

    reverseArray(arr, m);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}