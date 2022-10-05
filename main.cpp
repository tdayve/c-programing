#include <iostream>

using namespace std;

int main()
{
    int i=0,sum=0;
    do{
    sum+=i;
    cout<<"enter a number"<<" ";
    cin>>i;
    }
    while (i>=0);
    cout<<endl<<"sum = "<<sum<<endl;

    return 0;

}
