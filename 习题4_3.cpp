#include<iostream.h>
void main()
{
	int i,n;
	i=0;
	cout<<"������һ����������";
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
			{
				n=n/2;
	i=i+1;}
		else
		{
			n=n*3+1;
		i=i+1;}
	}
			cout<<"i="<<i-1<<endl;

}