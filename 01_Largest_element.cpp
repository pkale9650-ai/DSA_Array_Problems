// secound largest element in an array

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {10,70,40,50,20,90,30,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int secoundlargest = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] > largest) {
            secoundlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secoundlargest && arr[i] < largest) {
            secoundlargest = arr[i];
        }
    }
    cout << "largest : " << largest << endl;
    cout << "secoundlargest : " << secoundlargest << endl;
    return 0;
}