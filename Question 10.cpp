#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;
    cout << "please enter the marks out of 100" << endl;
    cout<<"subject 1 =";
    cin>>a;
    cout<<"subject 2 =";
    cin>>b;
    cout<<"subject 3 =";
    cin>>c;
    cout<<"subject 4 =";
    cin>>d;
    cout<<"subject 5 =";
    cin>>e;
    cout<<"total marks "<<a+b+c+d+e<<endl;
    cout<<"the average is "<<(a+b+c+d+e)/5<<endl;
    cout<<"the percentage is "<<(a+b+c+d+e)/5<<endl;

    return 0;
}
