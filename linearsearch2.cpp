#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,3,5,7,9,4};
    int size=6;
    int num;
    cout<<"Enter the number:";
    cin>> num;
    bool flag=0;
    // 0->not found
    for(int i=0;i<size; i++){
        if(arr[i]==num){
              flag=1;
        }   
    }
    if(flag)
    cout<< "present" << endl;
    else{
    cout<< "Absent"<< endl;
    }
    return 0;
}
