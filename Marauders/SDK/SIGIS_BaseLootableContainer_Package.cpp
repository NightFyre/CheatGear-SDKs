/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGIS_BaseLootableContainer_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.DeActiveCalled");
		
		ASIGIS_BaseLootableContainer_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGIS_BaseLootableContainer_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.ActiveCalled");
		
		ASIGIS_BaseLootableContainer_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.ExecuteUbergraph_SIGIS_BaseLootableContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASIGIS_BaseLootableContainer_C::ExecuteUbergraph_SIGIS_BaseLootableContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C.ExecuteUbergraph_SIGIS_BaseLootableContainer");
		
		ASIGIS_BaseLootableContainer_C_ExecuteUbergraph_SIGIS_BaseLootableContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGIS_BaseLootableContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGIS_BaseLootableContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SIGIS_BaseLootableContainer.SIGIS_BaseLootableContainer_C");
		return ptr;
	}

}


