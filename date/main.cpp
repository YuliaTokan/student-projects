#include <iostream>

using namespace std;

void day(int x)
{
    x=x%10;
    if(x==1)
    {
        cout<<"first";
    }
    if(x==2)
    {
        cout<<"second";
    }

}

int main()
{
    int x, i, k, z;
    int date [364];
    for( i=0, k=1; i<31; i++)
    {
        date [i]=k;
        k++;
    }
    for(i=31,k=1; i<59; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=59, k=1; i<90; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=90,k=1; i<120; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=120,k=1; i<151; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=151, k=1; i<181; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=181, k=1 ; i<212; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=212, k=1; i<243; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=243, k=1; i<273; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=273, k=1; i<304; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=304, k=1; i<334; ++i)
    {
        date [i]=k;
        k++;
    }
    for(i=334,k=1; i<365; ++i)
    {
        date [i]=k;
        k++;
    }
    cout<<" Enter a namber of day";
    cin>>z;
    x=date[z-1];
    cout<<endl<<x;

    if ((1<=date[z])&&(date[z]<31))
    {cout<<" january";}
    if ((31<=date[z])&&(date[z]<59))
    {cout<<" february";}
    if ((59<=date[z])&&(date[z]<90))
    {cout<<" march";}
    if ((90<=date[z])&&(date[z]<120))
    {cout<<" april";}
    if ((120<=date[z])&&(date[z]<151))
    {cout<<" may";}
    if ((151<=date[z])&&(date[z]<181))
    {cout<<" june";}
    if ((181<=date[z])&&(date[z]<212))
    {cout<<" julay";}
    if ((212<=date[z])&&(date[z]<243))
    {cout<<" august";}
    if ((243<=date[z])&&(date[z]<=273))
    {cout<<" september";}
    if ((273<=date[z])&&(date[z]<=304))
    {cout<<" october";}
    if ((304<=date[z])&&(date[z]<=334))
    {cout<<" november";}
    if ((334<=date[z])&&(date[z]<=365))
    {cout<<" december";}



}
