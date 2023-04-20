#include <iostream>
#include "TString.h"
int main() {
    TString s1;
    TString s2{ "nikedunklow" };
    TString s3{ s2 };
    TString* p = new TString[3]{ "toyotasupra", s3, TString("Poland") };
    s1 = std::move(s2);
    delete[] p;
    std::cout << "===========" << std::endl;    return 0;
}
