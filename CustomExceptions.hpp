#pragma once
#include <exception>
#include <string>

// This project made by Asaf Zafrir - 205929029

//---      CustomExceptions.hpp      ---//

class CustomExceptions : public _exception {};

class InvaildIndex : public CustomExceptions {};

class InvalidKey : public CustomExceptions {};