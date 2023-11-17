#include <bits/stdc++.h> 
int findKthFromRight(int n, int m, int k) 
{
	long long int p=pow(n,m);
	int r=0;
	while(k>0){
		r=p%10;
		p/=10;
		k--;
	}
	return r;
}