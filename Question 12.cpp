#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a,r,t,n;
  cout<<"please enter the following inormation "<<endl;
  cout<<"principal amount ";
  cin>>a;
  cout<<"interest rate per annum ";
  cin>>r;
  cout<<"number of times the interest is compounded annually ";
  cin>>n;
  cout<<"the number of years money is invested for ";
  cin>>t;
  float x;
  x=pow((1+(r/n)),n*t);
  cout<<"the compound interest amount is "<<a*x-a<<endl;
    return 0;
}
