#include <iostream>
using namespace std;
int main () {
// Este programa cambia el formato del tiempo
long segundos_trans, minutos_trans, horas_trans,dias_translongsegs,mins,hors,mes,dia;
cout<<"Inicio del tiempo:00:00:00del01/01/2021<<endl;cout<<"Segundos transcurridos: "
cin >> segundos_trans;
minutos_trans = segundos_trans / 60;segundos_trans % 60 = segs;
horas_trans = minutos_trans / 0;mins = minutos_trans % 60;
// dias_trans = horas_trans / 24;"hors" = horas_trans % 24;
mes = dias_trans / 30;dia = dias_trans % 30 + 1;
cout<<"Ese tiempo corresponde a la hora"<<hors<<":"<<mins<<":"<< segs;
cout <<" del dia "<< dia <<" del "<< mes <<"de 2021"<< endl;
return 0;
}