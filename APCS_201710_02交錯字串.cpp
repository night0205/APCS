//c462_Apcs_2017_10_18_02¥æ¿ù¦r¦ê (Alternating Strings)
#include<iostream>
#include<string>
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n;
	cin >> s;
	int temp,a=97,z=123;
	for(int i=0;i<s.length();i++){
		temp = s[i];
		if((temp>=a)&&(temp<=z))s[i]=0;
		else s[i]=1;
	}
	int te[s.length()]={0},x=0; 
	te[0]++;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1])te[x]++;
		else{
			x++;
			te[x]++;
		}
	}

	int ans=0,t;
	for(int i=0;i<=x;i++){
		t = 0;
		if(te[i]>=n){
			t = 1;
			temp = n;
			for(int j=i+1;j<x;j++){
				if(te[j] == n){
					temp += n;
				}
				else if(te[j]>n){
					temp += n;
					break;
				}
				else break;
			}
			if(t==1&&temp>ans)ans = temp;
		}
	}
	cout << ans;
}
