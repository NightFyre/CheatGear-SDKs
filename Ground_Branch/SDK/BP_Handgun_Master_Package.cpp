/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.GetWeaponsPositionTransitionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGBWeaponPosition                                  FromPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGBWeaponPosition                                  ToPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Handgun_Master_C::GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.GetWeaponsPositionTransitionTime");
		
		ABP_Handgun_Master_C_GetWeaponsPositionTransitionTime_Params params {};
		params.FromPosition = FromPosition;
		params.ToPosition = ToPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.LockOnEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldLock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Handgun_Master_C::LockOnEmpty(bool* bShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.LockOnEmpty");
		
		ABP_Handgun_Master_C_LockOnEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldLock != nullptr)
			*bShouldLock = params.bShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.SetEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OutSwitchType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHandsRequired                                     OutHandsRequired                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Handgun_Master_C::SetEquipInfo(unsigned char* OutSwitchType, EHandsRequired* OutHandsRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.SetEquipInfo");
		
		ABP_Handgun_Master_C_SetEquipInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitchType != nullptr)
			*OutSwitchType = params.OutSwitchType;
		if (OutHandsRequired != nullptr)
			*OutHandsRequired = params.OutHandsRequired;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.PositionAlphaMet
	 * 		Flags  -> ()
	 */
	void ABP_Handgun_Master_C::PositionAlphaMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.PositionAlphaMet");
		
		ABP_Handgun_Master_C_PositionAlphaMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Handgun_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.ReceiveBeginPlay");
		
		ABP_Handgun_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Handgun_Master.BP_Handgun_Master_C.ExecuteUbergraph_BP_Handgun_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Handgun_Master_C::ExecuteUbergraph_BP_Handgun_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Handgun_Master.BP_Handgun_Master_C.ExecuteUbergraph_BP_Handgun_Master");
		
		ABP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Handgun_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Handgun_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Handgun_Master.BP_Handgun_Master_C");
		return ptr;
	}

}


