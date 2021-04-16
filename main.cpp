#include <iostream>

using namespace std;

int main () {
    // Este programa cambia el formato del tiempo
    long segundos_trans, minutos_trans, horas_trans,dias_trans;
    long segs,mins,hors,mes,dia;
    cout<<"Inicio del tiempo: \n 00:00:00 del 01/01/2021"<<endl;
    cout<<"Segundos transcurridos: ";
    cin >> segundos_trans;
    minutos_trans = segundos_trans / 60;
    segs = segundos_trans % 60;
    horas_trans = minutos_trans / 60;
    mins = minutos_trans % 60;
    dias_trans = horas_trans / 24;
    hors = horas_trans % 24;
    mes = dias_trans / 30;
    if(mes >= 0){
        mes += 1;
    }
    dia = dias_trans % 30 + 1;
    cout<<"Ese tiempo corresponde a la hora "<<hors<<":"<<mins<<":"<< segs;
    cout <<" del dia "<< dia <<" del "<< mes <<" de 2021"<< endl;
    return 0;
}