#pragma once

//基底クラス

class animal
{
public:
	animal();
	~animal();

	//行動
	virtual void cry();
	//virtual void load();

private:
	//動物の名前
	//const char* name;
	//const int a;
};

