#include <iostream>
using namespace std;
int main() {
    for (int i=1; i<=100; ++i) {
        if (i%3== 0 && i%5== 0 && i%10== 0)
            cout << "cafe con leche y hielos" << endl;
        else if (i%3== 0 && i%10== 0){
            cout << "cafe con hielos" << endl;
        }
        else if (i%5== 0 && i%10== 0){
            cout << "leche con hielos " << endl;
        }
        else if (i%3== 0 && i%5 == 0) {
            cout << "cafe con leche " << endl;
        } else if (i%3== 0) {
            cout << "cafe" << endl;
        } else if (i %5== 0) {
            cout << "leche" << endl;
        } else if (i%10== 0) {
            cout << "hielos" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
    return 0;
}
