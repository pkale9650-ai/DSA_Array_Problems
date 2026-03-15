// Min index and Max index from an array

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {10,70,40,50,20,90,30,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }

        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout << "Minimum element index : " << minIndex << endl;
    cout << "Maximum element index : " << maxIndex << endl;

    return 0;
}