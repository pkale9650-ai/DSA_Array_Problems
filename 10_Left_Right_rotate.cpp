// Left rotate array by 1

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[0];

    for(int i = 0; i < size-1; i++) {
        arr[i] = arr[i+1];
    }

    arr[size-1] = temp;

    cout << "Array after left rotation : ";

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


//---------------------------------------------------------------------

//Right rotate array by 1

// Right rotate array by 1

#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[size-1];

    for(int i = size-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    cout << "Array after right rotation : ";

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}