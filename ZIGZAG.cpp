#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using std::cout;
using std::cin;
class ZigZag
{
		int n;
		char* str;
	public:
		ZigZag(int n)
		{
			this->n=n;
			str=new char[4*n-3];
		}
		void getData()
		{
			if(n<2)
			{
				cout<<"\nInvalid Input...\nDepth should be minimum \"2\"";
				exit(1);
			}
			cin.ignore();
			printf("\nEnter a String (having size %d) --> ",4*n-3);
			cin>>str;
		}
		void zigzag(char* msg)
		{
			cout<<msg;
			for(int i=0;i<n;i++)
			{
				printf("\n%*s",i,"");
				cout<<str[i];
				for(int j=i;j<=i;)
				{
					if(i!=n-1)
					{
						printf("%*s",n*2-3-2*i,"");
						j+=n*2-2-2*i;
						cout<<str[j];
					}
					if(i)
					{
						printf("%*s",2*i-1,"");
						j+=2*i;
						cout<<str[j];
					}
					if(i!=n-1)
					{
						printf("%*s",n*2-3-2*i,"");
						j+=n*2-2-2*i;
						cout<<str[j];
					}
				}
			}
		}
};
main()
{
	cout<<"\nHow Much Depth? --> ";
	int n;
	cin>>n;
	ZigZag zz(n);
	zz.getData();
	zz.zigzag("\nZig-Zag Representation ::\n");
	cout<<"\n\n";
}



