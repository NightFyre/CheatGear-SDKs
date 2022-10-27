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
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::Door_OpenClose01__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__FinishedFunc");
		
		ADoor_Traditional03_C_Door_OpenClose01__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::Door_OpenClose01__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__UpdateFunc");
		
		ADoor_Traditional03_C_Door_OpenClose01__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__Opening Finish Trigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::Door_OpenClose01__Opening_Finish_Trigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__Opening Finish Trigger__EventFunc");
		
		ADoor_Traditional03_C_Door_OpenClose01__Opening_Finish_Trigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__Closing Finish Trigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::Door_OpenClose01__Closing_Finish_Trigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.Door_OpenClose01__Closing Finish Trigger__EventFunc");
		
		ADoor_Traditional03_C_Door_OpenClose01__Closing_Finish_Trigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.DoorhandleOpenClose__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::DoorhandleOpenClose__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.DoorhandleOpenClose__FinishedFunc");
		
		ADoor_Traditional03_C_DoorhandleOpenClose__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.DoorhandleOpenClose__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::DoorhandleOpenClose__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.DoorhandleOpenClose__UpdateFunc");
		
		ADoor_Traditional03_C_DoorhandleOpenClose__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.ActiveCalled");
		
		ADoor_Traditional03_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_Traditional03_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.DeActiveCalled");
		
		ADoor_Traditional03_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_Traditional03.Door_Traditional03_C.ExecuteUbergraph_Door_Traditional03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_Traditional03_C::ExecuteUbergraph_Door_Traditional03(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_Traditional03.Door_Traditional03_C.ExecuteUbergraph_Door_Traditional03");
		
		ADoor_Traditional03_C_ExecuteUbergraph_Door_Traditional03_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_Traditional03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_Traditional03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_Traditional03.Door_Traditional03_C");
		return ptr;
	}

}


