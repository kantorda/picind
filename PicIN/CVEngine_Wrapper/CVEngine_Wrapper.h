#pragma once

using namespace System;

namespace CVEngine {
	template<class T>
	public ref class ManagedWrapper
	{
	protected:
		T* m_Instance;
	public:
		ManagedWrapper() : m_Instance((nullptr)) {}
		ManagedWrapper(T* instance) : m_Instance(instance) { }
		
		virtual ~ManagedWrapper()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}

		!ManagedWrapper()
		{
			if (m_Instance != nullptr)
			{
				delete m_Instance;
			}
		}

		T* GetInstance()
		{
			return m_Instance;
		}
	};
}

using namespace System::Runtime::InteropServices;
static const char* string_to_char_array(String^ string)
{
	return (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
}
