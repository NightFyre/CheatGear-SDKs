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
	 * 		Name   -> Function BPI_RadialInput.BPI_RadialInput_C.GetJoystickDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_RadialInput_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RadialInput.BPI_RadialInput_C.GetJoystickDirection");
		
		UBPI_RadialInput_C_GetJoystickDirection_Params params {};
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_RadialInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_RadialInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RadialInput.BPI_RadialInput_C");
		return ptr;
	}

}


