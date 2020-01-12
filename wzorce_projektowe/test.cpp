#include<iostream>
using namespace std;

#include <cstdio>
#include <fstream>
#include <iostream>

class CLog
{
private:
    std::fstream m_plik;
    CLog() { m_plik.open( "historia.log", std::ios::out ); }
    CLog( const CLog & ) { }
    ~CLog() { m_plik.close(); }
   
public:
    template < typename T >
    CLog & operator <<( const T & wypisz )
    {
        m_plik << wypisz;
        return * this;
    }
   
    static CLog & getSingleton()
    {
        static CLog singleton;
        return singleton;
    }
   
}; //class CLog

void funkcja1( int iValue )
{
    CLog::getSingleton() << "funkcja 1 = " << iValue * iValue << "\n";
}

void funkcja2( int iValue )
{
    CLog::getSingleton() << "funkcja 2 = " << iValue + iValue << "\n";
}

int main()
{
    funkcja1( 5 );
    funkcja2( 5 );
    return 0;
}
