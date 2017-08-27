#include <iostream>

using namespace std;

int main()
{
    int x;
    cout <<"pleade enter the number of days "<<endl;
    cin>>x;
    cout <<"the given days in terms of years ,weeks and days are "<<x/365<< " years ,"<< (x-(x/365)*365)/7<<" weeks and "<<(x-(x/365)*365)%7<< " days"<<endl; //year = 365 days
    return 0;
}
