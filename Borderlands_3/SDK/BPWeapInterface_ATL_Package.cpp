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
	 * 		Name   -> Function BPWeapInterface_ATL.BPWeapInterface_ATL_C.SetEmissiveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MarkerBaseColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MarkerHighlightColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HomingOverrideBase                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewParamHomingOverrideHighlight                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeapInterface_ATL_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapInterface_ATL.BPWeapInterface_ATL_C.SetEmissiveData");
		
		UBPWeapInterface_ATL_C_SetEmissiveData_Params params {};
		params.BaseColor = BaseColor;
		params.HighlightColor = HighlightColor;
		params.MarkerBaseColor = MarkerBaseColor;
		params.MarkerHighlightColor = MarkerHighlightColor;
		params.HomingOverrideBase = HomingOverrideBase;
		params.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeapInterface_ATL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeapInterface_ATL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapInterface_ATL.BPWeapInterface_ATL_C");
		return ptr;
	}

}


