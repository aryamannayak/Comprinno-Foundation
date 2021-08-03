#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	int t,i,l,x,j,flag;
	char s[100000];
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>s;
		l=strlen(s);
		int a[l];
		for(i=0;i<l;i++)
		{
			if(s[i]!='M')
			 x=1;
			else if(s[i]=='M')
			{
			 a[i]=0;	
			 continue;
		    }
			for(j=i+1;j<l;j++)
			{
				if((s[j]==s[i]) && (s[j]!='M'))
				{
					s[j]='M';
					++x;
				}
			}
			a[i]=x;
		}
		sort(a,a+l,greater<int>());
//		for(i=0;i<l;i++)
//		  cout<<a[i]<<" ";
//		cout<<endl;  
		for(i=0;a[i+2]!=0;i++)
		{
			if(a[i]==a[i+1]+a[i+2])
			{
				 flag=1;
//                 cout<<a[i+1]<<"+"<<a[i+2]<<"="<<a[i]<<endl;
                 break;
			}
		}
		if(flag==1)
		 cout<<"Dynamic"<<endl;
		else
		 cout<<"Not"<<endl; 
	}
}
