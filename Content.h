#pragma once

#include <string>
#include <iostream>
//���e�N���X
class Content
{
public:

	//���e���Z�b�g
	inline void SetContent(const std::string& content) { this->content = content; }
	//���e���Q�b�g
	inline std::string GetContent() { return this->content; }

private:

	std::string content;
};

