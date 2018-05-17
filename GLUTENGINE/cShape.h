#ifndef CSHAPE_H
#define CSHAPE_H
#include <iostream>
#include <string>
using namespace std; 
class cShape
{
private:
	float r = 1.0f, b = 1.0f, g = 1.0f;
	float posx = 0.0f, posy = 0.0f;
	string name;
public:
	float getPx() { return posx; }
	float getPy() { return posy; }
	float getCr() { return this->r; }
	float getCg() { return this->g; }
	float getCb() { return this->b; }

	string getName() { return name; }

	void setPosx(float x) { posx = x; }
	void setPosy(float y) { posy = y; }
	void setRed(float r) { this->r = r; }
	void setGre(float g) { this->g = g; }
	void setBlu(float b) { this->b = b; }

	void setName(string n) { name = n; }



};


#endif // !CSHAPE_H
#pragma once
