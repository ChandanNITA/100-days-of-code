#include<iostream>
using namespace std;
// n is a parameter
int findmax(int num1, int num2, int num3){
    if(num1 >num2 && num1>> num3){
        return num1;
    }
    else if(num2> num1 && num2>num3){
        return num2;
    }
    else {
        return num3;
    }
}


int main(){
    int a,b,c ;
    cin >> a >> b>> c;
    //  a is argument
    int maximumnumber= findmax(a,b,c);
    cout <<"maximum number is " << maximumnumber << endl;
    return 0;

}
    