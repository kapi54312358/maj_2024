#include <iostream>

using namespace std;

int skrot(int n){
	int a=0, m=0, pot=1;
	
	while(n>0){
		a=n%10;
		n/=10;
		if(a%2==1){
			m+=a*pot;
			pot*=10;
		}
	}
	
	return m;
}

int main(int argc, char** argv) {
	int n=0, m=0;
	cin>>n;
	m=skrot(n);
	cout<<m;
	
	return 0;
}
