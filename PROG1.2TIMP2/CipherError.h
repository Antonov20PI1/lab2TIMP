#pragma once
#include <string>
#include <stdexcept>
using namespace std;
class CipherError : public invalid_argument
{
public:
    CipherError () = delete;
    explicit CipherError (const string & what_arg) : invalid_argument(what_arg) {};
};
