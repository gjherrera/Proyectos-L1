#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int menu(void)
{
	
cout<<"\n***********TIENDA MISCELANEAS*****************";
cout<<"\n\n1. Crear Cliente Nuevo";
cout<<"\n2. Ver Clientes Ingresados";
cout<<"\n3. Crear Inventario";
cout<<"\n4. Ver Inventario";
cout<<"\n5. Vender un Producto";
cout<<"\n6. Salir";
cout<<"\nIngrese su Opcion: ";
system("color B");
}

int main()
{

int opcion, opc2, opc3, i = 0, a = 0, max=5, cantidad_producto_vender, pregunta_descuento, descuento;
string nombre_producto_vender;
float precio_producto_vender, total_final, total, descuento_final, sub_total;

string nombre_cliente[50], nombre_producto[50];
float id[50], tel[50], precio_producto[50], codigo[50];


do{
menu(); 
cin>>opcion;

switch(opcion) 
{
	case 1 :
	i++; 
	cout<<"\nIngrese el nombre del cliente nuevo: "; 
	cin>>nombre_cliente[i];
	cout<<"\nIngrese el numero de ID del cliente nuevo (Sin espacios ni guiones): "; 
	cin>>id[i];
	cout<<"\nIngrese el numero de telefono del cliente nuevo (Sin espacios ni guiones): "; 
	cin>>tel[i];
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;	
	break;
	
	case 2 :
		for (i=1; i<max; i++)
		{
			cout<<"\nNombre de cliente: "<<nombre_cliente[i]<<endl;
			cout<<setprecision(0)<<fixed<<"Numero de ID de cliente: "<<id[i]<<endl;
			cout<<setprecision(0)<<fixed<<"Numero de telefono de cliente: "<<tel[i]<<endl;
		}

	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;	
	break;
		
	case 3 :
	a++;	
	cout<<"\nIngrese el nombre del producto: "; 
	cin>>nombre_producto[a];	
	cout<<"Ingrese el codigo del producto: "; 
	cin>>codigo[a];	
	cout<<"Ingrese el precio del producto: "; 
	cin>>precio_producto[a];
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
	break;
	
	case 4 :
		for (a=1; a<max; a++)
		{
			cout<<"\nNombre del producto: "<<nombre_producto[a]<<endl;
			cout<<setprecision(0)<<fixed<<"Codigo del producto: "<<codigo[a]<<endl;	
			cout<<setprecision(2)<<fixed<<"Precio del producto: "<<precio_producto[a]<<endl;
		}
	
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;	
	break;

	case 5 :
	cout<<"\nIngrese el nombre del producto a vender: ";
	cin>>nombre_producto_vender;	
	cout<<"\nIngrese el precio del producto: ";
	cin>>precio_producto_vender;
	cout<<"\nIngrese la cantidad del producto a vender: ";
	cin>>cantidad_producto_vender;
	
	total = precio_producto_vender * cantidad_producto_vender;
	sub_total=total;
	
	cout<<"\nDesea aplicar descuento(Ingrese 1 para si y 0 para no.)"<<endl;
	cin>>pregunta_descuento;
		if (pregunta_descuento == 1) 
		{ cout<<"\nDe cuanto es el descuento(Ingrese el numero del % de descuento que desea dar,"<<endl; 
		  cout<<"ej. ingrese 50 para aplicar un cincuenta por ciento de descuento.)"<<endl;
		  cin>>descuento;
		  descuento_final = total * (descuento * 0.01);
		  total_final = total - descuento_final;
		}
		else
		{	
		 descuento_final = 0;	
		 total_final = total;	
		}
		
	cout<<"\nProducto vendido: "<<nombre_producto_vender<<endl;
	cout<<setprecision(2)<<fixed<<"Precio del producto: "<<precio_producto_vender<<endl;
	cout<<"Cantidad vendida: "<<cantidad_producto_vender<<endl;
	cout<<"Sub Total: "<<sub_total<<endl;
	cout<<setprecision(2)<<fixed<<"Descuento: -"<<descuento_final<<endl;
	cout<<"\nTotal a pagar: "<<total_final<<endl;
	
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;	
	system("cls");
	break;
			
	case 6 :
	return 0;
		
	default: cout <<"Ha elegido una opcion invalida.";
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
	
} 
}while(opc2 == 1);

}
