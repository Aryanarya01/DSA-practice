//                                             check if a string is palindrom or not

// #include<iostream>
// #include<string>
// using namespace std;

// bool isAlphanumeric(char ch){
//     if((ch >='a' && ch <='z')||
//     (tolower(ch)>='a' && tolower(ch)>='z')){
//         return true;
//     }
//     return false;
// }

// bool isPalindrome(string s){
//     int st = 0,end = s.length()-1;
//     while(st < end){
//         if(!isAlphanumeric(s[st])){
//             st++;
//             continue;
//         }
//          if(!isAlphanumeric(s[end])){
//             end--;
//             continue;
//         }
//         if(tolower(s[st])!=tolower(s[end])){
//             return false;
//         }
//         st++;
//         end--;
//     }
//     return true;
// }

// int main(){
//    string s = "racecar";
//    int ans = isPalindrome(s);
//     cout<<ans;
//     return 0;
// }


 



#include<iostream>
#include<string>
#include <cctype>
using namespace std;

bool isAlphanumeric(char ch){
  return isalnum(ch);
}

bool isPalindrome(string s){
    int st = 0,end = s.length()-1;
    while(st < end){
        if(!isAlphanumeric(s[st])){
            st++;
            continue;
        }
         if(!isAlphanumeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
   string s = "racecar";
   int ans = isPalindrome(s);
    cout<<ans;
    return 0;
}


//                            remove all the occourance from a given substring

// #include<iostream>
// #include<string>
// using namespace std;

// string removeOccurrences(string s,string part){
//     while(s.length()>0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main(){
//     string s = "daabcbaabcbc";
//     string part = "abc";
//     string ans = removeOccurrences(s,part);
//     cout<<ans;
//     return 0;
// }