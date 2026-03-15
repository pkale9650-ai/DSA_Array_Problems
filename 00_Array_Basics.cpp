#include<iostream>
using namespace std;

int main() {
    //array
    int marks[] = {99,98,95,96,100};
    // print
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    // //size
    int size = 5;
    cout << size << endl;
    cout << sizeof(marks) << endl;
    // //loops
    for(int i = 0; i < size; i++) {
        cout << marks[i] << " " ;
    }
    cout << endl;
    // //input array
    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    cout << endl;
    // //output array
    for(int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    //smallest element 
    int smallest = marks[0];
    for(int i = 0; i < size; i++) {
        if(marks[i] < smallest) {
            smallest = marks[i];
        }
    }
    cout << "smallest element in marks array is : " << smallest << endl;
    // //largest element
    int largest = marks[0];
    for(int i = 0; i < size; i++) {
        if(marks[i] > largest) {
            largest = marks[i];
        }
    }
    cout << "largest element in marks array is : " << largest << endl;
    // index of smallest & largest element
    int minindex = 0;
    int maxindex = 0;
    for(int i = 1; i < size; i++) {
        if(marks[i] < marks[minindex]) {
            minindex = i;
        }
        if(marks[i] > marks[maxindex]) {
            maxindex = i;
        }
    }
    cout << "minindex = " << minindex << endl;
    cout << "maxindex = " << maxindex << endl;
    return 0;
}