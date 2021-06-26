#include <iostream>
#include<iomanip>
#include <cmath>
#include<cstdlib>
#define f(x) exp(-x) - 5
using namespace std;

int main() {
  float x0, x1, x2;
  float er= 1.0;
  float error, f0, f1;
  int count = 1,h;
  cout<<"Enter the value of x0 : ";
  cin>>x0;
  cout<<endl<<"Enter the value of x1 : ";
  cin>>x1;
  cout<<"Enter the value of minimum Error : ";
  cin>>error;
  cout<<"itr"<<"    \t    "<<"x(n-1)"<<"    \t    "<<"f(x(n-1))"<<"\t    "<<"xn"<<"    \t"<<"f(xn)"<<"    \t"<<"x(n+1)"<<"    \t"<<"Error"<<endl;
  while(er>error)
  {
  	f0 = f(x0);
  	f1 = f(x1);
  	x2 = x1 - ((x1-x0)/(f1-f0))*f1;
  	er = (x2 - x1)/x2;
  	er = fabs(er);
  	cout<<count<<" \t "<<x0<<" \t "<<f0<<" \t "<<x1<<" \t "<<f1<<" \t "<<x2<<" \t "<<er<<endl;
  	x0 = x1;
  	f0 = f1;
  	x1 = x2;
  	f1 = f(x1);
  	count ++;
  	
  }
  	cout<<"Root is : "<<x2;
  
}
