#pragma once

class Hash
{
private:
	int HashTable[];
public:
	Hash();
	
	//Function	:getHashValue()
	//Purpose	:returns the location in the array where the int should be placed 
	//Parameters:int value
	//Returns	:int value
	int getHashValue(int value);

	//Function	:insert()
	//Purpose	:inserts a value into the hash table
	//Parameters:int value
	//Returns	:int value
	int insert(int value);
	
	//Function	:resolveCollision()
	//Purpose	:corrects any errors within a hashtable by moving int value to correct location
	//Parameters:int value, location
	//Returns	:true/false
	bool resolveCollision();
	
	//Function	:display()
	//Purpose	:a simple display function to show contents of hash table
	//Parameters:none
	//Returns	:none
	void display();
	
	//Function	:~Hash()
	//Purpose	:destructor method
	//Parameters:none
	//Returns	:none
	virtual ~Hash();
};

