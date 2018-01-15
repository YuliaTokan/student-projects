#include <iostream>

using namespace std;

int main()
{
    int column, line, i, j ;

    cout<<"Enter a column";
    cin>>column;

    cout<<"Enter a line";
    cin>>line;

    int matrix[line][column];
    cout<<"Enter a number ";

    for(i=0; i<line; i++)
    {
        for(j=0; j<column; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Matrix:"<<endl;
    for(i=0; i<line; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}

