#include <iostream>
using namespace std;

int main() {
    int chocolates;
    const float precio = 23.0;
    const float descuento = 0.10;
    const float iva = 0.16;
    
    cout << "¿Cuantos chocolates quieres comprar? (cada uno cuesta 23 pesos) xd " << endl;
    cin >> chocolates;
    
    float sin_desc = chocolates * precio;
    float con_desc = sin_desc;
    
    if (chocolates >= 5) {
        con_desc = sin_desc * (1.0 - descuento);
    }
    
    float con_IVA = con_desc * (1.0 + iva);
    
    cout << "Total sin descuento: $" << sin_desc << endl;
    cout << "Total con descuento (si compraste 5 o mas): $" << con_desc << endl;
    cout << "Total con descuento (si aplica) y el IVA: $" << con_IVA << endl;
    
    return 0;
}
