#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	if(n>0){
		int x = sqrt(n);
		return x*x == n;
	}
}
