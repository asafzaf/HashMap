#pragma once
#include <vector>
#include "Pair.h"
#include "OverFlowSizeCheck.h"

using namespace std;

// This project made by Asaf Zafrir - 205929029

//---      HashMap.h      ---//
template<class K, class V>

class HashMap : public Pair, public OverFlowSizeCheck {
private:
	vector<Pair<K, V> > m_items;
	OverFlowSizeChack m_size;

Public:
	HashMap(int size);
	int SimpleHashMap(int num);
	void Put(K& key, V& value);
	bool Contains(K& key);
	V operator[](K& key);
	ostream& operator<<(ostream& ostream, const HashMap<K, V>& hashmap);
};