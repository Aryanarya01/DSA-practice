#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangleArea(vector<int>& heights){
    int n = heights.size();
    vector<int> right(n,0);//for right nearest smallest
    vector<int> left(n,0);//for left nearest smallest
    stack<int> s;

    //for right
    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()] >= heights[i]){
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //for left

    for(int i=0;i<n;i++){
        while(s.size()>0 && heights[s.top()] >= heights[i]){
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    //main
    int ans = 0;
    for(int i=0;i<n;i++){
        int width = right[i] - left[i] - 1; 
        int currArea = heights[i] * width;
        ans = max(ans,currArea);
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights: ";
    for(int i=0;i<n;i++){
        cin >> heights[i];
    }

    cout << "Largest Rectangle Area = " 
         << largestRectangleArea(heights) << endl;

    return 0;
}