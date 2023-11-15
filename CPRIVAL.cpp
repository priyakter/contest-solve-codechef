#include<iostream>
using namespace std;
int main(){
  int R1,R2,D1,D2,x=0,y=0;
  cin>>R1>>R2;
  cin>>D1>>D2;
  x=R1+D1;
  y=R2+D2;
  if(x>y){
  cout<<"Dominater";
  }
  else if(y>x){
    cout<<"Everule";
  }
return 0;
}
