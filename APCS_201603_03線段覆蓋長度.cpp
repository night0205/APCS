//b966: �� 3 �D �u�q�л\����
#include<iostream>
using namespace std;
main(){
	int n;
	cin >> n;
	int* ans = new int[10000001];
	int s[2];
	for(int i=0;i<n;i++){
		cin >> s[0] >> s[1];
		for(int i=s[0];i<s[1];i++){
			ans[i] = 1;
		}
	}
	int cnt=0;
	for(int i=0;i<10000001;i++){
		if(ans[i]==1)cnt+=1;
	}
	cout << cnt;
}
