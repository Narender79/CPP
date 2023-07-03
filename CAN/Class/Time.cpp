#include <iostream>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    void set(int x,int y,int z)
    {
        hr=x;
        min=y;
        sec=z;
    }
    void show()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void normalisze()
    {
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
    }
    Time add(Time x)
    {
        Time temp;
        temp.sec=sec+x.sec;
        temp.min=min+x.min;
        temp.hr=hr+x.hr;
        temp.normalisze();
        return temp;
    }

};
int main()
{
    Time t1,t2,t3;
    t1.set(2,40,56);
    t1.show();
    t2.set(3,56,7);
    t2.show();
    t3=t1.add(t2);
    t3.show();
}