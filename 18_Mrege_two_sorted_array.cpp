// Merge two sorted arrays

#include<iostream>
using namespace std;

int main() {
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6,8,10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1+size2];

    int i = 0, j = 0, k = 0;

    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array : ";

    for(int i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}