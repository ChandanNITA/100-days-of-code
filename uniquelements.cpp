#include<iostream>
#include<vector>
using namespace std;
 int findunique(vector<int>arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
        
    }
    return ans;
 }






int main(){
    int n;
    cout<< "Enter the size of an array ";
    cin>>n;
    vector<int>arr(n);
    cout<< "Enter the elements of an array "<< endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i]; 
    }
    int uniquearray= findunique(arr);
     cout<< "unique element is "<< uniquearray <<endl;
}