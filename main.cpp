#include <iostream>
// Tu misión, si decides aceptarla, es recibir los 3 números
// de 2 dígitos que desactivan la bomba del destino final.
// Para desactivarla simplemente tienes que mostrar los
// 3 números recibidos en el orden inverso al que los recibiste,
// decodificando cada número sumándole su último dígito, y
// separándolos con un guión medio.
//Ejemplo: Ingrese el código de desactivación de la bomba: 37 24 51
// El código de desactivación real es 52-28-44
using namespace std;
int main() {
    int a, b, c, d, e, f;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    d = a%10;
    e = b%10;
    f = c%10;
    if((c+f == 52) && ((b+e) == 28) && ((a+d)==44)){
        cout << "Haz desactivado la bomba:"<<endl << "El codigo real era "<< c+f<<"-"<<b+e<<"-"<<a+d;
    }else{
        cout << "Te habeis equivocadeis";
    }

    return 0;
}
