#include "tstring.h"

#include<iostream>
using namespace std;
using namespace MojeOperatory;

TString fun(const char* c) {
  return TString(c);
}



int main ()
{ TString s1="inicjalizacja slowem";
  s1.insert(2, "proba");
  cout<<s1<<endl;
  s1.insert(s1.size(), "druga");
  cout<<s1<<endl;
  s1.erase(0,3);
  cout<<s1<<endl;
  s1.erase(1,3);
  cout<<s1<<endl;
  cout<<"Podaj ciag: "<<endl;
  cin>>s1;
  // s1.erase();
//TString s4("inicjalizacja slowem tym");
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

//s1.insert(0, "wstawka");
cout << "zawartosc obiektu s1: " << s1 << endl;

}