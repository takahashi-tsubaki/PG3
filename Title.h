#pragma once

#include <string>
#include <iostream>

//�薼�N���X
class Title
{
public:
	//�薼���Z�b�g
	inline void SetTitle(const std::string& title) { this->title = title; }
	//�薼���Q�b�g
	inline std::string GetTitle() { return this->title; }

private:

	std::string title;
};

