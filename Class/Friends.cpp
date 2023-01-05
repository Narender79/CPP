#include<iostream>
using namespace std;

class A
{
private:
int a;
public:
A(){
    a=5;
}
friend void mod();
};
void mod(){A obj1; cout<<"Private member of A is: "<<obj1.a;}

int main()
{
    A obj1;
    mod();
    return 0;
}