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
	 * 		Name   -> Function Base_LockedDoor.Base_LockedDoor_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ABase_LockedDoor_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_LockedDoor.Base_LockedDoor_C.ActiveCalled");
		
		ABase_LockedDoor_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_LockedDoor.Base_LockedDoor_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ABase_LockedDoor_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_LockedDoor.Base_LockedDoor_C.DeActiveCalled");
		
		ABase_LockedDoor_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_LockedDoor.Base_LockedDoor_C.OnUnlocked
	 * 		Flags  -> ()
	 */
	void ABase_LockedDoor_C::OnUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_LockedDoor.Base_LockedDoor_C.OnUnlocked");
		
		ABase_LockedDoor_C_OnUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_LockedDoor.Base_LockedDoor_C.OnTriedToOpenButLocked
	 * 		Flags  -> ()
	 */
	void ABase_LockedDoor_C::OnTriedToOpenButLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_LockedDoor.Base_LockedDoor_C.OnTriedToOpenButLocked");
		
		ABase_LockedDoor_C_OnTriedToOpenButLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_LockedDoor.Base_LockedDoor_C.ExecuteUbergraph_Base_LockedDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_LockedDoor_C::ExecuteUbergraph_Base_LockedDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_LockedDoor.Base_LockedDoor_C.ExecuteUbergraph_Base_LockedDoor");
		
		ABase_LockedDoor_C_ExecuteUbergraph_Base_LockedDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_LockedDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_LockedDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_LockedDoor.Base_LockedDoor_C");
		return ptr;
	}

}


