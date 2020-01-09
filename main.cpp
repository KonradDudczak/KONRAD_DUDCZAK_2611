#include "tstring.h"

#include<iostream>
using namespace std;
using namespace MojeOperatory;

TString fun(const char* c) {
  return TString(c);
}



int main ()
{ TString s1("inicjalizacja slowem");
  //s1.insert(2, "proba");
  //cout<<s1<<endl;
  //s1.insert(s1.size(), "druga");
  //cout<<s1<<endl;
  //s1.erase(0,3);
  //cout<<s1<<endl;
  //s1.erase(1,3);
  //cout<<s1<<endl;
  //cout<<"Podaj ciag: "<<endl;
  //cin>>s1;
  // s1.erase();
  TString s4("inicjalizacja slowem tym");
  //cout<< s1+s4 <<endl;
  //s1= s1 + "ten niedopasowany, a działa";
  
  ///s1 += s1;
  //cout<<s1;
  
  //TString s3;
   // TString s3 (s2);
    // albo TString s3 {s2};
   // TString s3 = "alfa beta";
  //s3 = s2;
//  s3=std::move(s1);
  //TString s5=fun("jakis napis");
  //TString s6=s4;
//for (auto n:s1) {n++;} endl (cout); 
//for (const auto& n: s1) cout << n <<" - "; cout << endl;

//s1.insert(0, "w stawka");
//cout << "zawartosc obiektu s1: " << s1 << endl;

//TString s6;
//char* ch = s6;
//char tab [100];
//strcpy (tab, s6);
//
 auto lambda = [s1,&s4 ] (int liczba_pierwsza=0, int liczba_druga=0, const char tmp = 's') mutable
  
{ 
  for (char n:s1)
      {if (tmp==n) liczba_pierwsza++; }     
  for (char n:s4)
      {if (tmp==n) liczba_druga++; }
  return liczba_pierwsza+liczba_druga;
  
};
cout<<lambda()<<endl;
//cout<<lambda()<<endl;
}



//liczby losowe roznica random device a random roznice
//konstruktory
//metody wykonane w pierwszzym elemencie 
//wczytywanie z pliku 
//co robia poszczegolne nagłowki
//definicja przestrzeni nazw 
//roznica pomiedzy wskaznikami a referencja
//destruktory
//operator new
//delete
//struktura klasy
//jak przeciazyc operator w klasie
//po co definiujemky tryp naglowkowy 
//autorekurencja uzycie operatora this 
//kontenery standardowe 
//traktowanie obieku jako tablice
//strumienie przeciazenia
//deklaracja metod zaprzyjaźnionych po co
//domyslna konwersja
//deklarowanie metod konwerski zabraninie konwersji niejawnej


//07.01.20
/* Z wykorzytsaniem wyyrażenia Lambda na dwóch zmiennych orzekazazanych do niego (jeden za pomocą referencji), sprawdź stan tych zmiennych poprzez wykonanie kilku pętli.
*/

