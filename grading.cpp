//program for mean avg grade
#include <iostream>

using namespace std;

int main()
{
    int maths,english,french,science,CRE;

    cout<<"enter marks for 5 units"<<endl;

    cout<<"maths"<<endl;

    cin>>maths;

    cout<<"english"<<endl;

    cin>>english;

    cout<<"french"<<endl;

    cin>>french;

    cout<<"science"<<endl;

    cin>>science;

    cout<<"CRE"<<endl;

    cin>>CRE;

    //the above program is to take you to the next line to insert marks for a different unit

   int avg=(maths+english+french+science+CRE)/5;

{


     if (maths >100 )
     cout<<"INVALID ENTRY OF MATHS MAKRKS!!!"<<endl;
     if (english>100)
     cout<<"INVALID ENTRY OF ENGLISH MARKS!!!"<<endl;
     if (french>100)
     cout<<"INVALID ENTRY OF FRENCH MARKS!!!"<<endl;
     if (science>100)
     cout<<"INVALID ENTRY OF SCIENCE MARKS!!!"<<endl;
     if (CRE>100)
    cout<<"INVALID ENTRY OF CRE MARKS!!!"<<endl;
}
{

       if(avg>=70 && avg <=100)


        cout<<"mean grade A"<<endl<<"mean marks = "<<avg<<"%"<<endl<<"remak = excellent"<<endl;


   else  if(avg>=60 && avg<=69)



    cout<<"mean grade B"<<endl<<"mean marks = "<<avg<<"%"<<endl<<"remak = very good"<<endl;


    else if(avg>=50 && avg<=59)


    cout<<"mean grade C"<<endl<<"mean marks = "<<avg<<"%"<<endl<<"remak = average"<<endl;

     else if (avg>=40 && avg<=49)

    cout<<"mean grade D"<<endl<<"mean marks = "<<avg<<"%"<<endl<<"remak = poor"<<endl;

   else if (avg<=39)

    cout<<"mean grade E"<<endl<<"mean marks = "<<avg<<"%"<<endl<<"remak = fail"<<endl;

    else

    cout<<"INVALID GRADE";
}
    return 0;
}
