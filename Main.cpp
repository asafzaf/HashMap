#include "HashMap.hpp"
#include "CustomExceptions.hpp"

// This project made by Asaf Zafrir - 205929029

//---      Main.cpp      ---//

using namespace std;

int main() {
	try {
		HashMap<int, int> hashy(3);
		int x = 5, y = 7, z = 1, w = 3;
		Pair<int, int> ff(x, y);
		hashy.Put(x, y);
		hashy.Put(y, x);
		hashy.Put(z, x);
		hashy.Put(w, z);
		hashy.Put(x, z);
		ff.print();
		cout << endl << "Printing vector:" << endl << hashy;
	}
	catch (const InvaildIndex)
	{
		cout << "Invalid Index!";
	}
	catch (const InvalidKey)
	{
		cout << "Invalid key!";

	}
	return 0;
}