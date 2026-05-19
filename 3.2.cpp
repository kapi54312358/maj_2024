# include <iostream>
# include <fstream>
using namespace std;

int const n=200;

int skrot(int l) {
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

int main(){
	int liczby[n];
	int i=0, j=0, naj_skrot=0;
	ifstream we("E:/skrot.txt");
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		if(skrot(liczby[i])==0){
			if(liczby[i]>naj_skrot)
				naj_skrot=liczby[i];
			j++;
		}
	}
	
	cout<<j<<endl<<naj_skrot;
	
	we.close();
	return 0;
}
