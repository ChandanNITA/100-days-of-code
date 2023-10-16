#include<iostream>
using namespace std; 
 
int squareroot(int n){ 
    int s=0; 
    int e=n; 
    int mid= s+(e-s)/2; 
    int ans=-1; 
 
    while(s<=e){ 
        if (mid*mid> n){ 
        e=mid-1;} 
 
        if (mid*mid<=n){ 
        ans=mid; 
        s=mid+1;} 
 
        mid=(s+e)/2; 
 
         
    } 
return ans; 
 
 
} 
 
int main(){ 
    int n; 
    cout << "ankit mc hai"<<endl;
    cin>>n; 
 
    double finale =squareroot(n); 
    cout<<finale<<endl;
    double step=0.1; 
    int precision; 
    cout<<" hello"<<endl;
    cin>>precision; 
    for (int i=0; i<precision; i++ ){ 
        cout << "i is = "<<i;
 
        for (int j= finale; j*j<n; j=j+step){ 
            cout << "i = "<<i<< "j = " <<j;
            finale=j; 
        } 
        step=step/10; 
 
    } 
    cout<< finale; 
     
    return 0; 
}
    
    