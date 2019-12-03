#include "tstring.h"
#include<iostream>
using namespace std;

TString fun(const char* c) {
  return TString(c);
}



int main ()
{

TString s4("inicjalizacja slowem tym");
  //TString s3;
   // TString s3 (s2);
    // albo TString s3 {s2};
   // TString s3 = "alfa beta";
  //s3 = s2;
//  s3=std::move(s1);
  TString s5=fun("jakis napis");
  TString s6=s4;


}