#include<iostream>
using namespace std;
int main(){
  int n= 4;
  for(int i = 0; i<n; i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout<<" "; //here space for printing space

    }
    //for number 1 half side
    for(int j=1; j<=i+1;j++){
        cout<<j;
    }
    //number2 for another half side 
    for(int j=i; j>0; j--){
        cout<<j;
    }
    cout<<endl;   //break the loop and start with another line
  }
}