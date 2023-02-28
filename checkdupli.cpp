#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {2,3,4,5,6,7,2};
    int s = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0; i<s ; i++){
        int v1 = nums[i+1];
        int v2 = nums[i];
        if(v2==v1){
            return 1;
            break;
        }
    }
    return 0;
}