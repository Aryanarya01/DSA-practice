//                               container with maxWater

#include<iostream>
using namespace std;


int main(){

    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;
    int lp=0,rp=n- 1;
    int maxwater =0;
    while(lp<rp){
        int width = rp - lp;
        int ht = min(height[lp],height[rp]);
        int currWater = width * ht;
        maxwater = max(maxwater,currWater);

        height[lp]<height[rp]?lp++:rp--;
    }
    cout<<maxwater;
    return 0;
}