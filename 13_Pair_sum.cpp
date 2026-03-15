// pair sum

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {2,7,11,15};
    vector<int>ans;
    int target = 9;
    int size = vec.size();
    int i = 0;
    int j = size - 1;
    while(i < j) {
        int pairsum = vec[i] + vec[j];
        if(pairsum < target) {
            i++;
        }
        else if(pairsum > target) {
            j--;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    cout << ans[0] << " & " << ans[1];
    return 0;
}