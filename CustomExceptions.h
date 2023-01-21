#pragma once
#include <exception>
// This project made by Asaf Zafrir - 205929029

//---      CustomExceptions.h      ---//

class CustomExceptions : public _exception {
public:
	int InvalidIndex();
	int InvalidKey();

	CustomExceptions();
};