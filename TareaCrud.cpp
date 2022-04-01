#include<iostream>
#include <stdlib.h> // new and delete  
#include <string.h> 
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	string *apellido;
	string *direccion;
	int *telefono;
};

int main(){
int filaEstudiante=0;
Estudiante estudiante;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>filaEstudiante;	
estudiante.codigo = new int[filaEstudiante];
estudiante.nombre = new string[filaEstudiante];
estudiante.apellido = new string[filaEstudiante];
estudiante.direccion = new string[filaEstudiante];
estudiante.telefono = new int[filaEstudiante];

cout<<"--------------Ingrese Estudiante--------------"<<endl;
string nombre,apellido,direccion;
for (int i=0;i<filaEstudiante;i++){
	cout<<"Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Nombre:";
	getline(cin,estudiante.nombre[i]);
	cout<<"Apellidos: ";
	getline(cin,estudiante.apellido[i]);
	cout<<"Direccion: ";
	getline(cin,estudiante.direccion[i]);
	cout<<"Telefono: ";
	cin>>estudiante.telefono[i];

	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Estudiante--------------"<<endl;
	int id=0;
for (int i=0;i<filaEstudiante;i++){
	cout<<"id"<<id<<endl;
	cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
	cout<<" Nombre:"<<estudiante.nombre[i]<<endl;
	cout<<" Apellido:"<<estudiante.apellido[i]<<endl;
	cout<<" Direccion:"<<estudiante.direccion[i]<<endl;
	cout<<" Telefono:"<<estudiante.telefono[i]<<endl;
	id+=1;

		cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Modificar Estudiante--------------"<<endl;
	
	cout<<"Ingrese el Id que desea modificar: ";
	cin>>id;
	for (int id=0;id<filaEstudiante;id++){
	cout<<"Codigo: ";
	cin>>estudiante.codigo[id];
	cin.ignore();
	cout<<"Nombre:";
	getline(cin,estudiante.nombre[id]);
	cout<<"Apellidos: ";
	getline(cin,estudiante.apellido[id]);
	cout<<"Direccion: ";
	getline(cin,estudiante.direccion[id]);
	cout<<"Telefono: ";
	cin>>estudiante.telefono[id];
	}
	cout<<"--------------Estudiante Modificado--------------"<<endl;
	cout<<"Codigo: "<<estudiante.codigo[id]<<endl;
	cout<<" Nombre:"<<estudiante.nombre[id]<<endl;
	cout<<" Apellido:"<<estudiante.apellido[id]<<endl;
	cout<<" Direccion:"<<estudiante.direccion[id]<<endl;
	cout<<" Telefono:"<<estudiante.telefono[id]<<endl;
	

	
for(int i=0; i<filaEstudiante; i++){
	delete []estudiante.codigo;
	delete []estudiante.nombre;
	delete []estudiante.apellido;
	delete []estudiante.direccion;
	delete []estudiante.telefono;
}

system("Pause");
return 0;

}
