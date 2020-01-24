#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(long long int a[2], long long int b[2]){
	return(a[0]*b[1] < a[1]*b[0]);
}

main(){
	long long int n;
	cin >> n;
	long long int* s[n+1];
	for(int i=0;i<n;i++){
		s[i] = new long long int[2];
		cin >> s[i][0];
	}
	for(int i=0;i<n;i++){
		cin >> s[i][1];
	}

	sort(s, s+n, cmp);
	long long int ans=0,te[2];/*
	for(int i = 0; i < n; i++)
		cout << s[i][0] << ' ' << s[i][1] << '\n';
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(i==j)continue;
			if(s[i][0]*s[i+1][1]>s[i+1][0]*s[i][1]){
				te[0] = s[i][0];
				te[1] = s[i][1];
				s[i][0] = s[i+1][0];
				s[i][1] = s[i+1][1];
				s[i+1][0] = te[0];
				s[i+1][1] = te[1];
			}
		}
	}*/
	
	long long int t=0;
	for(int i=0;i<n-1;i++){
		t += s[i][0]; 
		ans += s[i+1][1]*t;
	}
	cout << ans;
	
} 
