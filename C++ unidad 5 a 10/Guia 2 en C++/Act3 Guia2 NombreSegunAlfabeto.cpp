#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string P1, P2, P3;
	cout<<"Ingrese 3 nombres"<<endl;
	getline(cin,P1);getline(cin,P2);getline(cin,P3);
	
	if (P1 < P2 && P1 <P3){
		cout<<"\n"<<P1;
	    if (P2 < P3){
		 cout<<"\n"<<P2;
		 cout<<"\n"<<P3;
	    } else {
		cout<<"\n"<<P3;
		cout<<"\n"<<P2;
		}
	} else if (P2 < P1 && P2 < P3) {
		cout<<"\n"<<P2;
	  if (P1 < P3) {
		cout<<"\n"<<P1;
		cout<<"\n"<<P3;
	} else {
		cout<<"\n"<<P3;
		cout<<"\n"<<P1;
	  }
	} else if (P3 < P1 && P3 < P2) {
		cout<<"\n"<<P3;
	  if (P1 < P2) {
		cout<<"\n"<<P1;
		cout<<"\n"<<P2;
	} else {
		cout<<"\n"<<P2;
		cout<<"\n"<<P1;
	}
}
	return 0;
}

