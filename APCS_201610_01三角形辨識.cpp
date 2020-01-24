//APCS_2016_10_01¤T¨¤§Î¿ëÃÑ 
#include <iostream>
#include <algorithm>
using namespace std;
main(){
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	sort(n,n+3);
	cout << n[0] << " "<< n[1] << " " << n[2] << endl;
	int a = n[0],b = n[1] ,c = n[2]; 
	if (a + b <= c){
		cout << "No" << endl;
	}
	else{
	if (a*a + b*b < c*c)cout << "Obtuse" << endl;
	if (a*a + b*b == c*c)cout << "Right" << endl;
	if (a*a + b*b > c*c)cout << "Acute" << endl;
	}
	return 0;
} 

