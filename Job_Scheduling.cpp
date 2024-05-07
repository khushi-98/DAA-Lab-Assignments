//job scheduling
#include<iostream>

using namespace std;
int main()
{
	int job[]={1,2,3,4,5};
	int dead[]={2,2,1,1,3};
	int profit[]={100,27,25,19,15};
	int n=sizeof(job)/sizeof(job[0]);

for(int k=0;k<n-1;k++)
{
	for(int l=0;l<n-1-k;l++)
	{
		if(profit[l+1]>profit[l])
		{
			swap(profit[l],profit[l+1]);
			swap(dead[l],dead[l+1]);
			swap(job[l],job[l+1]);
		}
	}
}
//JOB SEQUENCING
	int max=dead[0];
	for(int i=0;i<n;i++)
	{
		if(max<dead[i])
		{
			max=dead[i];
		}
	}
	int result[max];
	for(int i=0;i<max;i++)
	{
		result[i]=0;
	}
	for(int j=0;j<n;j++)
	{
		int ans=dead[j];
		
	for(int i=ans;i>0;i--)
	{
		if(result[i-1]==0)
		{
			result[i-1]=job[j];
			break;
		}
		
	}
	}
      cout<<" processes are ";
	for(int i=0;i<max;i++)
	{
		cout<<result[i]<<" ";
	}
}
