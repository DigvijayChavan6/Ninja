#include <bits/stdc++.h>
void makeIt(vector<vector<int>> &mat,int i, int j,int n,int m){
	for(int l=0;l<n;l++)if(mat[l][j]!=0)mat[l][j]=-1;
	for(int l=0;l<m;l++)if(mat[i][l]!=0)mat[i][l]=-1;
}
void setZeros(vector<vector<int>> &matrix){
	int n=matrix.size(),m=matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)if(matrix[i][j]==0)makeIt(matrix,i,j,n,m);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)if(matrix[i][j]==-1)matrix[i][j]=0;
	}
}