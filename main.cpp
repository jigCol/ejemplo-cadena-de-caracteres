#include <iostream>

using namespace std;

//10. Hacer un programa para ingresar palabras sueltas. El programa se detiene
//cuando la persona ingresa “zzz”. Emitir en pantalla cuál es la palabra con
//mayor cantidad de letras y cuántas letras tiene.

int main()
{string palabra;
string palabraMayor;
int con,conM=0;

cout<<"Ingrese una palabra: ";
getline(cin,palabra);

palabraMayor=palabra;

for(int x=0;palabra[x]!='\0';x++){
        if(palabra[x]==' '){;continue;}
    conM++;
}

while(palabra!="zzz"){
  con=0;
        for(int x=0;palabra[x]!='\0';x++){
            if(palabra[x]==' '){continue;}
            else{con++;}

        }
        if(con>conM){conM=con,palabraMayor=palabra;}

cout<<"Ingrese una palabra: ";
getline(cin,palabra);

}

cout<<endl<<"La palabra con mas letras es '"<<palabraMayor<<"' que tiene "<<conM<<" letras."<<endl;

    return 0;
}
