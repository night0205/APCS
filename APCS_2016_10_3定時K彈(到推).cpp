//c296: APCS-2016-1029-3©w®ÉK¼u

#include<iostream>

using namespace std;

int k_bomb(int n, int m, int i, int k){
	if(i == k)
		return 0;
	return (k_bomb(n-1, m, i+1, k) + m) % n;
}

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	cout << k_bomb(n, m, 0, k) + 1 << '\n';
}
