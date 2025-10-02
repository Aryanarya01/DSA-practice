
    //                                                 learning pointers

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
// //     int a=10;
// //     int *ptr = &a;
// //    int **parptr = &ptr;
// //    cout<<**(parptr)<<endl; 
// //     // int **parPtr = &ptr;
// //     // cout<<&ptr<<endl;
// //     // cout<<parPtr<<endl;


// //     cout<<*(&a)<<endl;
// //     cout<<*(ptr)<<endl;
 

//     int* ptr = NULL;
//     cout<<ptr<<endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a=5;
//     int *p = &a;
//     int **q  = &p;
//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
//     cout<<&a<<endl;

//     return 0;

// }


// #include<iostream>
// using namespace std;


// void changeA(int *ptr){//pass by reference using pointer
//     *ptr =20;
// }
// int main(){
//     int a=10;
//     changeA(&a); 
//     cout<<"inside main function  a="<<a<<endl;

// //                                                           REFERENCES(ALIAS)
// void changeA(int &b){
//     b=20;
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"inside main function"<<a<<endl;//20

    //                                                      array pointers

    // int main(){
    //     int arr[]={1,2,3,4,5,6};
         //cout<<*arr<<endl;


         //                                       pointer airthematic
        // int a=10;
        // int *ptr = &a;
        // cout<<ptr<<endl;
        // ptr++;
        // cout<<ptr<<endl;
        //  cout<<ptr<<endl;
        // ptr--;
        // cout<<ptr<<endl;
        
        //  cout<<ptr<<endl;
        // ptr = ptr+2;//2int 8bytes
        // cout<<ptr<<endl;//+8

        // cout<<*arr<<endl;//1
        // cout<<*(arr+1)<<endl;//2
        // cout<<*(arr+2)<<endl;//3
        // cout<<*(arr+3)<<endl;//4


        //                                    substraction
        // int *ptr2;//100
        // int *ptr1 = ptr2+2;//108
        // cout<<ptr1 - ptr2<<endl;//2
       //                                                compare

//        int *ptr1;
//        int *ptr2 = ptr1;
//        cout<<ptr1<<endl;
//        cout<<ptr2<<endl;
//         cout<<(ptr1==ptr2)<<endl;

        

//     return 0;
// }


//                                                  practice question

#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,40,50};
    int *ptr = arr;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr;
    return 0;
}
