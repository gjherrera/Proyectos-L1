#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	int balsenQuant=0;
	int balconQuant=0;
	int balhueQuant=0;
	int tacoflauQuant=0;
	int quesaQuant=0;
	int cafeneQuant=0;
	int cafeleQuant=0;
	int desayuQuant=0;
	double subTotal;
	double impuesto;
	double total_a_pagar;
	double balsenTotal=0;
	double balconTotal=0;
	double balhueTotal=0;
	double tacoflauTotal=0;
	double quesaTotal=0;
	double cafeneTotal=0;
	double cafeleTotal=0;
	double desayuTotal=0;
	
	system("color B");
	cout<<"           !!RESTAURANTE LAS DELICIAS!!"<<endl;
	cout<<"\nNOTA: Despues de seleccionar su pedido presione la letra 'q' y de enter"<<endl;
	cout<<endl;
	cout<<"                           MENU DEL DIA"       <<endl;
	cout<<"\nSeleccione su Platillo!!                       Precio"<<endl;
	cout<<"______________________________________________________"<<endl;
	cout<<"1.- Baleadas sencillas........................L.15.00"<<endl;
	cout<<endl;
	cout<<"2.- Baleadas con huevo........................L20.00"<<endl;
	cout<<endl;
	cout<<"3.- Baleada con huevo y aguacate..............L25.00"<<endl;
	cout<<endl;
	cout<<"4.- Tacos Flauta(2 tacos).....................L50.00"<<endl;
	cout<<endl;
	cout<<"5.- Quesadilla (2unds)........................L50.00"<<endl;
	cout<<endl;
	cout<<"6.- Cafe negro................................L10.00"<<endl;
	cout<<endl;
	cout<<"7.- Cafe con leche............................L15.00"<<endl;
	cout<<endl;
	cout<<"8.- Desayuno Catracho.........................L70.00"<<endl;
	cout<<"\nIngrese su Opcion : ";
			
	bool done = false;
	while(!done)
	{
		char choice;
		string subChoice ="";
		getline(cin,subChoice);
		if(subChoice=="1"){
			choice='1';}
		if(subChoice=="2"){
			choice='2';}
		if(subChoice=="3"){
			choice='3';}
		if(subChoice=="4"){
			choice='4';}
		if(subChoice=="5"){
			choice='5';}
	    if(subChoice=="6"){
		    choice='6';}
		if(subChoice=="7"){
		    choice='7';}
		if(subChoice=="8"){
		    choice='8';}
		if(subChoice=="q"){
			choice='q';}
	   switch(choice)
	   
    {
	case '1':
		balsenQuant=balsenQuant+1;
		balsenTotal=balsenQuant*15.00;
		break;
	case '2':
		balconQuant=balconQuant+1;
		balconTotal=balconQuant*20.00;
		break;
	case '3':
		balhueQuant=balhueQuant+1;
		balhueTotal=balhueQuant*25.00;
		break;
	case '4':
		tacoflauQuant=tacoflauQuant+1;
		tacoflauTotal=tacoflauQuant*50.00;
		break;
	case '5':
		quesaQuant=quesaQuant+1;
		quesaTotal=quesaQuant*50.00;
		break;
	case '6':
		cafeneQuant=cafeneQuant+1;
		cafeneTotal=cafeneQuant*10.00;
		break;
	case '7':
		cafeleQuant=cafeleQuant+1;
		cafeleTotal=cafeleQuant*15.00;
		break;
	case '8':
		desayuQuant=desayuQuant+1;
		desayuTotal=desayuQuant*70.00;
		break;
	case 'q':
		done = true;
		break;  
	default:
		cout << "invalid choice\n";
		break;
		system("cls");
    }
} 
		
		system("color A");
		cout<<endl;
		cout<<endl;
		cout<<"...Su orden es...:"<<endl;
		cout<<"___________________"<<endl;
		if(balsenQuant!=0){
			cout<<balsenQuant<<"  Baleada Sencilla             L"<<balsenTotal<<endl;
		}
		if(balconQuant!=0){
			cout<<balconQuant<<"  Baleada con Huevo            L"<<balconTotal<<endl;
		}
		if(balhueQuant!=0){
			cout<<balhueQuant<<"  Baleada con Huevo y Aguacate L"<<balhueTotal<<endl;
		}
		if(tacoflauQuant!=0){
			cout<<tacoflauQuant<<" Taco Flauta                 L"<<tacoflauTotal<<endl;
		}
		if(quesaQuant!=0){
			cout<<quesaQuant<<"    Quesadilla                  L"<<quesaTotal<<endl;
		}
		if(cafeneQuant!=0){
		    cout<<cafeneQuant<<"   Cafe Negro                  L"<<cafeneTotal<<endl;
		}
		if(cafeleQuant!=0){
		    cout<<cafeleQuant<<"   Cafe con Leche              L"<<cafeleTotal<<endl;
		}
		if(desayuQuant!=0){
			cout<<desayuQuant<<"   Desayuno Catracho           L"<<desayuTotal<<endl;
		}
		
		cout<<fixed<<setprecision(2)<<endl;
		cout<<"___________________"<<endl;
		subTotal=(balsenTotal+balconTotal+balhueTotal+tacoflauTotal+quesaTotal+cafeneTotal+cafeleTotal+desayuTotal);
		impuesto=(subTotal*.15);
		total_a_pagar=(subTotal+impuesto);
		cout<<"Subtotal       L"<<subTotal<<endl;
		cout<<"impuesto       L"<<impuesto<<endl;
		cout<<"___________________"<<endl;
		cout<<"Total a pagar  L"<<total_a_pagar<<endl;
				
return 0;
}
