#pragma once

// This project made by Asaf Zafrir - 205929029

//---      OverFlowSizeCheck.hpp      ---//

class OverFlowSizeCheck {
protected:
	int m_size;

public:
	OverFlowSizeCheck(int size);

	bool legal(int num) { // Checing if the size is legal.
		if (num < 0 || num > m_size - 1) {
			return false;
		}
		else return true;
	}

	//--- Get's & Set's ---//
	int getSize() { return m_size; }
	void setSize(int size) { m_size = size; }
};