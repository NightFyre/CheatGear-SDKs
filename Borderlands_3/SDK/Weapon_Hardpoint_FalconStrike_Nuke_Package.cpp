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
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_Nuke_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.UserConstructionScript");
		
		AWeapon_Hardpoint_FalconStrike_Nuke_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.InitAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPAnim_IronBear_FalconStrike_C*             Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_FalconStrike_Nuke_C::InitAnimation(class UBPAnim_IronBear_FalconStrike_C* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.InitAnimation");
		
		AWeapon_Hardpoint_FalconStrike_Nuke_C_InitAnimation_Params params {};
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.K2_Initialize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeapon_Hardpoint_FalconStrike_Nuke_C::K2_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.K2_Initialize");
		
		AWeapon_Hardpoint_FalconStrike_Nuke_C_K2_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Hardpoint_FalconStrike_Nuke_C::ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke");
		
		AWeapon_Hardpoint_FalconStrike_Nuke_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Hardpoint_FalconStrike_Nuke_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Hardpoint_FalconStrike_Nuke_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C");
		return ptr;
	}

}


