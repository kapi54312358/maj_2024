#include <iostream>
#include <fstream>
using namespace std;

int const n=3000;

bool rozklad (int a, int *b){
	for(int i=0; i<n; i++){
		if(a==1) return true;
		if(a%b[i]==0) a=a/b[i];		
	}
	return false;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0;
	int liczby[20], dzielniki[n];
	
	for(i=0; i<n; i++){
		we>>dzielniki[i];
		//cout<<i<<" "<<dzielniki[i]<<endl;
	}
	
	for(i=0; i<20; i++){
		we>>liczby[i];
		//cout<<i<<" "<<liczby[i]<<endl;
	}
	
	for(i=0; i<20; i++){
		if(rozklad(liczby[i], dzielniki)) cout<<liczby[i]<<endl;
	}
	
	return 0;
}
