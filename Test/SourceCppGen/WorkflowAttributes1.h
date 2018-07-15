/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/WorkflowAttributes.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEPENDED_GROUP_1
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEPENDED_GROUP_1

#include "WorkflowAttributes.h"
#include "WorkflowAttributes_Expression.h"

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

namespace calculator
{
	class NumberExpression : public ::calculator::Expression, public ::vl::reflection::Description<NumberExpression>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<NumberExpression>;
#endif
	public:
		::vl::vint __vwsn_prop_Value;
		::vl::vint GetValue();
		void SetValue(::vl::vint __vwsn_value_);
		NumberExpression(::vl::vint _value);
	};

	class BinaryExpression : public ::calculator::Expression, public ::vl::reflection::Description<BinaryExpression>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<BinaryExpression>;
#endif
	public:
		enum class BinaryOperator : vl::vuint64_t
		{
			Add = 0UL,
			Sub = 1UL,
			Mul = 2UL,
			Div = 3UL,
		};

		::calculator::BinaryExpression::BinaryOperator __vwsn_prop_Operator;
		::calculator::BinaryExpression::BinaryOperator GetOperator();
		void SetOperator(::calculator::BinaryExpression::BinaryOperator __vwsn_value_);
		::vl::Ptr<::calculator::Expression> __vwsn_prop_Left;
		::vl::Ptr<::calculator::Expression> GetLeft();
		void SetLeft(::vl::Ptr<::calculator::Expression> __vwsn_value_);
		::vl::Ptr<::calculator::Expression> __vwsn_prop_Right;
		::vl::Ptr<::calculator::Expression> GetRight();
		void SetRight(::vl::Ptr<::calculator::Expression> __vwsn_value_);
		BinaryExpression(::vl::Ptr<::calculator::Expression> _left, ::calculator::BinaryExpression::BinaryOperator _op, ::vl::Ptr<::calculator::Expression> _right);
	};
	inline ::calculator::BinaryExpression::BinaryOperator operator& (::calculator::BinaryExpression::BinaryOperator a, ::calculator::BinaryExpression::BinaryOperator b) { return static_cast<::calculator::BinaryExpression::BinaryOperator>(static_cast<::vl::vuint64_t>(a) & static_cast<::vl::vuint64_t>(b)); }
	inline ::calculator::BinaryExpression::BinaryOperator operator| (::calculator::BinaryExpression::BinaryOperator a, ::calculator::BinaryExpression::BinaryOperator b) { return static_cast<::calculator::BinaryExpression::BinaryOperator>(static_cast<::vl::vuint64_t>(a) | static_cast<::vl::vuint64_t>(b)); }

}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
