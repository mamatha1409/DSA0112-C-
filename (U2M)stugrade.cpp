#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"Enter marks : ";
	cin>>a>>b>>c>>d;
	
	if(a < 0 || b < 0 || c < 0 || d < 0)
	{
	cout<<"enter postive num"<<a<<b<<c<<d;
	 return 1;
	}
		
	
	
	int t=a+b+c+d;
	cout<<"Total marks = "<<t;
	
	float avg;
	avg=t/4;
	cout<<"\nAverage marks = "<<avg;
	
	 if (avg >= 75) {
        cout << "\nGrade: Distinction" ;
    } else if (avg >= 60 && avg < 75) {
        cout << "\nGrade: First Division" ;
    } else if (avg >= 50 && avg < 60) {
        cout << "\nGrade: Second Division";
    } else if (avg >= 40 && avg< 50) {
        cout << "\nGrade: Third Division";
    } else {
        cout << "\nGrade: Fail" ;
    }
}

