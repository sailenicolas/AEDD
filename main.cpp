#include <iostream>

using namespace std;
int main() {
    int a, b, c, d, e, f;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    int z=10;
    d = a%10;
    e = b%10;
    f = c%10;
    if((c+f == 52) && ((b+e) == 28) && ((a+d)==44)){
        cout << "Haz desactivado la bomba:"<<endl << "El codigo real era "<< c+f<<"-"<<b+e<<"-"<<a+d;
    }else{
        cout << "Te habeis equivocadeis"<<z;
    }

    return 0;
}
