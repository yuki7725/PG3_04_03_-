#pragma once
#include "animal.h"

class cat:public animal
{
public:
	cat();
	~cat();

	//�s��
	void cry() override;
	//void load() override;

private:

};

