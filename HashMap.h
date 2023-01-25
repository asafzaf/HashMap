#pragma once
#include "Pair.h"
#include "OverFlowSizeCheck.h"
#include "CustomExceptions.h"
#include <vector>

using namespace std;

// This project made by Asaf Zafrir - 205929029

//---      HashMap.h      ---//

template<class K, class V>
class HashMap : public OverFlowSizeCheck {
private:
	vector <Pair< K, V> > m_items;

public:
	HashMap(int size) : OverFlowSizeCheck(size) {}

	void Put(K& key, V& value) {
		if (Contains(key)) {
			//throw "Key is already here!";
			return;
		}
		else if (!legal(m_items.size())) {
			//throw "No space!";
			return;
		}
		Pair<K, V> pair(key, value);
		m_items.push_back(pair);
	}

	bool Contains(K& key) {
		vector<Pair<K, V>> temp = getItems();
		for (int i = 0; i < m_items.size(); i++) {
			Pair<K, V> pair = temp.at(i);
			if (pair.getFirst() == key)
				return true;
		}
		return false;
	}

	V operator[](K& key) {
		vector<Pair<K, V>> temp = getItems();
		for (int i = 0; i < m_items.size(); i++) {
			Pair<K, V> pair = temp.at(i);
			if (pair.getFirst() == key)
				return pair.getSecond();
		}
		return "Key doesn't exist!";
	}

	friend ostream& operator<<(ostream& out, HashMap<K, V>& hashmap) {
		vector<Pair<K, V>> temp = hashmap.getItems();
		for (auto i = temp.begin(); i != temp.end(); i++) {
			cout << *i << endl;
		}
		return out;
	}

	vector<Pair<K, V>> getItems() { return m_items; }
	void setItems(vector<Pair<K, V>> items) { m_items = items; }
};