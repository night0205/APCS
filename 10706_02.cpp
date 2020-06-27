#include <iostream>
#include <string>

using namespace std;

long long int findmax(int l, string s){
	int t = 0, ans = 0;
	for(int i = 0; i < l; i++){
		ans *= 10;
		if(t == 0 && s[i]%2 != 0)
			ans += s[i]-'0';
		else if(t == 0){
			ans += s[i] - '0' + 1;
			t++;
		}
		else
			ans += 1;
		}
	return ans;
}

string check(int i, int l, string s){
	if(i == 0||(s[i-1]-'0')%2 != 0)
		return s;
	s[i-1] = s[i-1]-1;
	return check(i-1, l, s);
}

long long int findmin(int l, string s){
	int t = 0, ans = 0;
	for(int i = 0; i < l; i++){
		if((s[i]-'0')%2 == 0){
			if(t == 0){
				if(s[i] == '0'){
					s[i-1] = s[i-1] - 1;
					s = check(i, l, s);
					s[i] = '9';
				}
				else
					s[i] = s[i] - 1;
			}
			else
				s[i] = '9';
			t++;
		}
		else{
			if(t != 0)
				s[i] = '9';
		}
	}
	int i = 0;
	if(s[i] < '0')
		 i++;
	for(i; i < l; i++)
		ans = ans*10+s[i]-'0';
	return ans;
}

main(){
	string s;
	cin >> s;
	int l = s.length();
	long long int n = 0;
	//n = stoll(s); str->int stoi() 
	for(int i = 0; i < l; i++)
		n = n*10 + s[i] - '0';
	findmin(l, s);
	//cout << findmax(l, s) << '\n' << findmin(l, s) << '\n';
	long long int a = findmax(l, s) - n;
	long long int b = n - findmin(l, s);
	if(a < b)
		cout << a;
	else
		cout << b;
}
