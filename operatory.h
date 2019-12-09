
#ifndef OPERATORY_H
#define OPERATORY_H
#include <iostream>
#include <fstream>


class TString; 
namespace MojeOperatory { // definiujemy naszą przestrzeń nazw
std::ostream& operator<<( std::ostream& strumien, const TString& s );
}
#endif