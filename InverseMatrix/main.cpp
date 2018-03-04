#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, e=1, det, n=0;
    cout<<"Enter N:";
    cin>>N;
    cout<<endl;


    double array[N][N], array_help[N], num, count;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<"Enter array["<<i<<"]["<<j<<"]:";
            cin>>array[i][j];
        }
    }

    cout<<endl;
    for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    while(e<N-1)
    {for(int i=e; i<=N; i++)
        {
            num=(array[i][n]/array[n][n]);
            for(int j=0; j<N; j++)
            {
                array[i][j]-=num*array[n][j];
            }
        }
        e++;
        n++;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;
        }
    return 0;
}
