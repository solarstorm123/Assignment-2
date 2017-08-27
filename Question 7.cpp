#include <iostream>

using namespace std;

int main()
{
   float x,y;

   cout <<"please enter the angles"<<endl;
   cout <<"first angle = ";
   cin>>x;
   cout <<"second angle = ";
   cin >>y;
   if (x+y<180)
   {
       cout <<"the third angle is "<<180-(x+y)<<endl;

   }
   else
    {
        cout<<"the angles entered are invalid "<<endl;
    }
    return 0;
}
