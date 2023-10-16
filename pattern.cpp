// #include <iostream>
// using namespace std;
// int main(){
    // for(int row=0; row<3 ; row= row+1){
    //     //print solid rectangle
       
    //    for(int col=0 ; col<5; col=col+1)
    //    cout << "* " ;
    //    cout << endl;
    // } 
    // row +=1 is same as row= row+1
    // int n;
    // cin>> n;

    // for(int row=0; row<n ;row=row+1 ){
    //     //col +=1 is same as col =col+1
    //     for(int col= 0; col<n; col= col+1)
    //     cout << "* " ;
    //     cout<< endl;
    // } 
// }
#include <iostream>
using namespace std;
int main(){
//     int rowcount, colcount;
//     cin>> rowcount;
//     cin>> colcount;

//     for(int row=0; row<rowcount; row=row+1){
//     if(row==0 || row==rowcount-1){
//       for(int col=0; col<colcount; col=col+1){
//         cout<< "* ";
//       }
//     }
//     else{
//         cout<<"* " ;
//         for(int i=0; i<colcount-2 ;i=i+1){
          
//             cout<< "  ";
//         }
//         cout<< "* ";
//     }
//     cout<< endl;
//  }
//  int n;
//  cin >> n;
//  for(int row=0; row<n; row=row+1){

//   for(int col=0; col<row+1; col=col+1)
//      cout<< "* ";
//  }
   
//    cout<< endl;    



int n;
cin >>n;
for(int row=0; row<n ; row=row+1){

  for(int col=0; col<n-row; col=col+1){
  cout<< "*";
  
  }
      cout<< endl;
}

}