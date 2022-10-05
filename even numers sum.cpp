#include <iostream>

using namespace std;

int main()
{
    int i,x,y,sum=0;
     cout<<"enter starting point"<<endl;
     cin>>x;
    cout<<"enter the ending point"<<endl;
    cin>>y;
    cout<<"even numnbers between"<<" "<<x<<" "<<"and"<<" "<<y<<" = ";
    for (i=x;i<=y;i++)
        {
    if (i%2==0)
    {
    cout<<i<<" ";
    sum+=i;}
        }
    cout<<endl<<endl<<"sum of even numbers between"<<" "<<x<<" "<<"and"<<" "<<y<<" = "<<sum<<endl;
    return 0;
}
