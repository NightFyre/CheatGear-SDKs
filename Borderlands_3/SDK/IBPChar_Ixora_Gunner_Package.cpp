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
	 * 		Name   -> Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             Template                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Ixora_Gunner_C::SetGunnerHologramTemplate(class UParticleSystem* Template)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramTemplate");
		
		UIBPChar_Ixora_Gunner_C_SetGunnerHologramTemplate_Params params {};
		params.Template = Template;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Ixora_Gunner_C::SetGunnerHologramVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerHologramVisible");
		
		UIBPChar_Ixora_Gunner_C_SetGunnerHologramVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Ixora_Gunner_C::SetGunnerDeviceVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C.SetGunnerDeviceVisible");
		
		UIBPChar_Ixora_Gunner_C_SetGunnerDeviceVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBPChar_Ixora_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBPChar_Ixora_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C");
		return ptr;
	}

}


