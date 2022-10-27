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
	 * 		Name   -> Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeapInterface_MAL_C::SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData");
		
		UBPWeapInterface_MAL_C_SetSecondaryElementalData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeapInterface_MAL_C::SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData");
		
		UBPWeapInterface_MAL_C_SetPrimaryElementalData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeapInterface_MAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeapInterface_MAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapInterface_MAL.BPWeapInterface_MAL_C");
		return ptr;
	}

}


