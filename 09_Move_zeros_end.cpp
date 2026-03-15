//move all zero to end 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j= 0;
    for(int i=0; i<size; i++) {
        if(arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    while(j < size) {
        arr[j] = 0;
        j++;
    }

    for(int i=0; i<size; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}