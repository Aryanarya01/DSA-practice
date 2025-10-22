
//                             print individual digits
// #include<iostream>
// #include<vector>
// using namespace std;

// void printDigits(int n){
//     while(n!=0){
//         int digit = n % 10;
//         cout<<digit<<endl;
//         n = n/10;
//     }
// }

// int main(){
// int n = 3452;
// printDigits(n);


//     return 0;
// }

//                                          print count

// #include<iostream>
// using namespace std;

// int count = 0;
// void printCount(int n){
//     while(n!=0){
//     int digitCount = n % 10;
//     count ++;
//     n = n/10;
//     }
//     cout<<count<<endl;
// }

// int main(){
//     int n = 436436;
//     printCount(n);

//     return 0;
// }

//                                     sum of individual digits

// #include<iostream>
// using namespace std;

// int sum = 0;
// void printSum(int n){
//   while (n!=0)
//   {
//      int digSum = n%10;
//     sum += digSum;
//     n = n/10;
//   }
//     cout<<sum<<endl;
// }

// int main(){

//     int n = 12345;
//     printSum(n);
//     return 0;
// }


//                       armstrong number

// #include<iostream>
// using namespace std;

// bool isArmstrong(int n){
//     int copyN = n;
//     int sumOfCubes = 0;
//     while(n!=0){
//         int dig = n % 10;
//         sumOfCubes +=(dig * dig * dig);
//         n = n / 10;
//     }
//     return sumOfCubes == copyN;
// }

// int main(){
//     int n = 153;

//     if(isArmstrong(n)){
//         cout<<"is an armstrong number";
//     }else{
//         cout<<"NOT an armstrong number";
//     }

//     return 0;
// }



//                      gcd of a number


#include<iostream>
using namespace std;
//                                 EUCLID'S ALGORITHM
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        if(b>a){
            b = b%a;
        }
    }
        if(a==0){
            return b;
        }
        return a;
}
//                              USING RECURSSION 
 int gcdRec(int a,int b){
    if( b == 0)  return a;
    return gcdRec(b, a % b);
 }
//                              LCM
int lcm(int a,int b){
    int gcd = gcdRec(a,b);
    return (a*b)/gcd;

}

int main(){
    int   a = 20;
    int b = 28;
    int ans = lcm(a,b);
    cout<<ans<<endl;


    return 0;
}