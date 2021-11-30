#include<iostream>

using namespace std;

int addiff(int a, int b){
  int x,i=0;
  while (i == 0){
    if(a >= 360 or a <= -360){
      a=a-360;
    }
    else{
      i++;
  }
  }
  i=0;
  while (i == 0){
    if(b >= 360 or b <= -360);{
      b=b-360;
    }
  x=a-b;
  if(x < 0){
    x=x*-1;
  }
  
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
