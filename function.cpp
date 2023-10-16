#include <iostream>
using namespace std;

// void printName(){
//     int n;
//     cout<< "Enter the value n" <<endl;

//     cin >> n;
//     for(int i=0; i<n; i++){
//         cout<< "chandan" << endl;

//     }
// }
// int main() {

//     //function call
//     printName();
// }
//void printnumber(int num){
    //cout<< num<< endl;
    // function declaration
int add(int a, int b){
    int result= a+b;
     return result ;
     // function ki declaration upar honi chahiye
 }

int main(){
    int a;
    cout<< "Enter the value of a: "<< endl;
    cin>> a;

    int b;
    cout<< "Enter the value of b: "<< endl;
    cin>> b;

   int sum=add(a,b);
   cout<< "result is " << sum;
   return 0;
    
    
}  