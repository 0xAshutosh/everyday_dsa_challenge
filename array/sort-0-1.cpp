#include <iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int i = 0, j = size - 1;
    
    while (i < j) {
        if (input[i] == 0) i++;
        else if (input[j] == 1) j--;
        else if (input[i] == 1 && input[j] == 0){
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            
            i++;
            j--;
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    sortZeroesAndOne(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    delete []arr;

    return 0;
}