#include<iostream>
using namespace std;
int main()

{
	int i,n;
	int sum=0;
	cout<<"Enter number :";
	cin>>n;
	//for(i=1;i<=n;i++)
   //while(i<=n)
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);{
		cout<<" \n sum of n natural num is : "<<sum;
	}
}
