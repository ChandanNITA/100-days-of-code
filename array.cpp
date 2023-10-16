#include<iostream>
using namespace std;
int main(){
    // int arr[8];
    // cout << arr << endl;
    // cout<< &arr << endl;
    // cout<< "array created succesfully" << endl;
    // array initialization 
    // int arr[] ={2,3,8,9,5};
    // int brr[5] ={2,4,5,6,7};
    // int crr[10]={2,4,5,6,9};
    // //error
    // int drr[4]= {2,4,6,8,10};
    // cout<< "Array initialized successfully" << endl;
    // int arr []= {2,4,1,5,6};
    // //cout<< arr[4] <<endl;
    // for(int i=0; i<5; i++){
    // cout << arr[i] << " " ;
    // }
    int arr[10];
    cout <<"Enter the input values in array " << endl ;
    //taking input in array
    for(int i=0; i<10; i++){
        cin>> arr[i];
        }
        //printing 
        cout<< "printing the values in array" << endl;
        for(int i=0; i<10 ;i++){
            cout << arr[i] <<" ";
        }
    


     return 0;
}

