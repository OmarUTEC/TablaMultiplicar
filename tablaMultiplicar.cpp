#include<iostream>
#include<conio.h>

using namespace std;

void tablaMultiplicar(int n){
    cout<<"Tabla de multiplicar del "<<n<<endl;
    for(int i=0;i<13;i++){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
}
int main(){

    int n;

    do{
        cout<<"Ingrese un numero: ";cin>>n;
    }while(n<1 || n>13);

    tablaMultiplicar(n);

    getch();
    return 0;
}