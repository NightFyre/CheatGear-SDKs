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
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown_Mine_Locked_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.Timeline_0__FinishedFunc");
		
		ADoor_UPDown_Mine_Locked_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown_Mine_Locked_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.Timeline_0__UpdateFunc");
		
		ADoor_UPDown_Mine_Locked_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown_Mine_Locked_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.ActiveCalled");
		
		ADoor_UPDown_Mine_Locked_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown_Mine_Locked_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.DeActiveCalled");
		
		ADoor_UPDown_Mine_Locked_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.PlayExtraSoundIfNotAlreadyPlaying
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown_Mine_Locked_C::PlayExtraSoundIfNotAlreadyPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.PlayExtraSoundIfNotAlreadyPlaying");
		
		ADoor_UPDown_Mine_Locked_C_PlayExtraSoundIfNotAlreadyPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.ExecuteUbergraph_Door_UPDown_Mine_Locked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_UPDown_Mine_Locked_C::ExecuteUbergraph_Door_UPDown_Mine_Locked(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C.ExecuteUbergraph_Door_UPDown_Mine_Locked");
		
		ADoor_UPDown_Mine_Locked_C_ExecuteUbergraph_Door_UPDown_Mine_Locked_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_UPDown_Mine_Locked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_UPDown_Mine_Locked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_UPDown_Mine_Locked.Door_UPDown_Mine_Locked_C");
		return ptr;
	}

}


