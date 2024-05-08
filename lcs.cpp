#include<iostream>
using namespace std;

int lcs(string x, string y, int m , int n){
	if(m==0 || n==0){
		return 0;
	}
	if(x[m-1]==y[n-1]){
		return 1+(lcs(x,y,m-1,n-1));
	}
	else {
	return	max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
	}
}

int main(){
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
	int m=s1.size();
	int n=s2.size();
	
	cout<<"Output"<<lcs(s1,s2,m,n);
}


//#include<iostream>
//using namespace std;
//int lcs(string x, string y, int m, int n){
//	if(m==0 || n==0){
//		return 0;
//	}
//	if(x[m-1]==y[n-1]){
//		return 1+lcs(x,y,m-1,n-1);
//	}
//	else{
//		return 
//	}
//}



