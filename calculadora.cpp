#include <iostream>


int main()
{

	int a=0;
	int b=0;
	int sum;
	int rest;
	int mult;
	int div;
	
	std::cout<<"Ingrese el primer numero: "; std::cin>>a;
	std::cout<<"Ingrese el segundo numero: "; std::cin>>b;

	sum= a+b;
	rest= a-b;
	mult= a*b;
	div= a/b;
	std::cout<<"El resultado de es: "<<sum<<::std::endl;
	std::cout<<"El resultado de es: "<<rest<<::std::endl;
	std::cout<<"El resultado de es: "<<mult<<::std::endl;
	std::cout<<"El resultado de es: "<<div<<::std::endl;
	

}
