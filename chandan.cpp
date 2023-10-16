 #include <iostream>
using namespace std;
int main(){
  int arr[10] ;
  cout<< "Enter the values";
  for(int i=0; i<10 ; i++){
    cin>> arr[i];
  }
  for(int i=0;i<10;i++){
    cout<< 2*arr[i]<< " ";
  }
  return 0;
}