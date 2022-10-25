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
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.DoorhandleOpen__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::DoorhandleOpen__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.DoorhandleOpen__FinishedFunc");
		
		ADoor_ShipHatch01_C_DoorhandleOpen__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.DoorhandleOpen__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::DoorhandleOpen__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.DoorhandleOpen__UpdateFunc");
		
		ADoor_ShipHatch01_C_DoorhandleOpen__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::Door_OpenClose01__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__FinishedFunc");
		
		ADoor_ShipHatch01_C_Door_OpenClose01__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::Door_OpenClose01__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__UpdateFunc");
		
		ADoor_ShipHatch01_C_Door_OpenClose01__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__Closing__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::Door_OpenClose01__Closing__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__Closing__EventFunc");
		
		ADoor_ShipHatch01_C_Door_OpenClose01__Closing__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__Opening Finish Trigger__EventFunc
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::Door_OpenClose01__Opening_Finish_Trigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.Door_OpenClose01__Opening Finish Trigger__EventFunc");
		
		ADoor_ShipHatch01_C_Door_OpenClose01__Opening_Finish_Trigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.ActiveCalled");
		
		ADoor_ShipHatch01_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ADoor_ShipHatch01_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.DeActiveCalled");
		
		ADoor_ShipHatch01_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_ShipHatch01.Door_ShipHatch01_C.ExecuteUbergraph_Door_ShipHatch01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_ShipHatch01_C::ExecuteUbergraph_Door_ShipHatch01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_ShipHatch01.Door_ShipHatch01_C.ExecuteUbergraph_Door_ShipHatch01");
		
		ADoor_ShipHatch01_C_ExecuteUbergraph_Door_ShipHatch01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_ShipHatch01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_ShipHatch01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_ShipHatch01.Door_ShipHatch01_C");
		return ptr;
	}

}


