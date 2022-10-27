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
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.DoorhandleOpenClose__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::DoorhandleOpenClose__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.DoorhandleOpenClose__FinishedFunc");
		
		ADoor_Traditional04_C_DoorhandleOpenClose__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.DoorhandleOpenClose__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::DoorhandleOpenClose__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.DoorhandleOpenClose__UpdateFunc");
		
		ADoor_Traditional04_C_DoorhandleOpenClose__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::Door_OpenClose01__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__FinishedFunc");
		
		ADoor_Traditional04_C_Door_OpenClose01__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::Door_OpenClose01__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__UpdateFunc");
		
		ADoor_Traditional04_C_Door_OpenClose01__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__OpeningFinishTrigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::Door_OpenClose01__OpeningFinishTrigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__OpeningFinishTrigger__EventFunc");
		
		ADoor_Traditional04_C_Door_OpenClose01__OpeningFinishTrigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__ClosingFinishTrigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::Door_OpenClose01__ClosingFinishTrigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.Door_OpenClose01__ClosingFinishTrigger__EventFunc");
		
		ADoor_Traditional04_C_Door_OpenClose01__ClosingFinishTrigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.ActiveCalled");
		
		ADoor_Traditional04_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional04_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.DeActiveCalled");
		
		ADoor_Traditional04_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional04.Door_Traditional04_C.ExecuteUbergraph_Door_Traditional04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_Traditional04_C::ExecuteUbergraph_Door_Traditional04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional04.Door_Traditional04_C.ExecuteUbergraph_Door_Traditional04");
		
		ADoor_Traditional04_C_ExecuteUbergraph_Door_Traditional04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_Traditional04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_Traditional04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_Traditional04.Door_Traditional04_C");
		return ptr;
	}

}


