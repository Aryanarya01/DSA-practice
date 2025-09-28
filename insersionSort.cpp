
//                                   insersinon sort in ascendind order

// #include<iostream>
// using namespace std;

// int insersionSort(int arr[],int n){//O(n^2)
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr;//placing curr element in its correct position
//     }
// }

// int printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){
//     int n =5;
//     int arr[] = {4,1,5,2,3};
//     printArr(arr,n);
//     insersionSort(arr,n);
//     printArr(arr,n);
//     return 0;
// }

//                               insersion sort in descending order

#include<iostream>
using namespace std;


void insersionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insersionSort(arr,n);
    printArr(arr,n);


    return 0;
}