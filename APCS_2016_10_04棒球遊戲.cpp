//c297: APCS-2016-1029-4´Î²y¹CÀ¸
#include <iostream>
#include <string>
using namespace std;
int play(int t, int base[]){
	int cnt = 0;
	base[0] = 1;
	for(int i = 3; i >= 0; i--){
		base[i+t] = base[i];
	}
	for(int i = t-1; i >= 0; i--){
		base[i] = 0;
	}
	for(int i = 4; i < 8; i++){
		if(base[i] == 1){
			cnt++;
			base[i] = 0;
		}
	}
	return cnt;
}

main(){
	string s[9][5];
	int n[9];
	for(int i = 0; i < 9; i++){
		cin >> n[i];
		for(int j = 0; j < n[i]; j++){
			cin >> s[i][j];			
		}
	}
	int out=0,a;
	cin >> a;
	int base[8] = {0};
	int ans = 0;
	for(int i = 0; i < 5 && out != a; i++){
		for(int j = 0; j < 9 && out != a; j++){
			
			if(((out%3)==0)&&(out!=0)){
				for(int i=0;i<4;i++)base[i]=0;
				a -= out;
				out = 0;
			}
			
			char te = s[j][i][0];
			
			if(((te - '0') > 9)&&(s[j][i][0] != 'H'))out++;
			else if(te == 72){
				for(int i = 0; i < 4; i++){
					if(base[i] == 1)ans++;
					base[i] = 0;
				}
				ans++;
			}
			else ans += play(te - '0',base);
			/*
			cout << te << ' ';
			for(int x=1;x<4;x++) cout << base[x];
			cout << out << ' ' << ans << endl;
			*/
		}
	}
	
	cout << ans;
}
