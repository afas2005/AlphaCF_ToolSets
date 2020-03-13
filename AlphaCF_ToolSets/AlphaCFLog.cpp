#include <Windows.h>
#include "AlphaCFLog.h"


namespace AlphaCF
{
	bool endl(void)
	{
		return 0;
	}

	EasyLog::EasyLog()
	{}

	EasyLog::~EasyLog()
	{
		std::streampos pos = m_out.tellp();
		const std::streamoff f = pos;
		if(0 != f)
			mst_callback4Output(m_out.str().c_str());
	}

	EasyLog & EasyLog::operator<<(const ENDL tEndl)
	{
		//m_out.flush();
		mst_callback4Output(m_out.str().c_str());
		m_out.clear();
		m_out.seekp(0);
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const char chVal)
	{
		m_out << chVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const unsigned char uchVal)
	{
		m_out << uchVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const int iVal)
	{
		m_out << iVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const unsigned int uiVal)
	{
		m_out << uiVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const unsigned long uiVal)
	{
		m_out << uiVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const _int64 i64Val)
	{
		m_out << i64Val;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const unsigned _int64 ui64Val)
	{
		m_out << ui64Val;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const float fVal)
	{
		m_out << fVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const double dVal)
	{
		m_out << dVal;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const char * string)
	{
		m_out << string;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const wchar_t * string)
	{
		m_out << string;
		return *this;
		// TODO: insert return statement here
	}

	EasyLog & EasyLog::operator<<(const bool bVal)
	{
		m_out << bVal;
		return *this;
		// TODO: insert return statement here
	}

	void EasyLog::Out2TargetDefault(const wchar_t * wstrOut)
	{
		MessageBoxW(nullptr, L"Please specify a function for mst_callback4Output.", L"no target output Error", 0);
	}

	CallbackOut2Target EasyLog::mst_callback4Output = Out2TargetDefault;
	EasyLog EasyLog::eLog;
}