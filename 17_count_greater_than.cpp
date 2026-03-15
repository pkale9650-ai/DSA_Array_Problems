// Count elements greater than X

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int X = 25;
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] > X) {
            count++;
        }
    }

    cout << "Elements greater than " << X << " : " << count << endl;

    return 0;
}