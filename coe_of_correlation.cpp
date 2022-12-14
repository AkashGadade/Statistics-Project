// Code by Akash Gadade
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cin>>n;

  cout<<"\n"<<n<<endl;

  float x[n];
  float y[n];
  float xx[n];
  float yy[n];
  float xy[n];

  float sx=0;
  float sy=0;
  float sxx=0;
  float syy=0;
  float sxy=0;

  for(int i=0;i<n;i++)
    {
      float tempx;
      float tempy;
      cout<<"\n Enter the value of x :-";
      cin>>tempx;
      cout<<"\n Enter the value of y :-";
      cin>>tempy;
      x[i]=tempx;
      y[i]=tempy;
      xx[i]=tempx*tempx;
      yy[i]=tempy*tempy;
      xy[i]=tempx*tempy;

      // for addition purpose
      sx=sx+tempx;
      sy=sy+tempy;
      sxx=sxx+tempx*tempx;
      syy=syy+tempy*tempy;
      sxy=sxy+tempx*tempy;
      
    }

  cout<<"\n ************* Table ***************"<<endl;
  cout<<"x"<<"\t"<<"y"<<"\t"<<"xx"<<"\t"<<"yy"<<"\t"<<"xy"<<endl;
  cout<<"---------------------------------------------------------"<<endl;

  for(int i=0;i<n;i++)
    {cout<<x[i]<<"\t"<<y[i]<<"\t"<<xx[i]<<"\t"<<yy[i]<<"\t"<<xy[i]<<endl;}
  cout<<"---------------------------------------------------------"<<endl; 

  float nn = n*sxy - sx*sy;
  float dd =(sqrt(((n*sxx)-(sx*sx))))*(sqrt(((n*syy)-(sy*sy))));
  float r = nn/dd;
  
  cout<<"Coefficient of correalation :--> "<<r;
  
 return 0;
}
