#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int const n=3000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, pom=0;
	vector <int> dzielniki;
	
	for(i=0; i<n; i++){
		we>>pom;
		dzielniki.push_back(pom);
	}
	
	sort(dzielniki.begin(), dzielniki.end());
	
	cout<<dzielniki[n-101];
	
	return 0;
}
