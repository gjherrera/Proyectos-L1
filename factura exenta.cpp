#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double tot = 0;
	double impto = 0.15;
	int desc = 0;
	char exent = 0;
	cout << "Ingrese el subtotal de la Factura: ";
	cin>> subtotal;	
	
	cout << "Ingrese el descuento(0, 10, 15, 20): ";
	cin>>desc;
	
	cout << "La factura esta exenta? S/N: ";
	cin>>exent;
	
		
	tot=subtotal+(subtotal* 0.15);
	 
	cout<<"El Total a Pagar es: "<<tot<<::endl;
	
	
    return 0;
}
