// program to calculate salary increasment
#include <iostream>

using namespace std;

int main()

{
    int years;
    float rise1,rise2,rise3,incr,incr2,incr3,salary;

cout<<"please enter your details below"<<endl;

 cout<<"year(s) of service"<<endl;
 cin>>years;
cout<<"please enter current salary"<<endl;
 cin>>salary;
    incr=(salary *10)/100;      //incr= amout by which salary has increased by
    rise1 =salary+incr;
    incr2=(salary *8)/100;       // rise1,rise2,rise3= new salary after increasment
    rise2=(salary + incr);
    incr3=(salary *5)/100;
    rise3=(salary + incr);



  if (years >10)


  cout<<"new salary = "<<rise1<<endl<<"salary increase = "<<incr<<endl;

 else if(years>=6 && years <=10)


   cout<<"new salary = "<<rise2<<endl<<"salary increase = "<<incr2<<endl;

  else if(years < 6)

   cout<<"new salary = "<<rise3<<endl<<"salary increase = "<<incr3<<endl;

    return 0;
}
