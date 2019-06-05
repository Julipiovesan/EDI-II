#include <iostream>
#include <stdio.h>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
    
    public:
         Contacto(){}

        ~Contacto(){}

		void setNombre(string nom)
		{
            nombre = nom;

        }
		void setNumero (int tel)
		{
			   telefono = tel;
		}

        string getNombre() 
        {
            return nombre;
        }
        int getTelefono() 
        {
            return telefono;
        }
};

class Agenda 
{
    private:    
        list <Contacto> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
            contactos.push_back(*nContacto);
        }

        void listarContactos()
        {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;

            list<Contacto>::iterator ite;
                for(ite=contactos.begin(); ite != contactos.end(); ite++)
                {
                    cout << "Nombre:  " << ite->getNombre() << endl;
                    cout << "Telefono:  " << ite->getTelefono() << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setNombre("Celes");
        contacto->setNumero(4324324);
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setNombre("Luis");
        contacto2->setNumero(9399929);

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
		agenda->addContacto(contacto2);

        agenda->listarContactos();

		system("pause");

        delete contacto;
        delete agenda;
		return 0;
}
