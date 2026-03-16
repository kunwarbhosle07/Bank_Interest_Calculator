#include <iostream>
#include <cmath>  
using namespace std;

double Interest(double principal, double rate, double time)
{
    double interest,amount;
    interest= principal*(pow((1 + rate/100),time))-principal;
    return interest;
}

int main()
{
    double principal, rate, time, interest, amount;

    cout<<"Enter the principal amount: ";
    cin>>principal;

    cout<<"Enter the Rate: ";
    cin>>rate;

    cout<<"Enter the time: ";
    cin>>time;

    interest= Interest(principal, rate, time);
    amount=interest+ principal;

    cout<<"The Compount Interest for "<<time<<" years is: "<<interest<<endl;
    cout<<"The Amount for "<<interest<<" interest is: "<<amount<<endl;

}