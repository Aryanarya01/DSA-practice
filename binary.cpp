//                                     binary search using iterative code
// #include<iostream>
// #include<vector>
// using namespace std;
  

// int binarySearch(vector<int> arr,int target){  //Iterative code
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid = (st+end)/2;
//         if(target>arr[mid]){
//             st = mid+1;
//         }else if (target<arr[mid])
//         {
//             end = mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){

// vector<int> arr1 = {-1,0,3,4,5,9,12};//odd
// int target1 = 2;

//     cout<<binarySearch(arr1,target1)<<endl;

// vector<int> arr2 = {-1,0,3,5,9,12};//even
// int target2 = 0;
//  cout<<binarySearch(arr2,target2)<<endl;
//     return 0;
// }

 

//                                        binary search with optimized formula
//  #include<iostream>
// #include<vector>
// using namespace std;
  

// int binarySearch(vector<int> arr,int target){  //Iterative code
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//          int mid = st+(end-st)/2;
//         if(target>arr[mid]){
//             st = mid+1;
//         }else if (target<arr[mid])
//         {
//             end = mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){

// vector<int> arr1 = {-1,0,3,4,5,9,12};//odd
// int target1 = 2;

//     cout<<binarySearch(arr1,target1)<<endl;

// vector<int> arr2 = {-1,0,3,5,9,12};//even
// int target2 = 0;
//  cout<<binarySearch(arr2,target2)<<endl;
//     return 0;
// }




//                          binary search using Recursion

#include<iostream>
#include<vector>
using namespace std;


int recBinarySearch(vector<int> arr, int tar, int st,int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(tar>arr[mid]){//2nd half
            return recBinarySearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){//first half
            return recBinarySearch(arr,tar,st,mid-1);
        }else{//mid=>  ans
            return mid;
        }
    }
    return -1;
}

int main(){

vector<int> arr1 = {-1,0,3,4,5,9,12};//odd
int target1 = 2;

    // cout<<binarySearch(arr1,target1)<<endl;

vector<int> arr2 = {-1,0,3,5,9,12};//even
int n =arr2.size();
int tar2 = 5;
cout<<recBinarySearch(arr2,tar2,0,n-1)<<endl;

    return 0;
}