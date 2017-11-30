/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/CoSmcSwitchI1.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "CoSmcSwitchI1Reflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(SMSwitchI1)

#define _ ,
			BEGIN_CLASS_MEMBER(::SMSwitchI1)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::SMSwitchI1>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_state_CreateCoroutine, { L"__vwsn_state_startState" })
				CLASS_MEMBER_METHOD(A, NO_PARAMETER)
				CLASS_MEMBER_METHOD(B, NO_PARAMETER)
			END_CLASS_MEMBER(::SMSwitchI1)

#undef _
			class CoSmcSwitchI1TypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::SMSwitchI1)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadCoSmcSwitchI1Types()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<CoSmcSwitchI1TypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
