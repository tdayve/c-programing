//this is a programm to convert temperature from celcius to fahrenheit
#include <iostream>

using namespace std;
float temperature(int fahrenheit);
float celcius;
int main()
{
    float celcius;
    float fahrenheit;
    cout << "enter temperature in fahrenheit" << endl;
    cin>>fahrenheit;
    celcius=temperature(fahrenheit);
    cout << "temperature in celcius = " <<celcius<< endl;

    return 0;
}float temperature(int fahrenheit){
float celcius;

celcius=(fahrenheit-33)*0.555556;
return celcius;

           }
