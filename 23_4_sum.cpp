// 4 sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 0, -1, 0, -2, 2};
    int target = 0;

    int n = vec.size();
    vector<vector<int>> ans;

    sort(vec.begin(), vec.end());

    for(int i = 0; i < n; i++) {
        if(i > 0 && vec[i] == vec[i-1]) continue;

        for(int j = i + 1; j < n; j++) {
            if(j > i + 1 && vec[j] == vec[j-1]) continue;

            int k = j + 1, l = n - 1;

            while(k < l) {
                long long sum = (long long)vec[i] + vec[j] + vec[k] + vec[l];

                if(sum > target) {
                    l--;
                }
                else if(sum < target) {
                    k++;
                }
                else {
                    ans.push_back({vec[i], vec[j], vec[k], vec[l]});
                    k++;
                    l--;

                    while(k < l && vec[k] == vec[k-1]) k++;
                    while(k < l && vec[l] == vec[l+1]) l--;
                }
            }
        }
    }

    // print ans
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " , ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}