
//--------------------------------------------------------------------------

//right rotate by d places
#include<iostream>
using namespace std;

void reverse (int arr[],int start,int end) {
    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 3;

    d %= size;
    reverse(arr,0,size-1);
    reverse(arr,0,d-1);
    reverse(arr,d,size-1);
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}