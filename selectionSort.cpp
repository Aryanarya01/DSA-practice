// #include<iostream>
// using namespace std;

// int selectionSort(int arr[],int n ){//O(n^2)
//         for(int i=0;i<n-1;i++){
//             int smallIdx = i;//unsorted part starting
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]<arr[smallIdx]){
//                 smallIdx = j;
//                 }
//             }
//             swap(arr[i],arr[smallIdx]);
//         }
// }

// int printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

// int n =5;
// int arr[] = {4,1,5,2,3};
// printArr(arr,n);
//  selectionSort(arr, n);

//  cout << "After sorting: ";
//  printArr(arr, n);

 

//     return 0;
// }


//                  in descending order
#include<iostream>
using namespace std;

int selectionSort(int arr[],int n ){//O(n^2)
        for(int i=0;i<n-1;i++){
            int smallIdx = i;//unsorted part starting
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[smallIdx]){
                smallIdx = j;
                }
            }
            swap(arr[i],arr[smallIdx]);
        }
}

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int n =5;
int arr[] = {4,1,5,2,3};
printArr(arr,n);
 selectionSort(arr, n);

 cout << "After sorting: ";
 printArr(arr, n);

 

    return 0;
}
