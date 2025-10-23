//                                      add all digits of number

//  #include<iostream>
//  using namespace std;

//  int main(){
//     int ans = 0;
//     int num =1034;
//      while (num > 0) {
//         int rem = num % 10;  // last digit
//         ans += rem;          // add to sum
//         num /= 10;           // remove last digit
//     }
//     cout<<ans<<endl;

//     return 0;
//  }


//                                                 reversre a number



    // #include<iostream>
    // #include <climits>
    // using namespace std;

    //     int reverse(int n){
    //         int revNum = 0;
    //         while(n!=0){
    //             int digit = n % 10;
    //             if(revNum > INT_MAX / 10 || revNum < INT_MIN / 10){
    //                 return 0;
    //             }
    //             revNum = revNum * 10 + digit;
    //             n = n / 10;
    //         }
    //         return revNum;
    //     }
    // int main(){

    //     int n = 1245;
    //     cout<<reverse(n)<<endl;
    //     return 0;
    // }


    //                                           palindrome number

    #include<iostream>
    #include<climits>
    using namespace std;

    int reverse(int n){
        int revNum = 0;
        while(n != 0){
            int digit = n % 10;
            if(revNum > INT_MAX / 10 || revNum < INT_MIN / 10){
                return 0;
            }
            revNum = revNum * 10 + digit;
            n = n / 10;
        }
        return revNum;
    }

    bool isPalindrome(int n){
        if(n < 0){
            return false;
        }
        int revNum = reverse(n);
        if(n == revNum){
            return true;
        }else{
            return false;
        }
    }

    int main(){
        int n = 312;
        int ans = isPalindrome(n);
        cout<<ans<<endl;

        return 0;
    }