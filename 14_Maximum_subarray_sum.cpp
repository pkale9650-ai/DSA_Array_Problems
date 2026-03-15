// maximum subarray sum (kadane's algorithm)

#include<iostream>
using namespace std;

int main() {
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int currentsum = 0;
    int maxsum = arr[0]; 
    for(int i = 0; i < size - 1; i++) {
        currentsum += i;
        maxsum = max(currentsum,maxsum);
        if(currentsum < 0) {
            currentsum = 0;
        }
    }
    cout << maxsum << endl;
    return 0;
}