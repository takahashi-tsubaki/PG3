#pragma once

#include "Id.h"
#include <list>
#include <string>
#include <iostream>

//�S���҃N���X
class Manager
{
public:

	void SetManager(const std::string& name) { this->name = name; }
	void SetId(const int& num) { id.SetId(num); }

private:

	Id id;

	std::string name;
};

//�ҏW�N���X
class ManagerEdit
{
private:
	std::list<std::unique_ptr<Manager>> managers;

public:
	//�V�����쐬
	void Create();
	//�w�肵���v�f���폜
	void Delete(const int& elementNum);

	void SetID(const int& elementNum, const int& idNum);
	void SetManager(const int& elementNum, const std::string& name);
};
