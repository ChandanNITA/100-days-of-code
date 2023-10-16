#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>arr{0,1,0,1,0,1,1,1,0,0,0};
     int start=0;
     int end=arr.size()-1;
     int i=0;
     while(i<arr.size()){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        if(arr[i]==1){
            swap(arr[i],arr[end]);
                end--;
                i++;
            }
            for(auto value: arr){
                cout<< value<< " ";
            }
        }
     }
