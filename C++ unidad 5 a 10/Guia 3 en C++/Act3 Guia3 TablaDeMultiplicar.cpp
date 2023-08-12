#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int nNum, nResul;
	int cont=1;

	
	cout<<"\tTABLA DE MULTIPLICAR"<<endl;
	cin>>nNum;
	
	do
	{
		
		nResul = cont*nNum;
		cout<<cont<<" x "<<nNum<<" = "<<nResul<<"\n" ;
		cont++;
	} while ( cont<=10 );
	
	return 0;
}

