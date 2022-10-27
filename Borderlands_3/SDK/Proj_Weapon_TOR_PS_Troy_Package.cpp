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
	 * 		Name   -> Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_PS_Troy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.UserConstructionScript");
		
		AProj_Weapon_TOR_PS_Troy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_PS_Troy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ReceiveBeginPlay");
		
		AProj_Weapon_TOR_PS_Troy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.SpawnChildren
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Weapon_TOR_PS_Troy_C::SpawnChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.SpawnChildren");
		
		AProj_Weapon_TOR_PS_Troy_C_SpawnChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Weapon_TOR_PS_Troy_C::ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy");
		
		AProj_Weapon_TOR_PS_Troy_C_ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Weapon_TOR_PS_Troy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Weapon_TOR_PS_Troy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C");
		return ptr;
	}

}


