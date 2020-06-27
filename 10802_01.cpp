#include <iostream>

using namespace std;

main(){
	int n, s;
	cin >> n >> s;
	int run[n+2];
	int ans = 0, l;
	for(int i = 0; i < n; i++){
		cin >> l;
		if(s == 1){
			ans += l;
			if(l%2 == 0)
				s++;
		}
		else if(s == 2){
			ans += 2*l;
			if(l%3 == 0)
				s++;
			else
				s--;
		}
		else{
			ans += l/10;
			if(l%5 != 0)
				s = 1;
		}
	}
	cout << ans << '\n';
}
