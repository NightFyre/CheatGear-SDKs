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
	 * 		Name   -> Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredVerticalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EVerticalAlignment                                 Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_OptionMenu_C::GetDesiredVerticalAlignment(EVerticalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredVerticalAlignment");
		
		UBPI_OptionMenu_C_GetDesiredVerticalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredHorizontalAlignment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHorizontalAlignment                               Alignment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_OptionMenu_C::GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredHorizontalAlignment");
		
		UBPI_OptionMenu_C_GetDesiredHorizontalAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alignment != nullptr)
			*Alignment = params.Alignment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_OptionMenu.BPI_OptionMenu_C.GetSubMenuOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFSubMenuOption>                     SubOptions                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBPI_OptionMenu_C::GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionMenu.BPI_OptionMenu_C.GetSubMenuOptions");
		
		UBPI_OptionMenu_C_GetSubMenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubOptions != nullptr)
			*SubOptions = params.SubOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_OptionMenu.BPI_OptionMenu_C.SetActiveSubMenuByIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_OptionMenu_C::SetActiveSubMenuByIndex(int32_t SubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionMenu.BPI_OptionMenu_C.SetActiveSubMenuByIndex");
		
		UBPI_OptionMenu_C_SetActiveSubMenuByIndex_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_OptionMenu.BPI_OptionMenu_C.HasSubMenus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSubMenuOptions                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_OptionMenu_C::HasSubMenus(bool* bSubMenuOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionMenu.BPI_OptionMenu_C.HasSubMenus");
		
		UBPI_OptionMenu_C_HasSubMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSubMenuOptions != nullptr)
			*bSubMenuOptions = params.bSubMenuOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_OptionMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_OptionMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_OptionMenu.BPI_OptionMenu_C");
		return ptr;
	}

}


