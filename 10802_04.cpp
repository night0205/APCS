#include <iostream>

using namespace std;

main(){
	int n;
	cin >> n;
	int b[n+2], p[n+2];
	for(int i = 1; i <= n; i++)
		cin >> b[i];
	for(int i = 1; i <= n; i++)
		cin >> p[i];
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		for(int j = i-1; j >= 1 && b[j] <= b[i]+p[i]; j--)
			cnt++;
	}
	cout << cnt << '\n';
}
