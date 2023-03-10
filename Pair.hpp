#pragma once
#include <iostream>

using namespace std;

// This project made by Asaf Zafrir - 205929029

//---      Pair.hpp      ---//

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

	template<class T1, class T2> Pair<T1, T2>& operator = (const Pair<T1, T2>& pair) { // Assign operator to Pair.
		if (this == &pair) {
			return *this;
		}
		Pair<T1, T2> temp = new Pair<T1, T2>(pair.getFirst(), pair.getSecond());
		return *temp;
	}

	void print() { // Print an array.
		cout << "(" << getFirst() << "," << getSecond() << ")";
	}

	friend ostream& operator << (ostream& out, Pair<T1, T2>& pair) { // Out operator.
		pair.print();
		return out;
	}

	friend istream& operator >> (istream& in, const pair<T1, T2>& pair) { // In operator.
		in >> pair.first >> pair.second;
		return in;
	}

	//--- Get's & Set's ---//
	T1& getFirst() { return m_first; }
	void setFirst(T1 first) { m_first = first; }

	T2& getSecond() { return m_second; }
	void setSecond(T2 second) { m_second = second; }
};