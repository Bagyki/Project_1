#include <iostream>
#include "Card.h"


string Card::getColour() const
{
	return m_Colour;
}

int Card::getValue() const
{
	return m_Value;
}


void Card::setColour(string colour)
{
	m_Colour = colour;
}

void Card::setValue(int value)
{
	m_Value = value;
}


const array<int, 13> Card::value = { 2,3,4,5,6,7,8,9,10,10,10,10,11 };
const array<string, 4> Card::colour = { "Treff", "Karo", "Kor", "Pikk" };


const array<int, 13> Card::getCardsValue()
{
	return value;
}

const array<string, 4> Card::getCardsColour()
{
	return colour;
}

/*
void Card::showCard() const
{
	cout << m_Colour << " " << m_Value;
}
*/
