// Binary Search

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 40;

    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == target) {
            cout << "Element found at index : " << mid;
            return 0;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}