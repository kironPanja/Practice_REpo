#include <iostream>
using namespace std;

void findMinMax(int *arr, int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int arr[] = {12, 45, 3, 67, 23, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;

    findMinMax(arr, size, minVal, maxVal);

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;
}


