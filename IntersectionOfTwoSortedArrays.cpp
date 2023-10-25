#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	// Write your code here.
    vector<int> vec;
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]<b[j])i++;
        else if(b[j]<a[i])j++;
        else{
            vec.push_back(a[i]);
            i++;
            j++;
        }
    }
	return vec;
}