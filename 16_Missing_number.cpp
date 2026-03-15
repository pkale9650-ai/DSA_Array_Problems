// Find missing number

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n = size + 1;
    int currentsum = 0;

    int totalSum = n * (n + 1) / 2;

    for(int i = 0; i < size; i++) {
        currentsum += arr[i];
    }

    int missing = totalSum - currentsum;

    cout << "Missing number : " << missing << endl;

    return 0;
}