/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/CoRawCoroutine2.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_CORAWCOROUTINE2
#define VCZH_WORKFLOW_COMPILER_GENERATED_CORAWCOROUTINE2

#include "../Source/CppTypes.h"

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

namespace vl_workflow_global
{
	class __vwsnc1_CoRawCoroutine2_main__vl_reflection_description_ICoroutine;
}

/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class CoRawCoroutine2
	{
	public:

		::vl::WString s;

		::vl::WString main();

		static CoRawCoroutine2& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	class __vwsnc1_CoRawCoroutine2_main__vl_reflection_description_ICoroutine : public ::vl::Object, public virtual ::vl::reflection::description::ICoroutine
	{
	public:
		__vwsnc1_CoRawCoroutine2_main__vl_reflection_description_ICoroutine();

		::vl::vint32_t __vwsn_co0_switch_0 = 0;
		::vl::vint32_t __vwsn_co1_for_begin_i = 0;
		::vl::vint32_t __vwsn_co2_for_end_i = 0;
		::vl::vint32_t __vwsn_co3_i = 0;
		::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_co4_ex;
		::vl::vint32_t __vwsn_co_state_ = 0;
		::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_prop_Failure;
		::vl::Ptr<::vl::reflection::description::IValueException> GetFailure() override;
		void SetFailure(::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_value_);
		::vl::reflection::description::CoroutineStatus __vwsn_prop_Status = static_cast<::vl::reflection::description::CoroutineStatus>(0);
		::vl::reflection::description::CoroutineStatus GetStatus() override;
		void SetStatus(::vl::reflection::description::CoroutineStatus __vwsn_value_);
		void Resume(bool __vwsn_raise_exception_, ::vl::Ptr<::vl::reflection::description::CoroutineResult> __vwsn_coroutine_output_) override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
