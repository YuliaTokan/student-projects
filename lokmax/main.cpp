#include <iostream>

using namespace std;

int main()
{
int x=0, y=1, M, i=0, k, s=0, g=1, a=2;
int array [100];

    cout << "Enter M:";
    cin>>M;
    do
    {x=x+y;
    y=x-y;
    x=x%M;
    y=y%M;
    array[i]=y;
    i++;
    cout<<y;
    }
    while(i<100);
    cout<<endl<<array[0];
    k=1;
        do
    {
        cout<<array[k];
        k++;
    }
    while ((array[0]!=array[k])||(array[1]!=array[k+1]));
    cout<<endl<<"Lenth of period: "<<k;
    while(a<=k)
    {
        if((array[g]>array[a])&&(array[g]>array[s]))
        {
            cout<<endl<<array[g]<<endl;
        }
        ++s;
        ++g;
        ++a;
    }
return 0;
}
