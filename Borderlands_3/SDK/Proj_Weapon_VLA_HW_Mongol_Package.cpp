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
	 * 		Name   -> Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_VLA_HW_Mongol_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.UserConstructionScript");
		
		AProj_Weapon_VLA_HW_Mongol_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Weapon_VLA_HW_Mongol_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ReceiveBeginPlay");
		
		AProj_Weapon_VLA_HW_Mongol_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ContinueFiring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_VLA_HW_Mongol_C::ContinueFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ContinueFiring");
		
		AProj_Weapon_VLA_HW_Mongol_C_ContinueFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.FireVolley
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_VLA_HW_Mongol_C::FireVolley()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.FireVolley");
		
		AProj_Weapon_VLA_HW_Mongol_C_FireVolley_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_VLA_HW_Mongol_C::ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol");
		
		AProj_Weapon_VLA_HW_Mongol_C_ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Weapon_VLA_HW_Mongol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Weapon_VLA_HW_Mongol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C");
		return ptr;
	}

}


