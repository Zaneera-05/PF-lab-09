#include<iostream>
using namespace std;
int main()
{
int arr[5]={2,3,5,6,7};
int sum=0;
cout<<"Elements of the array are:";
for(int i=0;i<5;i++)
{
cout<<arr[i]<<" ";
sum=sum+arr[i];
	}	
cout<<endl;
{
cout<<"The sum is:"<<sum;
}
return 0;
}
