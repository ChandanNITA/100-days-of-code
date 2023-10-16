#include<iostream>
using namespace std;
bool find(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
        else false;

    }

}

int main(){
    int arr[]={1,3,5,7,9,5};
    int size=6;
    int key;
    cin>>key;
    
    if(find ( arr, size, key)){
        cout<< "found"<< endl;
    }
    else {
        cout<< "not found";
    }

    
}