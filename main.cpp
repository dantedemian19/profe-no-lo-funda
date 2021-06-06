#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>

const int l=5;

using namespace std;
struct person{
float deposi;
float extrac;
float inter;
float comis;
float saldo;
};
int main()
{
    person client[l];
    int i=0;
    float num;
    int w=0;
    for(int j;j<l;j=j+1){
        client[j].comis=0;
        client[j].deposi=0;
        client[j].extrac=0;
        client[j].inter=0;
        client[j].saldo=0;
    }
    while(i!=l){
        while(w!=5){
            cout<<"cliente N: "<<i+1<<"\n";
            cout<<"pulse 1 para registrar los depositos del cliente \n";
            cout<<"pulse 2 para registrar las extracciones del cliente \n";
            cout<<"pulse 3 para registrar las comisiones del cliente \n";
            cout<<"pulse 4 para registrar los intereses del cliente \n";
            cout<<"pulse 5 para seguir con el siguiente cliente\n";
            cin>>w;
            system("cls");
            switch(w){
             case 1: cout<<"cliente N: "<<i+1<<"\n";
                cout<< "ingrese monto del deposito: ";
                cin>> num;
                client[i].deposi=0+num;
                system("cls");
                break;
             case 2: cout<<"cliente N: "<<i+1<<"\n";
                cout<< "ingrese monto de la extraccion: ";
                cin>> num;
                client[i].extrac=0+num;
                system("cls");
                break;
             case 3: cout<<"cliente N: "<<i+1<<"\n";
                cout<< "ingrese monto de las comisiones: ";
                cin>> num;
                client[i].comis=0+num;
                system("cls");
                break;
             case 4: cout<<"cliente N: "<<i+1<<"\n";
                cout<< "ingrese monto de los intereses: ";
                cin>> num;
                client[i].inter=0+num;
                system("cls");
                break;
             case 5: client[i].saldo=0+((client[i].deposi+client[i].inter)-(client[i].extrac+client[i].comis));
                break;
             default: cout<<"ingrese una operacion valida \n";
            break;
            }
        }
        i=i+1;
        w=0;
        }
    cout<<"N de cliente | total depositado | total   extraido | comisiones | intereses | saldo | \n";
    for(int j=0;j<l;j=j+1){
        cout<<j+1<<" | "<<client[j].deposi<<" | "<<client[j].extrac<<" | "<<client[j].comis<<" | "<<client[j].inter<<" | "<<client[j].saldo<<" | \n";
    }
    int maxe=client[0].deposi;
    int a[l];
    int o=0;
    for(int j=0;j<l;j=j+1){
        if(maxe<client[j].deposi){
            maxe=client[j].deposi;
        }
    }
    for(int j=0;j<l;j=j+1){
        if(maxe==client[j].deposi){
            cout<<"\n"<<"ha ingresado el mayor numero de dinero al banco, el cliente: "<<j+1<<" con "<<client[j].deposi<<"$ \n";
        }
    }

}
