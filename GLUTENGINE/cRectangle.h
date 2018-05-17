#ifndef CRECTANGLE_H
#define CRECTANGLE_H
#include "cShape.h"


class cRectangle : public cShape
{
private:
	float fLength;
	float fWidth;
public:
	cRectangle(string n, float x, float y, float r, float g, float b)
	{
		this->setName(n);
		this->setPosx(x);
		this->setPosy(y);
		this->setRed(r);
		this->setGre(g);
		this->setBlu(b);
	};
}; 
#endif // !CRECTANGLE_H