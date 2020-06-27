#include <iostream>

using namespace std;

int KL(int d, int k){
	int cnt = 0;
	int D = d;
	while(D > 0){
		D /= 10;
		cnt++;
	}
	int num = 0, t = 1;
	for(int i = 0; i < cnt; i++)
		t *= 10;
	for(int i = k; i > 0; i--){
		t /= 10;
		num = num*10 + (d/t % 10);
	}
	return num;
}

int KR(int d, int k){
	int num = 0;
	int cnt = 1;
	for(int i = 0; i < k; i++){
		num += d/cnt % 10 * cnt;
		cnt *= 10;
	}
	return num;
}

int k_max(int d[],int k,int n){
	int max = 0;
	for(int i = 0; i < n; i++){
		int t = KL(d[i], k);
		if(t > max)
			max = t;
	}
	return max;
}

int k_min(int d[],int k,int n){
	int min = 100000000;
	for(int i = 0; i < n; i++){
		int t = KR(d[i], k);
		if(t < min)
			min = t;
	}
	return min;
}

main(){
	int k, d[10], n;
	cin >> k;
	for(int i = 0; i < 10; i++){
		cin >> d[i];
		if(d[i] == 0)
			break;
		n = i+1;
	}
	int x = k_max(d, k, n);
	int y = k_min(d, k, n);
	cout << x << ' ' << y;
}
