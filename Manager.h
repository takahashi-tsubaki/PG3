#pragma once

#include "Id.h"
#include <list>
#include <string>
#include <iostream>

//担当者クラス
class Manager
{
public:

	void SetManager(const std::string& name) { this->name = name; }
	void SetId(const int& num) { id.SetId(num); }

private:

	Id id;

	std::string name;
};

//編集クラス
class ManagerEdit
{
private:
	std::list<std::unique_ptr<Manager>> managers;

public:
	//新しく作成
	void Create();
	//指定した要素を削除
	void Delete(const int& elementNum);

	void SetID(const int& elementNum, const int& idNum);
	void SetManager(const int& elementNum, const std::string& name);
};
