#include <iostream>
// program to calculate area of a circle
using namespace std;
float circle(int r);
float  area;
int main()
{
    int radius;
    cout<<"enter radius "<<endl;
    cin>>radius;
    area=circle(radius);
    cout<<"area = "<<area<<endl;
    return 0;
}
float circle(int r){
float  area;
area=3.142*r*r;
return area;}
