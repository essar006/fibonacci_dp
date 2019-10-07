#include<bits/stdc++.h>
using namespace std;
//recurcive
int fib(int n)
{
	if(n<=1)
		return n;
	else
	{
	return fib(n-1)+fib(n-2);
	}
}

//DP
int fibdp(int n)
{
	int i, fib[n+2];
	fib[0]=0;
	fib[1]=1;
	
	for(i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	return fib[n];
}


int main()
{
int a,b,n;
cout<<"Enter n";
cin>>n;
cout<<"Required sequence";
a=fib(n);
cout<<a<<endl;
b=fibdp(n);
cout<<b;
return 0
}
