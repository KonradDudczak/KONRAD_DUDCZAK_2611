#include "operatory.h"
#include "tstring.h"
using namespace std;


ostream& MojeOperatory::operator<<( ostream& strumien, const TString& s ) {
return strumien << ( s.ptr ? s.ptr : "pusty" );
}