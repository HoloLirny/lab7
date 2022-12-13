#include<iostream>

using namespace std;

int adiff(int a,int b){
  if(a>b){
    if(a-b>=360){
      if((a-b)%360>180){
        return ((a-b)%360)-180;
      }else{
        return (a-b)%360;
      }    
    }else if(a-b>180){
      return a-b-180;
    }else{
      return a-b;
    }
  }else{
    if(b-a>=360){
      if((b-a)%360>180){
        return ((b-a)%360)-180;
      }else{
        return (b-a)%360;
      }    
    }else if(b-a>180){
      return 360-(b-a);
    }else{
      return b-a;
    }
  }
}


int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
