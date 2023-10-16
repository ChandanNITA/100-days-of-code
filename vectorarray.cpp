#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int>arr;
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<< ans <<endl;
    // cout<< arr.size() << endl;
    // cout<< arr.capacity()<< endl;

    // arr.push_back(5);
    // arr.push_back(9);

    //     for(int i=0;i<arr.size(); i++){
    //    cout<< arr[i]<< endl;
    // }
    int n;
    cout<< "Enter the value of n :" ;
    cin>>n;
    vector <int> arr(n,101);
    for(int i=0; i< arr.size(); i++){
        cout<< arr[i]<< endl;
    }
    vector<int>brr{10,20,30,40,5,0,};
    for(int i=0;i< brr.size(); i++){
        cout<< brr[i]<< endl;
    }

}