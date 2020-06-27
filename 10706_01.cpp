#include <iostream>
#include <string>
using namespace std;

main(){
	string s, d[6] = {"0 1 0 1", "0 1 1 1", "0 0 1 0", "1 1 0 1", "1 0 0 0", "1 1 0 0"};
	int n;
	cin >> n;
	while(n--){
		getline(cin, s);
		for(int i = 0; i < 6; i++){
			if(s == d[i]){
				char t = 'A' + i;
				cout << t;
				break;
			}
		}
	}
}
