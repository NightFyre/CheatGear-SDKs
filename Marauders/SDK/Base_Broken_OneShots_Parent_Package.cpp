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
	 * 		Name   -> Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_Broken_OneShots_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.ReceiveBeginPlay");
		
		ABase_Broken_OneShots_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.DoAnEvent
	 * 		Flags  -> ()
	 */
	void ABase_Broken_OneShots_Parent_C::DoAnEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.DoAnEvent");
		
		ABase_Broken_OneShots_Parent_C_DoAnEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.PickARandomGoalNumber
	 * 		Flags  -> ()
	 */
	void ABase_Broken_OneShots_Parent_C::PickARandomGoalNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.PickARandomGoalNumber");
		
		ABase_Broken_OneShots_Parent_C_PickARandomGoalNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.ExecuteUbergraph_Base_Broken_OneShots_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Broken_OneShots_Parent_C::ExecuteUbergraph_Base_Broken_OneShots_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C.ExecuteUbergraph_Base_Broken_OneShots_Parent");
		
		ABase_Broken_OneShots_Parent_C_ExecuteUbergraph_Base_Broken_OneShots_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Broken_OneShots_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Broken_OneShots_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Broken_OneShots_Parent.Base_Broken_OneShots_Parent_C");
		return ptr;
	}

}


