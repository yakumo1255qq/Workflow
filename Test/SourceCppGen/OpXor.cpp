/***********************************************************************
Generated from ../Resources/Codegen/OpXor.txt
***********************************************************************/

#include "OpXor.h"

/***********************************************************************
Global Variables and Functions
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_OpXor)
	vl_workflow_global::OpXor instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_OpXor)

namespace vl_workflow_global
{
	::vl::WString OpXor::main()
	{
		throw 0;
	}

	OpXor& OpXor::Instance()
	{
		return Getvl_workflow_global_OpXor().instance;
	}
}
