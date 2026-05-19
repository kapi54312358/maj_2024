#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int const n=3000;

bool dziel(int *a, int b){
	for(int i=0; i<20; i++)
		if(a[i]%b==0) return true;
	return false;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int liczby[20];
	int i=0, j=0, pom=0;
	vector <int> dzielniki;
	
	for(i=0; i<n; i++){
		we>>pom;
		dzielniki.push_back(pom);
	}
	
	for(i=0; i<20; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		if(dziel(liczby, dzielniki[i])) j++;
	}
	
	cout<<j;
	
	return 0;
}
