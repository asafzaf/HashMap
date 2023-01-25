#include "Pair.h"

using namespace std;

//template<class T1, class T2>
//Pair<T1, T2>::Pair(T1 first, T2 second) : m_first(first), m_second(second) {
//}

//template<class T1, class T2>
//Pair<T1,T2>& Pair<T1, T2>::operator=(const Pair< T1, T2>& pair) {
//	if (this == &pair) {
//		return *this;
//	}
//	Pair<T1, T2> temp = new Pair<T1, T2>(pair.getFirst(), pair.getSecond());
//	return *temp;
//}
//
//template<class T1,class T2>
//void Pair<T1, T2>::print() {
//	cout << "(" << pair.getFirst() << "," << pair.getSecond() << ")" << endl;
//}
//
//template<class T1, class T2>
//ostream& operator << (ostream& out, const Pair<T1, T2>& pair) {
//	pair.print();
//	return out;
//}

//template<class T1, class T2>
//istream& operator >> (istream& in, const pair<T1, T2>& pair) {
//	in >> pair.first >> pair.second;
//	return in;
//}