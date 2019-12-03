#ifndef TSTRING_H
#define TSTRING_H
#include<cstring>
class TString {
 public:
 TString(const char* s = nullptr);
TString(const TString& s);
TString& operator= (const TString& s);
TString& operator= (TString&& s);
char& operator[](size_t n);
const char& operator[](size_t n)const;
~TString();
char* begin() {return ptr;}
char* end() {return ptr+len;}
size_t length() const {return len;}
void clear() {delete [] ptr; ptr = nullptr; len = 0;}
bool empty() const {return len ? false : true;}
char& front() {return *ptr;}
const char& front() const {return *ptr;}
char& back() {return*(ptr+len-1); }
const char& back() const {return *(ptr+len-1);}

 //interfejs
 private:
    char* ptr = nullptr;
    std::size_t len = 0;
    //implementacja
    //składowe
 protected:
};
#endif 

