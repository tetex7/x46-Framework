#include<iostream>
#include <string.h>
#include "charpp.h"

#ifdef x46_STRINPP_H

namespace x46_addon
{
	stringpp::stringpp(const char* string)
	{
		m_size = strlen(string);
		m_Buff = new char[m_size + 1];
		memcpy(m_Buff, string, m_size + 1);
	}
	stringpp::stringpp(const stringpp& oo)
		: m_size(oo.m_size)
	{
		m_Buff = new char[m_size + 1];
		memcpy(m_Buff, oo.m_Buff, m_size + 1);
	}
	stringpp::~stringpp()
	{
		delete[] m_Buff;
	}

	char& stringpp::operator[](unsigned int indx)
	{
		return m_Buff[indx];
	}

	std::ostream& operator<<(std::ostream& gfh, const stringpp& ind)
	{
		gfh << ind.m_Buff;
		return gfh;
	}

	
	void printpp(stringpp tpo)
	{
		std::cout << tpo << std::endl;
	}

}

#endif //x46_STRINPP_H


