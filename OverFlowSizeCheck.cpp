#include "OverFlowSizeCheck.hpp"

OverFlowSizeCheck::OverFlowSizeCheck(int size) {
	m_size = size;
}

//bool OverFlowSizeCheck::legal(int num) {
//	if (num < 0 || num > m_size-1) {
//		return false;
//	}
//	else return true;
//}