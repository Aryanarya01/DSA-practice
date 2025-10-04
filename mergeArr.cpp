//                  merge two sorted array(leatcode 88)

#include<iostream>
#include<vector>
using namespace std;

int mergeArr(vector<int> &A,int m,vector<int> &B,int n){
       int idx = m+n-1;
    int i = m-1;
    int j = n-1;
     while(i>=0 && j>=0){
        if(A[i]>B[j]){
            A[idx]=A[i];
            i--;
            idx--;
        }else{
            A[idx]=B[j];
            j--;
            idx--;
        }
    }
    while(j>=0){
        A[idx]=B[j];
        j--;
        idx--;
    }

}
int printArr(vector<int> &A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main(){
    vector<int> A = {1,2,3,0,0,0};
    int m=3;
    vector<int> B = {2,5,6};
    int n=3;
    mergeArr(A,m,B,n);
    printArr(A);

    

    return 0;
}