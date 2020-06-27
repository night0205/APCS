#include <iostream>

using namespace std;

bool check(int n){
	if((n - '0' <= 9)&&(n - '0' > 0))
		return 1;
	return 0;
}

main(){
	string s;
	cin >> s;
	int l = s.length();
	for(int i = 0; i < l; i++){
		string so[100];
		int num = 0;
		for(int x = i; x < l; x++){
			if(check(s[x])){
				num *= 10;
				num += s[x] - '0';
				i = x;
			}
			else
				break;
		}
		int t = 0;
		for(int x = i+1; x < l; x++){
			if(!check(s[x])){
				so[t++] = s[x];
			}
			else{
				i = x-1;
				break;
			}
		}
		for(int x = 0; x < num && t != 0; x++){
			for(int y = 0; y < t; y++)
				cout << so[y];
		}
	}
}

