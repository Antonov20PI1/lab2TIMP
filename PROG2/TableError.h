#pragma once
#include <string>
#include <stdexcept>
using namespace std;
class TableError : public invalid_argument
{
public:
    TableError () = delete;
    explicit TableError (const string & what_arg) : invalid_argument(what_arg) {};
    static void check_key (string key);
    static void check_str (string str);
};
