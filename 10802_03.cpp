#include <iostream>
#include <string>

using namespace std;

int f(int x){
	return x*2 - 3;
}

int g(int x, int y){
	return x*2 + y - 7;
}

int h(int x, int y, int z){
	return x*3 - y*2 + z;
}

int cnt(string s[], int i, int &end){
	if(s[i] == "h"){
		int m1 = end, m2 = end;
		int a = cnt(s, ++i, m1);
		int b = cnt(s, m1, m2);
		int c = cnt(s, m2, end);
		return h(a, b, c);
	}
	else if(s[i] == "g"){
		int m = end;
		int a = cnt(s, ++i, m);
		int b = cnt(s, m, end);
		return g(a, b);
	}
	else if(s[i] == "f"){
		return f(cnt(s, i+1, end));
	}
	else
		end = i+1;
		return stoi(s[i]);
}

int main(){
	string s[512];
	int l = 0;
	while(cin >> s[l++]);
	for(int i = 0; i < l; i++)
		cout << s[i] << endl;
	cout << cnt(s, 0, l) << endl;
}
