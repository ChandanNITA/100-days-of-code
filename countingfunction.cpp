#include <iostream>
using namespace std;
// n is a parameter
void printcounting(int n) {
    for(int i=1; i<=n; i++){
        cout<<  i << " "  ;
    }
    //cout<< endl;
}



int main(){
    int n;
    cout<< "Enter the value of n" << endl;
    cin>> n;
    //n is argument
    printcounting(n);
    return 0;
}