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
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.Timeline_0__FinishedFunc");
		
		ADoor_UPDown04_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.Timeline_0__UpdateFunc");
		
		ADoor_UPDown04_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.Timeline_0__OpenFinishTrigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::Timeline_0__OpenFinishTrigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.Timeline_0__OpenFinishTrigger__EventFunc");
		
		ADoor_UPDown04_C_Timeline_0__OpenFinishTrigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.Timeline_0__CloseFinishTrigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::Timeline_0__CloseFinishTrigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.Timeline_0__CloseFinishTrigger__EventFunc");
		
		ADoor_UPDown04_C_Timeline_0__CloseFinishTrigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.DeActiveCalled");
		
		ADoor_UPDown04_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.PlayExtraSoundIfNotAlreadyPlaying
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::PlayExtraSoundIfNotAlreadyPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.PlayExtraSoundIfNotAlreadyPlaying");
		
		ADoor_UPDown04_C_PlayExtraSoundIfNotAlreadyPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_UPDown04_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.ActiveCalled");
		
		ADoor_UPDown04_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_UPDown04.Door_UPDown04_C.ExecuteUbergraph_Door_UPDown04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_UPDown04_C::ExecuteUbergraph_Door_UPDown04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_UPDown04.Door_UPDown04_C.ExecuteUbergraph_Door_UPDown04");
		
		ADoor_UPDown04_C_ExecuteUbergraph_Door_UPDown04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_UPDown04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_UPDown04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_UPDown04.Door_UPDown04_C");
		return ptr;
	}

}


