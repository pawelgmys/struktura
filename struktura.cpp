#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct moja {
int liczba;
string imie;
char plec;
double x;

};


int N=2;



int main()
{
    moja test[N];
    //moja test;
    fstream plik;
    plik.open("dane.txt");


    for (int i=0; i<N; i++)
    {
        plik >> test[i].liczba;
        plik >> test[i].imie;
        plik >> test[i].plec;
        plik >> test[i].x;
    }



    for (int i=0; i<N; i++)
    {
    cout << test[i].liczba << ", " << test[i].imie << ", " << test[i].plec << ", " << test[i].x << endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
