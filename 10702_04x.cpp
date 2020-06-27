#include <iostream>

using namespace std;

int cnt(int l, int n){
	if(l == 0)
		return 1;
	int sum = 0;
	for(int i = n; i <= 9; i++){
		sum += cnt(l-1, i);
	}
	return sum;
}

main(){
	int n;
	while(cin >> n){
	unsigned long long int l = 0, N[10000] = {0};
	while(n > 0){
		N[l++] = n%10;
		n /= 10;
	}
	int ans = 0;
	for(int i = l; i >= 0; i--){
		if(i != l&&N[i-1] < N[i]){
			ans--;
			break;
		}
		ans += cnt(i, N[i]) - cnt(i, N[i-1]);
	}
	cout << ans;
	}
}
