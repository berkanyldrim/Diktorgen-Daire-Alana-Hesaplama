Main.cpp

#include "Dikdortgen.h"
#include "Daire.h"
#include <iostream>//cout ve endl

using namespace std;

int main()
{

	double kenar1, kenar2, yaricap;
	
	cout<<"Dikdortgen icin 1. ve 2. kenarlarin boyutunu giriniz: ";
	cin >> kenar1 >> kenar2;

	cout<<"Daire icin yaricap boyutunu giriniz: ";
	cin >> yaricap;


	Dikdortgen dikdortgen(kenar1, kenar2);
	Daire daire(yaricap);


	cout<< "Dikdortgen Cevresi: " << dikdortgen.CevreHesapla() << endl;
	cout<< "Dikdortgen Alani: " << dikdortgen.AlanHesapla() << endl;

	cout<< "Daire Cevresi: " << daire.CevreHesapla() << endl;
	cout<< "Daire Alani: " << daire.AlanHesapla() << endl;
	
	return 0;
}




Daire.h

#ifndef DAIRE_H
#define DAIRE_H

class Daire 
{

public:

Daire(double);//Yapıcı (Constructor)
double CevreHesapla();
double AlanHesapla();

private:

double yaricap;

};

#endif


Dikdortgen.h

#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H

class Dikdortgen 
{

public:

Dikdortgen(double,double);//Yapıcı (Constructor)
double CevreHesapla();
double AlanHesapla();

private:

double kenar1, kenar2;

};

#endif



Daire.cpp

#include "Daire.h"

using namespace std;

Daire::Daire(double r)//::Kapsam Belirleme Operatörü
{ 
	yaricap = r;	
}

double Daire::CevreHesapla()
{
	return 2*3.14*yaricap;
}

double Daire::AlanHesapla()
{
	return 3.14*yaricap*yaricap;
}


Dikdortgen.cpp

#include "Dikdortgen.h"

using namespace std;

Dikdortgen::Dikdortgen(double k1, double k2)//::Kapsam Belirleme Operatörü
{ 
	kenar1 = k1;
	kenar2 = k2;
}

double Dikdortgen::CevreHesapla()
{
	return 2*(kenar1+kenar2);
}

double Dikdortgen::AlanHesapla()
{
	return kenar1*kenar2;
}
