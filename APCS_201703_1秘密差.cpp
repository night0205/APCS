//APCS2017_03_01���K�t 
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string x;
    cin>>x;
    int sum=0;
    for(int i=0; i<x.length(); i++)
    {
        if (i%2)
            sum+=int(x[i]-'0');//ASCII '0'�s��48�Ax���r���A��'0'�s������X�Ʀr��X 
        else
            sum-=int(x[i]-'0');

	}
    if (sum<0) cout<<-1*sum<<endl;
    else cout<<sum<<endl;
}
