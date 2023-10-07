#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main() {
    cout << "¿cuanto vale a, b y c? (separalos por espacios y escribelos en el orden indicado)" << endl;
    string input;
    getline(cin, input);
    
    stringstream stream(input);
    double a, b, c;
    stream >> a >> b >> c;

    double lodelaraiz = b * b - 4 * a * c;

    if (lodelaraiz >= 0) {
        double raiz1xd = (-b + sqrt(lodelaraiz)) / (2 * a);
        double raiz2xd = (-b - sqrt(lodelaraiz)) / (2 * a);
        cout << "primera raiz: " << raiz1xd << endl;
        cout << "segunda raiz: " << raiz2xd << endl;
    } else {
        cout << "las raices son números imaginarios" << endl;
    }

    cout << "la ecuacion es: y = " << a << "x^2 + " << b << "x + " << c << endl;

    return 0;
}
