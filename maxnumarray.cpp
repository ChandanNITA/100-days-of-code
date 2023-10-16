#include<iostream>
#include <limits.h>
using namespace std;
int main(){

   int arr[] ={2,23,4,56,10,5,6,35,67,34,27,10};
    int size =12;
    //initialize the maxi variable with the 
    //minimum possible integer value

    int maxi= INT_MIN;
    for(int i=0; i<size; i++){
    if(arr[i]> maxi){
        //found a number greater than maxi,update maxi;
        maxi= arr[i];
    }

    }
    cout << "maximum number is "  << maxi << endl;
    return 0;
   

}