#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <array>
#include <string>


using namespace std;


class Card
{
public:
	Card()
	{
		m_Value = 0;
		m_Colour = "BASIC";
	}
	~Card(){}


	string getColour() const;

	int getValue() const;


	void setColour(string colour);

	void setValue(int value);

	
	static const array<int, 13> value;

	static const array<int, 13> getCardsValue();


	static const array<string, 4> colour;

	static const array<string, 4> getCardsColour();
	

	


private:
	int m_Value;
	string m_Colour;

};


#endif

/*
enum Value
{
	VALUELESS = 0,
	no2 = 2,
	no3 = 3,
	no4 = 4,
	no5 = 5,
	no6 = 6,
	no7 = 7,
	no8 = 8,
	no9 = 9,
	no10 = 10,
	JACK = 10,
	QUEEN = 10,
	KING = 10,
	ACE = 11,
};

enum Colour
{
	BASIC = 0,
	TREFF = 1,
	KARO = 2,
	KOR = 3,
	PIKK = 4
};
*/

//const array<int, 13> Card::value = { 2,3,4,5,6,7,8,9,10,10,10,10,11 };
//const array<string, 4> Card::colour = { "Treff", "Karo", "Kor", "Pikk" };





