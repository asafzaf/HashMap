#pragma once
// This project made by Asaf Zafrir - 205929029

//---      OverFlowSizeCheck.h      ---//

class OverFlowSizeCheck {
protected:
	int m_size;

public:
	OverFlowSizeCheck(int size);
	bool legal(int num);

	int getSize() { return m_size; }
	void setSize(int size) { m_size = size; }
};