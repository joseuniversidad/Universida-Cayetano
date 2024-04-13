#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*void ejercicio(){
    int opc;
    cout << "Que carpeta desea abrir" << endl;
    cout << "1. Cursos de Universidad" << endl;
    cout << "2. Temas de Parcial" << endl;
    cout << "3. Menu Principal" << endl;
    cin >> opc;

    if (opc == 1) {
        system(" start C://Users//JrCay//CLionProjects//untitled16//cmake-build-debug//Cursos");
    } else if (opc == 2) {
        system(" start C://Users//JrCay//CLionProjects//untitled16//cmake-build-debug//Temas");
    } else if (opc==3){
        system("start C://Users//JrCay//CLionProjects//untitled16//cmake-build-debug");
    }

}*/
void escribirFrases(){

    ofstream archivo;
    string nombreArchivo, frase;
    char rpt;

    cout << "Digite el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out); //Creamos el archivo

    if (archivo.fail()) { //Si a ocurrido algun error
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    do {
        fflush(stdin);
        cout << "Digite una frase: ";
        getline(cin, frase);
        archivo << frase << endl;

        cout << "\nDesea agregar otra frase(S/N): ";
        cin >> rpt;
    } while ((rpt == 'S') || (rpt == 's'));

    archivo.close(); //Cerramos el archivo
}

int main() {
    /*ejercicio();*/
   escribirFrases();
    return 0;

}




