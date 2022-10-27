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
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBPAnim_IronCub_C*                           AnimGraph                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeaponType_Hardpoints_Base_C::GetIronCubAnimBP(class UBPAnim_IronCub_C** AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP");
		
		AWeaponType_Hardpoints_Base_C_GetIronCubAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBPAnim_IronBear_1st_C*                      AnimGraph_1st                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPAnim_IronBear_3rd_C*                      AnimGraph_3rd                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeaponType_Hardpoints_Base_C::GetIronBearAnimBPs(class UBPAnim_IronBear_1st_C** AnimGraph_1st, class UBPAnim_IronBear_3rd_C** AnimGraph_3rd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs");
		
		AWeaponType_Hardpoints_Base_C_GetIronBearAnimBPs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph_1st != nullptr)
			*AnimGraph_1st = params.AnimGraph_1st;
		if (AnimGraph_3rd != nullptr)
			*AnimGraph_3rd = params.AnimGraph_3rd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript");
		
		AWeaponType_Hardpoints_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_Base_C::BeginHardPointAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction");
		
		AWeaponType_Hardpoints_Base_C_BeginHardPointAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_Base_C::EndHardPointAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction");
		
		AWeaponType_Hardpoints_Base_C_EndHardPointAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_Base_C::K2_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize");
		
		AWeaponType_Hardpoints_Base_C_K2_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeaponType_Hardpoints_Base_C::InitializeHardPointIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub");
		
		AWeaponType_Hardpoints_Base_C_InitializeHardPointIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeaponType_Hardpoints_Base_C::ExecuteUbergraph_WeaponType_Hardpoints_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base");
		
		AWeaponType_Hardpoints_Base_C_ExecuteUbergraph_WeaponType_Hardpoints_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeaponType_Hardpoints_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeaponType_Hardpoints_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C");
		return ptr;
	}

}


