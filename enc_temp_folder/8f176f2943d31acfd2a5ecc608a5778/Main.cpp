#include "HashMap.hpp"
#include "CustomExceptions.hpp"

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
		cout << "Inavlid Index!";
	}
	catch (const InvalidKey)
	{
		cout << "Inavlid key!";

	}


	return 0;
}