#pragma once

class Book
{
public:
	Book();
	~Book();
	void print();

private:
	class BookImpl;
	BookImpl* const m_p;
};
