// Remove element from array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,20,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 20;
    int j = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] != element) {
            arr[j] = arr[i];
            j++;
        }
    }


    for(int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}