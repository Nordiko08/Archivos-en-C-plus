#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int Ax,Ay,Bx,By,Cx,Cy;
	float DistAB, DistBC, DistCA;
	float Total;
	int AxmBx, AymBy, CxmBx, CymBy, AxmCx, AymCy;
	cout<<"Ingrese las coordenadas X Y del punto A"<<endl;
	cin>>Ax;cin>>Ay;
	cout<<"Ingrese las coordenadas X Y del punto B"<<endl;
	cin>>Bx;cin>>By;
	cout<<"Ingrese las coordenadas X Y del punto C"<<endl;
	cin>>Cx;cin>>Cy;
	
	AxmBx=Ax-Bx;
	AymBy=Ay-By;
	CxmBx=Cx-Bx;
	CymBy=Cy-By;
	AxmCx=Ax-Cx;
	AymCy=Ay-Cy;
	
	DistAB=sqrt(pow(AxmBx,2)+pow(AymBy,2));
	DistBC=sqrt(pow(CxmBx,2)+pow(CymBy,2));
	DistCA=sqrt(pow(AxmCx,2)+pow(AymCy,2));
	Total=round(DistAB+DistBC+DistCA);
	
	cout<<"Distancia total: "<<Total<<"KMS";
	return 0;
}

