//                              find peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;

 int peakIndexInMountainArra(vector<int> arr){

    int st = 1;
    int end = arr.size()-2;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){//right search
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    
vector<int> arr = {0,3,8,9,5,2};

    int ans = peakIndexInMountainArra(arr);
    cout<<"the peak value of mountain arr is "<<arr[ans]<<endl;
    cout<<" and the peak index is "<<ans<<endl;

    return 0;
}