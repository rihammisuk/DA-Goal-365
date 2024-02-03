#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i =1; i <nums.size();i++){
        if(nums[i-1] == nums[i]){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4};
    bool res = containsDuplicate(nums);
    if(res ==false){
        cout<<endl<< "false";
    }
    else{
       cout<<endl<< "true";
    }
    return 0;
}
