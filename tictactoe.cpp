#include<iostream>
using namespace std;
int main()
{
	int p1,p2;
	int i,j,k,l,m;
	char a[3][3]={'_','_','_','_','_','_','_','_','_'};
	int n;
	cin>>n;
	if(n%2==0)
	{
		p1=1;
	}
else if(n%2!=0)
{
	p2=1;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(m=0;m<9;m++)
	{
	
		if(p1==1)
		{
			cout<<"p1 enter any position";
			cin>>k>>l;
			a[k][l]='o';
			p1=0;
			p2=1;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		
		}
		else if(p2==1)
		{
			cout<<"p2 enter any position";
			cin>>k>>l;
			a[k][l]='x';
			p1=1;
			p2=0;
				for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			
			
		}
	
	if((a[0][0]=='x'&&a[0][1]=='x'&&a[0][2]=='x')||(a[1][0]=='x'&&a[1][1]=='x'&&a[1][2]=='x')||(a[2][0]=='x'&&a[2][1]=='x'&&a[2][2]=='x') || (a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')||(a[2][0]=='x'&&a[1][1]=='x'&&a[0][2]=='x')||(a[0][0]=='x'&&a[1][0]=='x'&&a[2][0]=='x')||(a[0][1]=='x'&&a[1][1]=='x'&&a[2][1]=='x')||(a[0][2]=='x'&&a[1][2]=='x'&&a[2][2]=='x'))
	{
		cout<<"p2 wins";
		break;
	}
	else if((a[0][0]=='o'&&a[0][1]=='o'&&a[0][2]=='o')||(a[1][0]=='o'&&a[1][1]=='o'&&a[1][2]=='o')||(a[2][0]=='o'&&a[2][1]=='o'&&a[2][2]=='o') || (a[0][0]=='o'&&a[1][1]=='o'&&a[2][2]=='o')||(a[2][0]=='o'&&a[1][1]=='o'&&a[0][2]=='o')||(a[0][0]=='o'&&a[1][0]=='o'&&a[2][0]=='o')||(a[0][1]=='o'&&a[1][1]=='o'&&a[2][1]=='o')||(a[0][2]=='o'&&a[1][2]=='o'&&a[2][2]=='o'))
	{
		cout<<"p1 wins";
		break;
	}
}
if(m==9)
cout<<"match draw";
	}
