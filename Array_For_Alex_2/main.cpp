#include <iostream>
#include <stdio.h>

 using namespace std;


   int main()
    {
		cout<<"Enter n:";
		int n;
		cin>>n;
		cout<<endl;
		int spiral[100][100]={0};
		int i=0,j, start=0,lines, columns=lines=n, number=1;

		while (number<=n*n)
		{
			for (j=start;j<columns;++j)
			{
				spiral[i][j]=number;
				++number;

			}--j;
			if (number<=n*n)
			{
			for (i=start+1;i<columns;++i)
			{
				spiral[i][j]=number;
				++number;
			}
			}
			--i;
			//заполняем с лева на право
			if (number<=n*n)
			{
			for (j=columns-2;j>start;--j)
			{
            spiral[i][j]=number;
				++number;
			}
			}
			if (number<=n*n)
			{
			for (i=columns-1;i>start;--i)
			{
               spiral[i][j]=number;
				++number;
			}
			}
			++start;
			--columns;
			++i;
		}
		for (i=0;i<n;++i)
		{
			for (j=0;j<n;++j)
			{
				cout<<spiral[i][j]<<" ";
			}
			cout<<endl;
		}
		return 0;
  }
