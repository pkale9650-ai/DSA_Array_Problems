//linear search 
#include<iostream>
using namespace std;

int lenaersearch(int arr[], int size, int target) {
    for(int i = 0; i< size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,2,5,8,7,6,10,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 100;
    cout << lenaersearch(arr,size,target) << endl;
    return 0;
}
