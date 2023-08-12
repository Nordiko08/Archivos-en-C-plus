#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int A, B;
	cout<<"Ingrese 2 numeros"<<endl;
	cin>>A;cin>>B;
	cout<<"\n\n";
	if (A < B) {
		cout<<A<<" / "<<B;
	}
	else {
		cout<<B<<" / "<<A;
	}
	return 0;
}

