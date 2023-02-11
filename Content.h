#pragma once

#include <string>
#include <iostream>
//内容クラス
class Content
{
public:

	//内容をセット
	inline void SetContent(const std::string& content) { this->content = content; }
	//内容をゲット
	inline std::string GetContent() { return this->content; }

private:

	std::string content;
};

