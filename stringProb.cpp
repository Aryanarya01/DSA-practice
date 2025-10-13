//                    reversing string

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// int reverseString(vector<char>& str) {
//     int n = str.size();

//     int st = 0,end = n - 1;
//     while(st < end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }

// }

// int main(){
//     vector<char> str =  {'h','e','l','l','o'};
//     int ans = reverseString(str);
//      for (char c : str) {
//         cout << c;
//     }
//     cout << endl;
//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;


// int main(){

// string str = "aryan arya";
// reverse(str.begin(),str.end());//iterator
// cout<<str<<endl;
//     return 0;
// }

//                         find if a string is palindrom or not

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    return (str == rev);
}

int main(){

    string str = "madam";
     if(isPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}