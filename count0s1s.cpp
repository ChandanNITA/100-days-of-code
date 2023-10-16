#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,0,0,0,1,0,1,0,1,0};
    int size=14;
    int numzero=0;
    int numone=0;
    for(int i=0; i<size; i++){
        // if zero found increament numzero
        if(arr[i]==0){
            numzero++;
        }
       // if one found increament in numone
        else{
            numone++;
        }
        
    }
    cout<< "number of zeroes is "<< numzero<<endl;
    cout<< "number of ones is "<< numone<< endl;
   
}