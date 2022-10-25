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
	 * 		Name   -> Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FiregripType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GripType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScopeType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ModeType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseWeapon_Interface_C::BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWeapon_Interface.BaseWeapon_Interface_C.BPAnim_Data");
		
		UBaseWeapon_Interface_C_BPAnim_Data_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FiregripType != nullptr)
			*FiregripType = params.FiregripType;
		if (GripType != nullptr)
			*GripType = params.GripType;
		if (ScopeType != nullptr)
			*ScopeType = params.ScopeType;
		if (ModeType != nullptr)
			*ModeType = params.ModeType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ChargePercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseWeapon_Interface_C::GetChargePercent(float* ChargePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWeapon_Interface.BaseWeapon_Interface_C.GetChargePercent");
		
		UBaseWeapon_Interface_C_GetChargePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChargePercent != nullptr)
			*ChargePercent = params.ChargePercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseWeapon_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseWeapon_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseWeapon_Interface.BaseWeapon_Interface_C");
		return ptr;
	}

}


