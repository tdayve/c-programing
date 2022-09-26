// Program to check the requirements to vote
#include <iostream>

using namespace std;

int main()
{
    int age;
    string yesno;
    cout<<"Are you are kenyan citizen"<<endl;
    cin>> yesno;
    if (yesno=="yes"||yesno=="Yes"||yesno=="YES")
    {
        cout<< "Enter your age"<<endl;
        cin>> age;
        if (age>=18)
        {
            cout<<"Are you a registered voter"<<endl;
            cin>>yesno;
            if(yesno=="yes"||yesno=="Yes"||yesno=="YES")
         {
            cout<<("you are eligible to vote")<<endl;
         }
            else if(yesno=="no") 
            {
                cout<<"you are not eligible to vote"<<endl;
            }
         }
         //age
         else
         {
             cout<<"you are not eligible to vote"<<endl;
         }
    }
    else if(yesno=="no")
    {
        cout<< "You are not eligible to vote"<<endl;
    }
     else
    { 
        cout<< "Invalid entry"<<endl;
    }
    
    
    return 0;
}
