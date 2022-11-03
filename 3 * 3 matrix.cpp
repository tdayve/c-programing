#include <iostream>
//program to display 3 by 3 matrix

using namespace std;

int main()
{
    int a[3][3],i,j;
    cout<<"enter maatrix number"<<endl;
    for(i=0;i<3;i++)
    {

    for(j=0;j<3;j++)

   {

    cout<<"enter number in pocket["<<i<<"]["<<j<<"]";
    cin>>a[i][j];
   }
    }

    cout<<"mstrix is  "<<endl;
     for(i=0;i<3;i++)
    {

    for(j=0;j<3;j++)

   {
       cout<<a[i][j]<<" ";
   }
   cout<<endl;
    }


    return 0;
}
