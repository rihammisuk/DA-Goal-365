#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i =0; i <nums.size();i++){
        for(int j =i+1; j <nums.size();j++){
            int sum = nums[i]+nums[j];
            if(sum == target){
                return {i,j};
            }
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> twosum = twoSum(nums,target);
    for(auto num:twosum){
        cout<< endl <<"nums : " << num;
    }

    return 0;
}
