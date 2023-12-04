#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element in the array is " << largest(arr, n);
    return 0;
}