#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N, resp;
string str;

int main() {
	fastio;
	
	cin>>N;
	
	while(N--) {
		cin>>str;
		
		if(str.size() == 5) resp = 3;
		else if(
		
		(str.at(0) == 't' && str.at(0) == 'w')
		|| (str.at(0) == 't' && str.at(2) == 'o')
		|| (str.at(1) == 'w' && str.at(2) == 'o')
		) resp = 2;
		else resp = 1;
		
		cout<<resp<<"\n";
	}

	return 0;
}

