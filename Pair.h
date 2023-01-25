#pragma once
#include <iostream>

using namespace std;

// This project made by Asaf Zafrir - 205929029

//---      Pair.h      ---//
template<class T1, class T2>
class Pair {
private:
	T1 m_first;
	T2 m_second;

public:
	Pair(T1 first, T2 second) {
		m_first = first;
		m_second = second;
	}

	Pair() {}

	template<class T1, class T2> Pair<T1, T2>& operator = (const Pair<T1, T2>& pair) {
		if (this == &pair) {
			return *this;
		}
		Pair<T1, T2> temp = new Pair<T1, T2>(pair.getFirst(), pair.getSecond());
		return *temp;
	}

	void print() {
		cout << "(" << getFirst() << "," << getSecond() << ")" << endl;
	}
	 
	friend ostream& operator << (ostream& out, const Pair<T1, T2>& pair) {
		pair.print();
		return out;
	}

	friend istream& operator >> (istream& in, const pair<T1, T2>& pair) {
		in >> pair.first >> pair.second;
		return in;
	}

	T1& getFirst() { return m_first; }
	void setFirst(T1 first) { m_first = first; }

	T2& getSecond() { return m_second; }
	void setSecond(T2 second) { m_second = second; }
};