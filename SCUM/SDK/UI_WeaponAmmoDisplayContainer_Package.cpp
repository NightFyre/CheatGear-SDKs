/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              onScreenDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               displayOnCenter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  iconOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WeaponAmmoDisplayContainer_C::Init(class AWeapon* Weapon, float onScreenDuration, bool displayOnCenter, class UTexture2D* iconOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.Init");
		
		UUI_WeaponAmmoDisplayContainer_C_Init_Params params {};
		params.Weapon = Weapon;
		params.onScreenDuration = onScreenDuration;
		params.displayOnCenter = displayOnCenter;
		params.iconOverride = iconOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.OnFadedOut
	 * 		Flags  -> ()
	 */
	void UUI_WeaponAmmoDisplayContainer_C::OnFadedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.OnFadedOut");
		
		UUI_WeaponAmmoDisplayContainer_C_OnFadedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WeaponAmmoDisplayContainer_C::ExecuteUbergraph_UI_WeaponAmmoDisplayContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C.ExecuteUbergraph_UI_WeaponAmmoDisplayContainer");
		
		UUI_WeaponAmmoDisplayContainer_C_ExecuteUbergraph_UI_WeaponAmmoDisplayContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WeaponAmmoDisplayContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WeaponAmmoDisplayContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WeaponAmmoDisplayContainer.UI_WeaponAmmoDisplayContainer_C");
		return ptr;
	}

}


