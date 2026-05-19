#include <iostream>
#include <fstream>

using namespace std;

int const n=200;

int skrot(int l){
    int w=0, p=1, c=0;
    while(l>0){
        c=l%10;
        if(c%2==1){
            w=w+c*p;
            p=p*10;
        }
        l=l/10;
    }
    return w;
}

int nwd(int a, int b){
	int pom;
	while(b!=0){
		pom=b;
		b=a%b;
		a=pom;	
	}
    return a;
}

int main(int argc, char** argv) {
	int liczby[n];
	int i=0;
	ifstream we("E:/skrot2.txt");
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		if(nwd( liczby[i], skrot(liczby[i]) )==7)
			cout<<liczby[i]<<endl;
	}
	
	return 0;
}
