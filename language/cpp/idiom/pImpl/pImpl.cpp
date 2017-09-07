#include "pImpl_private.hpp"

Book::Book() : m_p(new BookImpl())
{

}

Book::~Book()
{
    delete m_p;
}

void Book::print()
{
    m_p->print();
}
