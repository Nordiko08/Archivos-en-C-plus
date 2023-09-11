#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int A[]={7, 8, 14, 10, 24, 40,4, 6};
	int pos;
	int aux;
	
	for(int i=0; i<8; i++){
		pos = i;
		aux = A[i];
		while((pos>0)&&(A[pos-1]>aux)){
			A[pos] = A[pos-1];
			pos--;
		}
		A[pos]=aux;
	}
	
	cout<<"El vector ordenado es: "<<endl<<endl;
	for(int i=0; i<8; i++){
		cout<<A[i]<<" ";
	}
	
	
	
	return 0;
}

