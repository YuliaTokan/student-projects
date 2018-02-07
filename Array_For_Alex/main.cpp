#include <iostream>

using namespace std;

int main()
{   int N=100, array[N], Work_Lenth=0, columns=4, lines=0, snake[lines][columns], starting_point=0, i=0;
    cout << "Enter the numbers:" << endl;
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
        if(!cin>>array[i])
            break;
        Work_Lenth++;
    }
    cout<<endl<<"Work_Lenth="<<Work_Lenth;
    if(Work_Lenth%4==0)
        lines=Work_Lenth/4;
    else lines=(Work_Lenth/4)+1;
    cout<<endl<<"lines"<<lines;
    start:
    while(i<lines+1)
    {
        if(i%2==0){
         for(int j=0;j<columns;j++)
            {
              snake[i][j]=array[starting_point];
              starting_point++;
            }}

        else {for(int j=0;(columns-1)>=j;columns--)
            {
              snake[i][columns-1]=array[starting_point];
              starting_point++;
            }}
        columns=4;
        i++;


    }


    for(int i=0; i<lines; i++)
    {   cout<<endl;
        for(int j=0; j<4; j++)
        {
            cout<<snake[i][j]<<" ";
        }

    }
    return 0;
}
