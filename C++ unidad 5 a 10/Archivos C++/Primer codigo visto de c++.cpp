#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Lenguajes de programacion";
	cout << endl<<endl;
	cout << setfill('.');
	cout << "1. Cobol" << setw(22)<< "pag. 1"<<endl;
	cout << "2. Fortran" << setw(20)<< "pag. 2"<<endl;
	cout << "3. Basic" << setw(22)<< "pag. 3"<<endl;
	cout << "4. Pascal" << setw(21)<< "pag. 4"<<endl;
	cout << "5. ANSI/ISO C++" << setw(15)<< "pag. 5"<<endl;
	return 0;
}

