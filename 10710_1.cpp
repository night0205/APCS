#include <iostream>
#include <algorithm>

using namespace std;

main(){
	int t;
	cin >> t;
	int d[t+2][12] = {0};
	for(int i = 0; i < t; i++){
		for(int j = 0; j < 11; j++)
			cin >> d[i][j];
	}
	int sum = 0, cnt = 0;	
	for(int i = 0; i < t; i++){
		int tmp =  d[i][d[i][0]];
		sum += tmp;
		sort(d[i]+1, d[i]+11);
		if(tmp == d[i][10])
			cnt++;
	}
	cout << sum << '\n' << cnt;
}
