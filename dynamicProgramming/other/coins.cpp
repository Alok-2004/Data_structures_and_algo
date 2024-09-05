//Coins
//Probability that more than half of the coins will show heads when tossed.

#include<bits/stdc++.h>
using namespace std;

double dp[3005][3005];

double f(vector<double> &p , int i , int x){
	if( x == 0 ) return 1;
	if( i == -1 ) return 0;
	
	if( dp[i][x] > -0.9) return dp[i][x];
	return dp[i][x] = f(p , i-1 , x-1) * p[i] + f(p , i-1 , x)*(1-p[i]);
}

int main(){
	int n ;
	cin>>n;
	vector<double>p(n);
	for(int i = 0; i < n; i++){
		cin>>p[i];
	}
	
	memset(dp , -1 , sizeof dp);
	cout<<f(p , n-1 , (n+1) / 2);
	return 0;
}
