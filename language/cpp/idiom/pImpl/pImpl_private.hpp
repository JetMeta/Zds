﻿#pragma once

#include "pImpl.hpp"

class Book::BookImpl
{
public:
	void print();

private:
	std::string  m_Contents;
	std::string  m_Title;
};
