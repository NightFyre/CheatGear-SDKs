/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      InIronBear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_IronBearHardpoint_DamageCalc_C::GetStrengthThroughBalanceScalar(class AOakCharacter_IronBear* InIronBear, float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C.GetStrengthThroughBalanceScalar");
		
		UInit_IronBearHardpoint_DamageCalc_C_GetStrengthThroughBalanceScalar_Params params {};
		params.InIronBear = InIronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_IronBearHardpoint_DamageCalc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_IronBearHardpoint_DamageCalc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C");
		return ptr;
	}

}


