#include<iostream>
using namespace std;

int main()
{
    int i;
    int c=0;
    int a[10]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    for(i=0;i <10;i++)//i<10
    {
        if (a[i]==0)
        {
            c++;//ctr=5
        }
    }
    for(i=0;i<c;i++)//i<5
    {
        a[i]=0;//
    }
    for(i=c;i<10;i++)
    {
        a[i]=1;
    }
    for(i=0;i<10;i++)
    {
        cout<<a[i];
    }
}

0 0 0 0 0 1 1 1 1 1
      i   j(l-1)
while(i<j)
{
    if(a[i]==1 && a[j]==0)
    {

    }
}




#include<iostream>
using namespace std;

int main()
{
    int i=0;
    int j=9;
    int a[10]={0, 1, 0, 1, 1, 0, 1, 1, 1, 0};
    while(i<j)
    {
        if (a[i]==0 && a[j]==0)
        {
            i++;
        }
        else if (a[i]==1&&a[j]==1)
        {
            j--;
        }
        else if (a[i]==1 && a[j]==0)
        {
            swap(a[i],a[j]);
            i++;
            j--;

        }
        else if (a[i]==0&&a[j]==1)
        {
            i++;
            j--;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i];
    }


}

