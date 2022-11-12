#include <iostream>
#include <utility>
#include <climits>
using namespace std;

pair<int, int> maxMin(int* arr, int size) {
    int max = INT_MIN;
    int min = INT_MAX;
    pair<int, int> ans;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    ans.first = max;
    ans.second = min;

    return ans;
}

int main(void) {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    pair<int, int> ans = maxMin(arr, n);

    cout << "Max : " << ans.first << endl;
    cout << "Min : " << ans.second << endl;

    delete []arr;
    return 0;
}