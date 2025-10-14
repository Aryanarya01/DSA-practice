// #include<iostream>
// #include<cstring>

// using namespace std;

// int main(){
//     char str[]={'a','b','c','\0'};
//     cout << strlen(str)<<endl;

//     return 0;
// }


// #include<iostream>
// #include<cstring>

// using namespace std;

// int main(){
//     // char str[12];
//     // cout<<"enter the character array";
//     // // cin>>str;
//     // cin.getline(str,100);
//     // for(char ch : str){
//     //     cout<<ch<<" ";
//     // }
//     // cout<<endl;

//     char str[] = "apna college";
//     int len =0;
//     for(int i=0;str[i]!='\0';i++){
//         len++;
//     }
//     cout<<"length of string :"<<len<<endl;
//     return 0;
// }

//                 String in c++

#include<iostream>
#include<string>
using namespace std;


int main(){

    // string str = "aryan arya";
    // cout<<str;
    // cout<<str.length()<<endl;


    string str;
    getline(cin, str);
    cout<<"output :"<<str<<endl;

    return 0;
}