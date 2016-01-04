#ifndef OBJECT_H
#define  OBJECT_H

#include <stdio.h>

class sceneoObject {

public:
	sceneoObject();
	~sceneoObject();

protected:
	// зјБъ
	float x, y;

	float speed;
	float life;

	float direction;
	int type;
};

class playerPlane : public sceneoObject
{
public:
	playerPlane();
	~playerPlane();
};

class enemyPlane : public sceneoObject
{

};

#endif