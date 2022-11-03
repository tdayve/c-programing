#include <iostream>
//program to display 3 by 3 matrix

using namespace std;

int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {

    for(j=0;j<3;j++)

   {

    cout<<"enter matrix number in ["<<i<<"]["<<j<<"]";
    cin>>a[i][j];
   }
    }

    cout<<"matrix is  "<<endl;
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
