//                                          by duch nation flag algorithm


#include<iostream>
 #include<vector>
 using namespace std;

 int sortColors(vector<int> &nums){
    int n = nums.size();
    int low =0, mid =0, high = n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++,low++;  
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
 }

 int printArr(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
 }

 int main(){

vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    printArr(nums);

    return 0;
 }