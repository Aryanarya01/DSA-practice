// #include<iostream>
// using namespace std;

// int main(){
    
//     int matrix[4][3];//2D array
//     int rows = 4;
//     int cols = 3;
//     //input
//     for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>matrix[i][j];
//     }
//     }
//     //output
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//     return 0;

// }


//     linear search in 2D array

// #include<iostream>
// using namespace std;

// bool linearSearch(int mat[][3],int rows, int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(mat[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     int key = 11;
    
//    cout<<linearSearch(matrix,rows,cols,key)<<endl;


//     return 0;
// }



//                              pair of searched element
// #include<iostream>
// #include<utility>
// using namespace std;

// pair<int,int> linearSearch(int mat[][3],int rows, int cols, int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(mat[i][j] == key){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int cols = 3;
//     int key = 11; 
//   pair<int,int> result = linearSearch(matrix,rows,cols,key);
//   if(result.first != -1){
//     cout<<"Element found in the 2D-Array in "<<result.first<<" row and "<<result.second<<" col"<<endl;
//   }else{
//     cout<<"Element not found"<<endl;
//   }
//     return 0;
// }


//                                 maximum row sum 


// #include<iostream>
// #include<climits>
// using namespace std;

// int maxSumRow(int mat[][3],int rows,int cols){
//     int maxsumrow = INT_MIN;
//     for(int i=0;i<rows;i++){
//         int rowSumI = 0;
//        for(int j=0;j<cols;j++){
//          rowSumI+=mat[i][j];
//        }
//        maxsumrow = max(maxsumrow,rowSumI);
//     }
//     return maxsumrow;

// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int cols = 3;
    
//     cout<<maxSumRow(matrix,rows,cols);

//     return 0;
// }


//                      maximum cols sum


// #include<iostream>
// #include<climits>
// using namespace std;

//     int maxColSum(int mat[][3],int rows,int cols){
//         int maxcolsum =  INT_MIN;
//         for(int j=0;j<cols;j++){
//             int colSumJ = 0;
//             for(int i=0;i<rows;i++){
//                 colSumJ+=mat[i][j];
//             }
//             maxcolsum = max(maxcolsum,colSumJ);
//         }
//         return maxcolsum;
//     }

// int main(){

//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int cols = 3;
//     cout<<maxColSum(matrix,rows,cols);
//     return 0;
// }


//      diagonal  sum O(n*n)
//PD : J == I
//SD : J = N-I-1

// #include<iostream>
// using namespace std;
//     int diagnalSum(int mat[4][4],int n){
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i==j){   
//                     sum += mat[i][j];
//                 }else if(j==n-i-1){
//                     sum+= mat[i][j];
//                 }
//             }
//         }
//         return sum;
//     }
// int main(){
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     cout<<diagnalSum(matrix,n);
//     return 0;
// }

//optimized approch   O(n)
// #include<iostream>
// using namespace std;
//     int diagnalSum(int mat[4][4],int n){
//         int sum = 0;
//         for(int i=0;i<n;i++){
//            sum += mat[i][i];
//            if(i!= n-i-1){
//             sum+= mat[i][n-i-1];
//            }
//         }
//         return sum;
//     }
// int main(){
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     cout<<diagnalSum(matrix,n);
//     return 0;
// }



//       2D  vectors

#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6,18,81},{7,8,9}};//3x3
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
      //  cout<<mat[0][0]<<endl;

    return 0;
}