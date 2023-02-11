#pragma once

#include <string>
#include <iostream>

//題名クラス
class Title
{
public:
	//題名をセット
	inline void SetTitle(const std::string& title) { this->title = title; }
	//題名をゲット
	inline std::string GetTitle() { return this->title; }

private:

	std::string title;
};

