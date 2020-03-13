#include <iostream>

using namespace std;

int t[521];

int main() {
	for (int i=1040; i>-1; i-=2){
		t[i]=i;
		t[0]=0;
	
	}
	for (int i=1040;i>-1;i-=2){
	cout<<i;
		if(i!=0)cout<<",";
	}
		return 0;
	}
