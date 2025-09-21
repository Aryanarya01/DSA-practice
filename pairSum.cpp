#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr,int target){
    vector<int> ans;
    int n = arr.size();
    int i=0,j=n-1;
    while (i<j)
    {
        int pairSum = arr[i]+arr[j];
        if(pairSum<target){
            i++;
        }else if(pairSum>target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
    
}

int main(){

    vector<int> arr1 = {2,15,11,20};
    int target = 22;
    vector<int> ans = pairSum(arr1,target);
    cout<<ans[0]<<","<<ans[1];

    return 0;
}