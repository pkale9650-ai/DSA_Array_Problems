// sorted or not 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,70,40,50,20,90,30,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;
    for(int i=0; i<size-1; i++) {
        if(arr[i] > arr[i+1]) {
            sorted = false;
            break;
        }
    }
    if(sorted == true) {
        cout << "array is sorted" << endl;
    }
    else {
        cout << "array is not sorted" << endl;
    }
    return 0;
}