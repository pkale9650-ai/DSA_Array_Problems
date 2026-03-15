// counting numbers in an array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,70,40,50,20,90,30,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for(int i = 0; i < size; i++) {
        count++;
    }

    cout << "Total numbers in array : " << count << endl;

    return 0;
}