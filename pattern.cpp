#include<iostream.h>
using namespace std;

int main()
{
	int i=0,j=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}