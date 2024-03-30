#include <iostream>

using namespace std;

int main() {
    
    double temp;
    char unit;
    char convert;
    cout<<"Temperature converter"<<endl
        <<"enter the temperature: ";
    cin>>temp;
    cout<<"enter the unit(F/C/K): ";
    cin>>unit;

    cout<<"what unit would you like to convert it to(F/C/K): ";
    cin>>convert;

    if (unit == 'F' && convert == 'C')
    {
        cout<<(temp-32)*5/9;
    }
    else if (unit == 'F' && convert == 'K')
    {
        cout<<(temp-32)*5/9 + 273.15;
    }
    else if (unit == 'C' && convert == 'F')
    {
        cout<<(temp*9/5) + 32;
    }
    else if (unit == 'C' && convert == 'K') 
    {
        cout<<temp + 273.15;
    }
    else if (unit == 'K' && convert == 'F')
    {
        cout<<(temp-273.15) * 9/5 + 32;
    }
    else if (unit == 'K' && convert == 'C')
    {
        cout<<temp - 273.15;
    }
    else{
        cout<<"it is already in the same unit";
    } 
    
}