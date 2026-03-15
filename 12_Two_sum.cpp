// Two sum

#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,7,11,15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 9;

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Index : " << i << " " << j << endl;
            }
        }
    }

    return 0;
}