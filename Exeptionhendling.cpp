#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int m,n,o;
	m=18;
	n=0;

	
	try
	{
		if(o==0)
		{
			throw 60;
		}
		else
		{
		   	o=m/n;
			cout<<"O ="<<o<<endl;  	
		}
	}
	catch(int n)
	{
		cout<<"Cannot divisable";
	}
	return 0;
}
