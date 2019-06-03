#pragma once
const int MAX = 20;

class Hash
{
private:
	int HashTable[MAX];
public:
	Hash();
	
	//Function	:getHashValue()
	//Purpose	:returns the location in the array where the int should be placed 
	//Parameters:int value
	//Returns	:int value
	int getHashValue(int value);

	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	int insert();
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	bool resolveCollision();
	
	//Function	:
	//Purpose	:
	//Parameters:
	//Returns	:
	void display();
	
	//Function	:~Hash()
	//Purpose	:destructor method
	//Parameters:none
	//Returns	:none
	virtual ~Hash();
};

