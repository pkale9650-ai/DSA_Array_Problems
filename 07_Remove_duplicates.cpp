// Remove duplicates from sorted array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for(int i = 0; i < size-1; i++) {
        if(arr[i] != arr[i+1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    arr[j] = arr[size-1];
    j++;


    for(int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}