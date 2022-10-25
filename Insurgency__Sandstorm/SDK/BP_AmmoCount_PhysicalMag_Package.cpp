/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateCurrentRoundVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_PhysicalMag_C::UpdateCurrentRoundVisibility(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateCurrentRoundVisibility");
		
		UBP_AmmoCount_PhysicalMag_C_UpdateCurrentRoundVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateEmptyVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      MagazineImage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      EmptyImage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AmmoCount_PhysicalMag_C::UpdateEmptyVisibility(class UImage* MagazineImage, class UImage* EmptyImage, bool bHasAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateEmptyVisibility");
		
		UBP_AmmoCount_PhysicalMag_C_UpdateEmptyVisibility_Params params {};
		params.MagazineImage = MagazineImage;
		params.EmptyImage = EmptyImage;
		params.bHasAmmo = bHasAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetEmptyMagImagePanel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      ImagePanel                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_PhysicalMag_C::GetEmptyMagImagePanel(class UImage** ImagePanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetEmptyMagImagePanel");
		
		UBP_AmmoCount_PhysicalMag_C_GetEmptyMagImagePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagePanel != nullptr)
			*ImagePanel = params.ImagePanel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagImagePanel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      ImagePanel                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_PhysicalMag_C::GetMagImagePanel(class UImage** ImagePanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagImagePanel");
		
		UBP_AmmoCount_PhysicalMag_C_GetMagImagePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagePanel != nullptr)
			*ImagePanel = params.ImagePanel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagazineVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_PhysicalMag_C::GetMagazineVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagazineVisible");
		
		UBP_AmmoCount_PhysicalMag_C_GetMagazineVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMissingMagazineVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_AmmoCount_PhysicalMag_C::GetMissingMagazineVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMissingMagazineVisible");
		
		UBP_AmmoCount_PhysicalMag_C_GetMissingMagazineVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetMagFraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Fraction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_PhysicalMag_C::SetMagFraction(float Fraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetMagFraction");
		
		UBP_AmmoCount_PhysicalMag_C_SetMagFraction_Params params {};
		params.Fraction = Fraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetContainerType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAmmoContainerType                                 ContainerType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AmmoCount_PhysicalMag_C::SetContainerType(EAmmoContainerType ContainerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetContainerType");
		
		UBP_AmmoCount_PhysicalMag_C_SetContainerType_Params params {};
		params.ContainerType = ContainerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagBackgroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_AmmoCount_PhysicalMag_C::GetMagBackgroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagBackgroundColor");
		
		UBP_AmmoCount_PhysicalMag_C_GetMagBackgroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagForegroundColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_AmmoCount_PhysicalMag_C::GetMagForegroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagForegroundColor");
		
		UBP_AmmoCount_PhysicalMag_C_GetMagForegroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AmmoCount_PhysicalMag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AmmoCount_PhysicalMag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C");
		return ptr;
	}

}


