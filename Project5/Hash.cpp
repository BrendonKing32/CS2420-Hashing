#include "Hash.h"

const int MAX = 20;

Hash::Hash()
{
	HashTable[MAX];
	for (int i = 0, i < HashTable.length(); ++i) {
		HashTable[i] = -999;
	}
}

int Hash::getHashValue(int value)
{
	return 0;
}

int Hash::insert(int value)
{
	return 0;
}

bool Hash::resolveCollision()
{
	return false;
}

void Hash::display()
{
}


Hash::~Hash()
{
}
