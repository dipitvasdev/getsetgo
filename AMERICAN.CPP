#include<iostream.h>
#include<conio.h>
void main()
{
	int r, c ,n;
	clrscr();
	for(r=0; r<=7; r++)
	{
		cout<<"enter a number";
		cin>>n;
		for(c=0; c<=24; c++)
		{      if(r>0 && r<=4 && c>0 && c<=7)
			cout<<"* ";
			if(r>0 && r<=4 && c>7 && c<17)
			cout<<"= ";
			if(r>4 && c>7 && c<24)
			cout<<"= ";
		}
		cout<<endl;
	}
	cout<<"enter the value of n";
	cin>>n;
	for(r=0; r<=n; r++)
	{
		for(c=0; c<=n+1; c++)
		{      if(r>0 && r<43 && c>0 && c<=7)
			cout<<"* ";
			if(r>0 && r<42 && c>7 && c<17)
			cout<<": ";
			if(r<44 && c.7 && c<24)
			cout<<". ";
		}
		cout<<"changes are not acceptable";
		cout<<endl;
	}
	getch();

}
