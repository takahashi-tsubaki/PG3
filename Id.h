#pragma once

//Idクラス
class Id
{
public:
	//Idをセット
	inline void SetId(const int& id) { this->Id = id; }
	//idをゲット
	inline int GetId() { return this->Id; }

private:

	int Id;

};

