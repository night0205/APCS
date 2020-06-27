#include <iostream>

using namespace std;

unsigned long long city_sum(int p[], int s, int t, int k, int h){
	if((h >= k) or (t-s < 2))
		return 0;
	int tmp = 0;
	long long int cnt = 0, ans = -1, sum = 0;
	for(int i = s; i <= t; i++)
		sum += p[i];
	for(int i = 0; i <= s-t; i++)
		cnt += p[s+i] * i;
	for(tmp = s-1; tmp < t && sum > 0; tmp++)
		cnt -= sum;
	tmp--;
	ans = cnt + sum;
	cnt *= -1;
	if(ans <= cnt)
		tmp--;
/*
	for(int i = s; i <= t; i++){
		cnt = 0;
		for(int j = s; j < i; j++)
			cnt += p[j]*(j - i);
		for(int j = i+1; j <= t; j++)
			cnt -= p[j]*(i - j);
		if(cnt < 0)
			cnt *= -1;
		if(cnt < ans || ans == -1){
			tmp = i;
			ans = cnt;
		}
	}
	*/
	return p[tmp] + city_sum(p, s, tmp-1, k, h+1) + city_sum(p, tmp+1, t, k, h+1);
}

main(){
	int n, k;
	cin >> n >> k;
	int p[n+5];
	for(int i = 1; i <= n; i++)
		cin >> p[i];
	//h = 分劃次數, h < k < 30 && t-s >= 2
	cout << city_sum(p, 1, n, k, 0) << '\n';
}

