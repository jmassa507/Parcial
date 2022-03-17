#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Cuenta
#define User "123"
#define Pass "123"

/*Pr�ctica (grupal):
1) Desarrolle el siguiente problema en base a los conceptos dados en
clase:
La universidad XYZ necesita desarrollar un sistema online en el cualsus
estudiantes puedan revisar su estado de los tickets para quejas y sugerencias.
Para esto, se necesita desarrollar la l�gica inicial de la siguiente manera:
a. Los usuarios(Estudiantes) deber�n ingresarsusrespectivas
credenciales(usuario y contrase�a) qu�, inicialmente se las otorga el
propio sistema de la universidad. (Se debe tomar en consideraci�n
que la instituci�n universitaria, solo otorga este sistema a los
usuarios que mantengan una matr�cula activa).
b. Una vez el cliente haya ingresado por primera vez al sistema, el
mismo debe mostrar la fecha y hora de ingreso. Y, a su vez, le debe
pedir que actualice (cambie) la contrase�a.
c. Luego de haber cambiado la contrase�a, elsistema debe mostrar al
cliente un men� con el siguiente formato:
1) Subir un ticket: Deber� permitir que el usuario ingrese la
informaci�n para el env�o de su ticket siguiendo el siguiente patr�n:
nombre, apellido, identificaci�n, correo y carrera que estudia;
seguido por el ticket que desee enviar.
Una vez enviado el ticket, el mismo deber� generar un c�digo o
identificador del ticket
2) Ver tickets: El usuario podr� el c�digo o identificador de los tickets
que haya creado en el sistema
3) Salir: Termina el proceso y debe mostrar la fecha y hora en la que el
cliente cerr� la sesi�n*/

/*Integrantes: Juan Massa, David Lopez, Israel Castillo, Luis Zhang, Saul Rojas*/

/*User y password inicial: 123/123*/

int main(){
    string username, password, npassword, id, email, mess, nom, carrera;
    int intentos, lin=1, o;
    bool ingreso, activa, inactiva;
    char matricula, apell;

    //Estado de Matricula
    if (matricula == inactiva){
        inactiva = false;
    }
    if (matricula == activa){
        activa = true;
    }

    //estado de matricula
    matricula=inactiva;

    //Sistema para Iniciar seccion
    login:
    do
    {
        system("cls");
        cout << "\t\t\tIngreso de Estudiante"<<endl;
        cout << "\nUsername: ";cin>>username;
        cout << "\nPassword: ";cin>>password;
        cin.ignore();   
        if (username == User && password == Pass){
            ingreso = true;

        }else{
            cout << "El Username o Password que ingreso es incorrecto favor de corregirlo y volver a intentarlo."<<endl;
            cout << "Presionar ENTER para volver a interntar."<<endl;
            cin.get();
            system("cls");
            intentos++;
        }
    } while (ingreso == false && intentos < 5);


    //Intentos Logrado/fallidos
    if (ingreso == false && matricula == activa){
        cout << "Muchos intentos fallidos favor de esperar 1 minuto para volver a intentarlo."<<endl;
    
    }else if(ingreso == true && matricula == activa){

        system("cls");
        cout << "Bienvenido a la Plataforma de Estudiante."<<endl;
        cout << "Opciones: \nSubir un ticket->1 \nVer tickets->2 \nSalir->3"<<endl;cin>>o;

    }else if(ingreso == true && matricula == inactiva){
        cout<< "Usuario no valido."<<endl;
        cout<< "Precionar ENTER para continuar"<<endl;
        cin.get();
        goto login;
    }
    
    //Menu
    switch (o){
    case 1:
        system("cls");
        cout << "Bienvenido al systema de ticket de la Universidad."<<endl;
        cout << "Favor de llenar los requisitos para su ticket."<<endl;
        cout << "Nombre: "; cin>>nom; cout << "Apellido: "; cin>>apell;
        cout << "Identificacion "; cin>>id;
        cout << "Correo electronico: "; cin>>email;
        cout << "carrera que estudia: "; cin>>carrera;
        cout << "Mensaje: "<<endl; cin>>mess;
        break;
    
    case 2:
        system("cls");
        cout << "Ver tickets."<<endl;
        break;

    case 3:
        system("cls");
        goto s;    
    }


    s:
    system("cls");
    cout << "Que tenga un buen dia."<<endl;

    return 0;
}