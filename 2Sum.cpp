#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr,int target){
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int first = arr[i];
            int second = target - first;
            if(m.find(second) != m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first] = i;
        }
        return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums,target);
    for(int val : result){
        cout<<val<<" ";
    }


    return 0;
}