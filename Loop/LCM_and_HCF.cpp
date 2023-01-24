#include<iostream>
using namespace std;

int main()
{
    int fir,sec;
    cout<<"Enter first no.: ";
    cin>>fir;
    cout<<"Enter second no.: ";
    cin>>sec;
    int temp=fir;
    while(true)
    {
        if(fir%sec==0){cout<<"The LCM of "<<temp<<" and "<<sec<<" is: "<<fir<<endl;  break;}
        else{fir=fir*2;}
    }
    int H=(temp*sec)/fir;
    cout<<"The HCF of "<<temp<<" and "<<sec<<" is: "<<H<<endl;
}