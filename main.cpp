//c++ to demonstrate inheritance
#include<iostream>
using namespace std;
//base class
class Grandfather {
public:
void farm()
{
    cout<<"have a farm"<<endl;
}

void height()
{
cout<<"same height"<<endl;
}

};
//derived class
class Grandchild: public Grandfather
{
public:
    void temper()
    {
        cout<<"got temper"<<endl;
        }
};
int main()
{
    //create object of Grandchild class
    Grandchild Grandchild;
    //calling member of base class
        Grandchild.farm();
        Grandchild.height();
   //calling member of derived class
   Grandchild.temper();
   return 0;

}

