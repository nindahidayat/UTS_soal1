#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a,b,x,y;
	cout<< "masukan nilai a :" ;
	cin>>a;
	cout<< "masukan nilai b :" ;
	cin>>b;
	x=a;
	y=b;

	while(x!=y) {
		if(x<y) {x=x+a;}
		else (y=y+b);

	}

	cout << "maka hasilnya adalah="<<x;

	return 0;
}