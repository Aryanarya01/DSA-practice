//                                                 linear search

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int target,int size){
//    int end = size-1;
//     for(int i=0;i<end;i++){
//         if(arr[i]==target){
//           return i;
//         } 
//     }
//     return -1;
// }

// int main(){
//      int arr1[] = {1,3,2,4,5,6,33,55};
//    int target = 33;
//    int size = 8;
//    int ans = linearSearch(arr1,target,size);
//       if(ans!=-1){
//         cout<<"targeted element is in index "<<ans<<endl;
//       }else{
//         cout<<"the targeted element is not in the array";
//       }

//     return 0;
// }



//                                                       same using vector


// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){

//     vector<int> arr = {3,2,4,5,6,33,55};
//    int target = 5;
//     int index=0;
//     for(int val : arr){
//         if(val==target){
//               cout<<val<<"at index"<<index<<endl;
//               break;
//         }
//         index++;
//     }
//     return 0;

// }