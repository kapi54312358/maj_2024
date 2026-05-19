#include <iostream>
#include <fstream>
using namespace std;

int const n=3000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, j=0, k=0, zakres=0, poczatek=0;
	int dzielniki[n];
	float suma=0, najw_sr=0, sr=0;
	
	for(i=0; i<n; i++){
		we>>dzielniki[i];
	}
	
	for(i=0; i<n-50; i++){
		for(j=i+50; j<n; j++){
			suma=0;
			for(int k=i; k<j; k++) suma+=dzielniki[k];
			sr=suma/(j-i);
			if(sr>najw_sr){
				najw_sr=sr;	
				poczatek=dzielniki[i];
				zakres=j-i;
			}
		}	
	}
	
	cout<<najw_sr<<endl<<zakres<<endl<<poczatek;
	
	return 0;
}
