#include<iostream>
#include<vector>
using namespace std; 

bool searchInRow(vector<vector<int>>& mat, int target, int row){
    int n = mat[0].size();
    int st = 0;
    int end = n - 1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(target == mat[row][mid]){
            return true;
        }else if(target > mat[row][mid]){
            //right
            st = mid + 1;
        }else{
            //left
            end = mid - 1;
        }
    }
    return false;

}

bool searchMatrix(vector<vector<int>>& mat, int target){
    //BS on total no of rows
    int m = mat.size();//row
    int n = mat[0].size();//col
    int startRow = 0;
    int endRow = m-1;
    while(startRow <= endRow){
        int midRow = startRow + (endRow - startRow)/2;
        if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
            //found the row => BS in this row
            return searchInRow(mat,target,midRow);
        }else if(target >= mat[midRow][n-1]){
            //down => right
            startRow = midRow + 1;
        }else{
            //up => left
            endRow = midRow - 1; 
        }
    }
    return false;    
}

int main(){
    vector<vector<int>>mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
     int target = 3;
    cout<<searchMatrix(mat,target);
    return 0;
}