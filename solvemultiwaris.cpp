#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuatdengan umur " << umur << "\n" << endl;
     }    
};