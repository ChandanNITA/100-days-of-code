#include <iostream>
using namespace std;



char getgrade ( int marks){
   
switch(marks/10){
    case 10 :
    case 9 :return 'A' ; break;
    case 8 :return 'B' ; break;
    case 7 :return 'C' ; break;
    case 6 :return 'D' ; break;
    default: return 'E' ; break;
}
}


int main(){
    int marks;
    cout<< "Enter the marks : " ;
    cin>> marks;
    
    char finalgrade= getgrade(marks);
    cout << finalgrade << endl;
    // for(int i=0; i<=100; i++){
    //     char ans= getgrade(i);
    //     cout << "Grade for marks = " << i<< " is " << ans << endl;
    // }
    return 0;
}


    
    
    
    
    // int val;
    // cout<< "Enter the value" << endl;
    // cin>> val;
    // switch(val){
    //     case 1:cout <<"chandan" ;
    //     break;
    //     case 2:cout<< "Hemanshu";
    //     break;
    //     case 3:cout<< "priyanshu";
    //     break;
    //     case 4:cout<< "Ayush";
    //     break;
    //     default:cout<< "Anshuman";
 

    // }



    
