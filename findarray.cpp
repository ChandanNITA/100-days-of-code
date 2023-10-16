#include <iostream>
using namespace std;
// bool find(int arr[], int size,int key){
//     //linear search
//     for(int i=0; i<size; i++){
//         if(arr[i]== key)
//         return true;
//     }
//     // not present 
//     return false;
// }


 
int main(){

    // int arr[5]={1,2,3,5,8};
    // int size= 5;
    // cout<< "Enter the key to find" << endl;
    // int key;
    // cin>> key;
    // if(find(arr,size,key)){
    //     cout << "found" << endl;
    // }
    // else {
    //     cout<< "not found" << endl;

    // }
    int arr[]={0,1,1,1,1,0,0,1,0,0,1,0,1,0,1,0,1,0,1};
    int size =19;

    int numzero=0;
    int numone=0;
    for(int i=0; i<size; i++){
        //if zero found ,increament in numzero
        if(arr[i] ==0){
            numzero++;
        }
        if(arr[i]==1){
            numone++;
        }
    }
    cout<< "number of zeroes " << numzero<< endl;
    cout<< "number of ones " << numone << endl;



    
    
 }