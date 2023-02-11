#pragma once

//ŠúŒÀƒNƒ‰ƒX
class DeadLine
{
public:

	inline void SetDeadLine(const int& month, const int& day) { this->month = month, this->day = day; }

	inline int GetMonth() { return month; }
	inline int GetDay() { return day; }

private:
	int month;//Œ
	int day;//“ú

};

