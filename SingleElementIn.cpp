#include<iostream>
using namespace std;

int singleNonDuplicate(int A[],int n){
    
    if(n==1){
        return A[0];
    }
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st +(end - st)/2;
        if(mid==0 && A[0]!=A[1]){
            return A[mid];
        }
        if(mid==n-1 && A[n-1]!=A[n-2]){
            return A[mid];
        }
        if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]){
            return A[mid];
        }
        if(mid%2==0){//even
            if(A[mid-1]==A[mid]){//left
                end = mid-1;
            }else{//right
                st = mid + 1;
            }
        }else{//odd
            if(A[mid-1]==A[mid]){//right
                st = mid + 1;
            }else{//left
                end = mid - 1;
            }
        }
    }
    return -1;

}

int main(){
    int A[]={3,3,7,7,10,11,11};
    int n = sizeof(A) / sizeof(A[0]);
    int ans = singleNonDuplicate(A,n);
    cout<<ans<<endl;

    return 0;
}