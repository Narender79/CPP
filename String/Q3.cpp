/*****Question 3. Given a sorted array and a value x, the ceiling of x is the smallest element in an array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume that the array is sorted in non-decreasing order. Write efficient functions to find the floor and ceiling of x. 
Examples : 

For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0:    floor doesn't exist in array,  ceil  = 1
For x = 1:    floor  = 1,  ceil  = 1
For x = 5:    floor  = 2,  ceil  = 8
For x = 20:   floor  = 19,  ceil doesn't exist in array

1 2 3
50 30 39 35 48 46*****/ 


#include<iostream>
using namespace std;

int main()
{
    int a[7]={1,2,8,10,10,12,19};
    int x,c;
    cout<<"enter the value of x: ";
    cin>>x;
    for(int i=0;i<8;i++)
    {
        if(x>a[i])
        {
            c=a[i];
        }
        else{
            cout<<"The value of floor for "<<x<<" does not exit";
        }
    }
    cout<<"The floor value of "<<x<<" is: "<<c<<"\n";
    for(int i=0;i<8;i++)
    {
        if(x<a[i])
        {
            c=a[i];
            break;
        }
        else{
            cout<<"The value of ceil for "<<x<<" does not exit";
        }
        
    }
    cout<<"The ceil value of "<<x<<" is: "<<c;
}