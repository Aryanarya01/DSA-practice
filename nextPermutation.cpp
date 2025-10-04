#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void nextPermutation(vector<int>& A){

    //step 1 find the pivot

int n = A.size();
int pivot = -1;
for(int i=n-2;i>=0;i--){
    if(A[i]<A[i+1]){
        pivot = i;
        break;
    }
}
if(pivot==-1){//in - place change
    reverse(A.begin(),A.end());
    return;
}

// step -2 find the next largest element

for(int i=n-1;i>pivot;i--){
    if(A[i]>A[pivot]){
    swap(A[i],A[pivot]);
    break;
    }
}

//   3rd step   (pivot+1 to n-1)
    int i = pivot +1;
    int j = n-1;
    while(i<=j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
}

void printArr(vector<int>& A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> A = {1,2,3};
    nextPermutation(A);
    printArr(A);    

    return 0;
}