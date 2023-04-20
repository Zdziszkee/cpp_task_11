//
// Created by Kacper Kuchta on 4/8/23.
//

#ifndef CPP_TASK_11_TSTRING_H
#define CPP_TASK_11_TSTRING_H


#include <cstddef>
#ifdef _DEBUG
#define LOG(x) std::cout << x;
#else
#define LOG(x)
#endif

class TString
{
private:
    char* ptr = nullptr;
    size_t len = 0;

public:
    TString(const char* s = nullptr); // c-tor
    TString(const TString& s); // cc-tor
    TString(TString&& s); // move c-tor
    TString& operator=(const TString& s); // copy operator=
    TString& operator=(TString&& s); // move operator=
    ~TString(); // d-tor
};

#endif //CPP_TASK_11_TSTRING_H
