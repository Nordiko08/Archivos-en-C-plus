#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int NIE, NFE, NIC, NFC, NIT, NFT;
	float PES;
	float PCOM, PTR;
	float CBE, CBT, CBC;
	float REC;
	cout<<"Ingrese el precio del pasaje de estudiante"<<endl;
	cin>>PES;
	cout<<"Ingrese la numeracion inicial y final del boleto de estudiante"<<endl;
	cin>>NIE;
	cin>>NFE;
	cout<<"Ingrese la numeracion inicial y final del boleto comun"<<endl;
	cin>>NIC;
	cin>>NFC;
	cout<<"Ingrese la numeracion inicial y final del boleto de trabajador"<<endl;
	cin>>NIT;
	cin>>NFT;
	
	CBE = NFE - NIE;
	CBT = NFT - NIT;
	CBC = NFC - NIC;
	PCOM = PES * 2;
	PTR = PCOM * 0.4;
	
	REC = (CBE*PES)+(CBT*PTR)+(CBC*PCOM);
	
	cout<<"Se vendieron: "<<CBE<<" boletos de estudiantes"<<endl;
	cout<<"Se vendieron: "<<CBT<<" boletos de trabajador"<<endl;
	cout<<"Se vendieron: "<<CBC<<" boletos comunes"<<endl;
	cout<<"Se recaudo: "<<REC<<"$";
	return 0;
}

