// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
//     // vector<int> vec;
//     // vec.push_back(1);
//     // vec.push_back(2);
//     // vec.push_back(3);
//     // vec.push_back(4);
//     // vec.push_back(5);
//     // vec.push_back(6);
//     // vec.emplace_back(7);

//     // cout<<vec.size()<<endl;
//     // cout<<vec.capacity()<<endl;

//     // vector<int> vec = {1,2,3,4,5};
//     //vector<int> vec(3,10);
//     vector<int> vec1 = {1,2,3,4,5};
//     vector<int> vec2(vec1);
//     for(int val : vec1){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     // cout<< " val at index 2  "<< vec[2] << vec.at(2);
//     // cout<<endl;

//     // cout<<"front"<<vec.front()<<endl;
//     // cout<<"back"<<vec.back()<<endl;

//     return 0;
// }



//                                      ...more function

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
//     vector<int> vec ={1,2,3,4,5};

//     // vec.erase(vec.begin()+1,vec.begin()+3);
//     // vec.insert(vec.begin()+2,101);
//     vec.clear();
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<"empty:"<<vec.empty();

//     return 0;
// }

//                                         iterators

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
//     vector<int> vec = {1,2,3,4,5,6};
//     cout<<"vec.begin : "<<*(vec.begin())<<endl;
//     cout<<"vec.end : "<<*(vec.end())<<endl;
 
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     //forward
//     // vector<int>::iterator it;
//     // for(it=vec.begin();it!=vec.end();it++){//forward
//     //     cout<<*(it)<<" ";    
//     // }
//     // cout<<endl;
// //                                     backword

//     // vector<int> :: reverse_iterator it;    //replace it with auto
//     for(auto it =vec.rbegin();it!=vec.rend();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;

//     return 0;
// }



//                                                   list

// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;

// int main(){
//     list<int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);
//     for(int val : l){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


 //              deque

//  #include<iostream>
//  #include<vector>
//  #include<deque>
//  using namespace std;


//  int main(){
//     // deque<int> d = {1,2,3,4,5};
//     // for(int val : d){
//     //     cout<<val<<" ";
//     // }
//     // cout<<endl;


//     //                                                     pair in c++
//     // pair<string,int> p ={"Aryan",20};
//     // cout<<p.first<<endl;
//     // cout<<p.second<<endl;
//     //                                   pair of pair
//     // pair<int, pair<string,int>> p = {20,{"aryan",18}};
//     // cout<<p.first<<endl;
//     // cout<<p.second.first<<endl;
//     // cout<<p.second.second<<endl;

//     //                                    vector of apir

//     vector<pair<int,int>> vec = {{1,2},{3,4},{4,5}};
//     vec.emplace_back(6,7);            // in-place object create
//     for(pair<int,int> p : vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

//     return 0;
//  }


#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<"top :"<<s.top()<<endl;

    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;


    stack<int> s1;
    s1.swap(s);
    cout<<"s size"<<s.size()<<endl;
    cout<<"s1 size"<<s1.size()<<endl;
    return 0;
}