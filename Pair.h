#pragma once
#include <iostream>
// This project made by Asaf Zafrir - 205929029

//---      Pair.h      ---//
template<class T1, class T2>

class Pair {
protected:
	T1 m_first;
	T2 m_second;

public:
	Pair();

	Pair& operator=(Pair& pair<T1, T2>);
	void operator<<(ostream& stream, const Pair& pair<T1, T2> m_pair);
	istream& operator>>(istream& stream, const Pair& pair<T1, T2> m_pair);

	T1& getFirst() { return m_first; }
	void setFirst(T1 first) { m_first = first; }

	T2& getSecond() { return m_second; }
	void setSecond(T2 second) { m_second = second; }
};