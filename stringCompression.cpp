#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int idx = 0;
    int n = chars.size();
    for(int i=0;i<n;i++){
        char ch = chars[i];
        int count = 0;
        while(i<n && chars[i] == ch){
            count++;
            i++;
        }
        //case1
        if(count == 1){
            chars[idx++] = ch;
        }else{
             chars[idx++] = ch;
             string str = to_string(count);
             for(char dig : str){
                chars[idx++] = dig;
             }
            }
            i--;
    }
    chars.resize(idx);
    return idx;
}

void printString(vector<char>& chars){
    for(char ch : chars){
        cout<<ch<<" ";
    }
    cout<<endl;
}

int main(){
     vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
     int newLength = compress(chars);
      cout << "Compressed Length: " << newLength << endl;
      cout << "Compressed Array: ";
    printString(chars);


    return 0;
}



 