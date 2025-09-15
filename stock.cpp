//                      stock buy and sell problem

// #include<iostream>
// using namespace std;


// int main(){

//    int prices[]={7,1,5,3,6,4};
//    int n =6;
//    int maxProfit = 0;
//    int bestBuy = prices[0];

//    for(int i=1;i<n;i++){
//     if(prices[i]>bestBuy){
//         maxProfit = max(maxProfit,prices[i]-bestBuy);
//     }
//     bestBuy = min(bestBuy,prices[i]); 
//    }
// cout<<maxProfit;
//     return 0;
// }

//              pow(x,n)


#include<iostream>
using namespace std;


int main(){
    double x = 2.00000; int n = 2;
long binForm = n;

     double ans = 1;
        while(binForm>0){
            if(binForm%2==1){
                ans=ans*x;
            }
            x*=x;
             binForm/=2; 
        }
        cout<< ans;


    return 0;

}