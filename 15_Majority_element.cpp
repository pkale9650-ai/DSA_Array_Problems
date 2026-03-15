// majority element 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,2,1,2,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;
    int freq = 0;
    for(int i=0; i<size; i++) {
        if(freq == 0) {
            ans = arr[i];
            freq = 1;
        }
        else if (ans == arr[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    cout << "majority element : " << ans << endl;
    return 0;
}