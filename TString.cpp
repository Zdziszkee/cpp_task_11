//
// Created by Kacper Kuchta on 4/8/23.
//

#include <cstring>
#include "TString.h"

TString::TString(const char* s)
        : ptr(nullptr) , len(0)
{
    if (s != nullptr)
    {
        len = std::strlen(s);
        ptr = new char[len + 1];
        strcpy(ptr, s);
    }
    LOG("TString c-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString::TString(const TString& s)
        : ptr(nullptr), len(s.len)
{
    if (len > 0)
    {
        ptr = new char[len + 1];
        strcpy(ptr, s.ptr);
    }
    LOG("TString cc-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString::TString(TString&& s)
        : ptr(s.ptr), len(s.len)
{
    s.ptr = nullptr;
    s.len = 0;

    LOG("TString move c-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString& TString::operator=(const TString& s)
{
    if (this != &s)
    {
        delete[] ptr;
        ptr = nullptr;
        len = s.len;
        if (len > 0)
        {
            ptr = new char[len + 1];
            strcpy(ptr, s.ptr);
        }
    }
    LOG("TString copy operator+: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    return *this;
}

TString& TString::operator=(TString&& s)
{
    if (this != &s)
    {
        delete[] ptr;
        len = s.len;
        ptr = s.ptr;
        s.len = 0;
        s.ptr = nullptr;
    }
    LOG("TString move operator=: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    return *this;
}

TString::~TString()
{
    LOG("TString d-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    delete[] ptr;
}

void z3z1()
{

}