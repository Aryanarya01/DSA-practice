
//Majority elements by moore's voting algorythm

#include<iostream>
#include<vector>
using namespace std;

int MaximumEle(vector<int> nums){
     int n = nums.size();
    int freq = 0,ans=0;
      for(int i=0;i<n;i++){
         if(freq==0){
            ans=nums[i];
         }if(ans==nums[i]){
            freq++;
         }
         else{
            freq--;
         }
      }
       return ans;
 }

 int main(){
    vector<int> nums={2,1,2,1,2,2,1};
int ans = MaximumEle(nums);
   cout<<ans ;

    return 0;
 }








//                                                    pair sum
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target){//o(n)
//     vector<int> ans;
//     int n =nums.size();
//     int i=0,j=n-1;

//     while(i<j){
//         int pairSum = nums[i]+nums[j];
//         if(pairSum>target){
//             j--;
//         }else if(pairSum < target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
// }

// int main(){
//  vector<int> nums={2,7,11,15};
//    int target = 13;

// vector<int> ans = pairSum(nums, target);
//      cout<< ans[0]<< ","<< ans[1]<<endl;
//     return 0;

// }