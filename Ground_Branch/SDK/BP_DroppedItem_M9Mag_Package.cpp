/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.AddBoxInteract
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItem_M9Mag_C::AddBoxInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.AddBoxInteract");
		
		ABP_DroppedItem_M9Mag_C_AddBoxInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_DroppedItem_M9Mag_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.InpActEvt_Interact_K2Node_InputActionEvent_1");
		
		ABP_DroppedItem_M9Mag_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.MakeInteractiveEvent
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItem_M9Mag_C::MakeInteractiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.MakeInteractiveEvent");
		
		ABP_DroppedItem_M9Mag_C_MakeInteractiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnBeginCursorOver_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedItem_M9Mag_C::OnBeginCursorOver_Event_1(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnBeginCursorOver_Event_1");
		
		ABP_DroppedItem_M9Mag_C_OnBeginCursorOver_Event_1_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnEndCursorOver_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedItem_M9Mag_C::OnEndCursorOver_Event_1(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.OnEndCursorOver_Event_1");
		
		ABP_DroppedItem_M9Mag_C_OnEndCursorOver_Event_1_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.ExecuteUbergraph_BP_DroppedItem_M9Mag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedItem_M9Mag_C::ExecuteUbergraph_BP_DroppedItem_M9Mag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C.ExecuteUbergraph_BP_DroppedItem_M9Mag");
		
		ABP_DroppedItem_M9Mag_C_ExecuteUbergraph_BP_DroppedItem_M9Mag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroppedItem_M9Mag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroppedItem_M9Mag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppedItem_M9Mag.BP_DroppedItem_M9Mag_C");
		return ptr;
	}

}


