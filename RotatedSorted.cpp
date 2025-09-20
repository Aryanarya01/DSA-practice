//                                   Search in Rotated Sorted array  [Leatcode problem no. 33]

#include<iostream>
#include<vector>
using namespace std;

int rotatedSorted(vector<int>A,int target,int st, int end){
     while(st<=end){
    int mid = st+(end-st)/2;
    if(A[mid]==target){
        return mid;
    }
    if(A[st]<=A[mid]){//left sorted
        if(A[st]<=target && target<=A[mid]){
            end = mid -1;
        }else{
            st = mid + 1;
        }
    }else{//right sorted
        if(A[mid]<=target && target<=A[end]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
   }
}

int main(){

   vector<int> A={3,4,5,6,7,0,1,2};
   int target = 2;
   int st =0;
   int end = A.size()-1;

   cout<<rotatedSorted(A,target,0,end)<<endl;

    return 0;
}