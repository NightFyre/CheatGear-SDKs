/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisitesMet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_HDContextualWidgetBase_C::PrerequisitesMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisitesMet");
		
		UWBP_HDContextualWidgetBase_C_PrerequisitesMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisiteNotMet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFContextualWidgetPrerequisiteBase*         FailedPrereq                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDContextualWidgetBase_C::PrerequisiteNotMet(class UDFContextualWidgetPrerequisiteBase* FailedPrereq)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.PrerequisiteNotMet");
		
		UWBP_HDContextualWidgetBase_C_PrerequisiteNotMet_Params params {};
		params.FailedPrereq = FailedPrereq;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.ExecuteUbergraph_WBP_HDContextualWidgetBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDContextualWidgetBase_C::ExecuteUbergraph_WBP_HDContextualWidgetBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C.ExecuteUbergraph_WBP_HDContextualWidgetBase");
		
		UWBP_HDContextualWidgetBase_C_ExecuteUbergraph_WBP_HDContextualWidgetBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDContextualWidgetBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDContextualWidgetBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C");
		return ptr;
	}

}


