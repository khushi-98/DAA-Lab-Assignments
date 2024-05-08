//fractional knapsack
#include<iostream>
using namespace std;
int main(){
	int p[]={60,100,120};
	int w[]={10,20,30};
	int pw[3];
	int n=sizeof(p)/sizeof(p[0]);
//	cout<<"numbers of items ";
//	cin>>n;
//	int p[n],w[n],pw[n];
//	for(int i=0;i<n;i++)
//	{
//		cout<<"profit for process "<<i+1<<endl;
//		cin>>p[i];
//		cout<<"weight of process "<<i+1<<endl;
//		cin>>w[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		pw[i]=p[i]/w[i];
//		//cout<<pw[i];
//		//6,5,4
//	}
	for(int k=0;k<n-1;k++)
{
	for(int l=0;l<n-1-k;l++)
	{
		if(pw[l+1]>pw[l])
		{
			swap(pw[l],pw[l+1]);
			swap(p[l],p[l+1]);
			swap(w[l],w[l+1]);
		}
	}
}
	float weight;
	cout<<"enter weight of bag "<<endl;
	cin>>weight;
	float profit=0;
	for(int i=0;i<n;i++)
	{
		
		if(weight>w[i])
		{
			weight-=w[i];
			profit+=p[i];
		}
		else{
			profit+=(p[i]*(weight/w[i]));
			break;
		}
	}
	cout<<"total profit is "<<profit<<endl;
}
