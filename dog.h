#pragma once
#include "animal.h"
class dog : public animal
{
public:
	dog();
	~dog();

	void cry() override;
	//void load() override;
};

