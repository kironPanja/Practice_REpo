#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    cout << "Sorted array (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}

