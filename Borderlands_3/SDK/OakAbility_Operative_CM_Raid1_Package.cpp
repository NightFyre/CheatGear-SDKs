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
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Operative_CM_Raid1_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnActivated");
		
		UOakAbility_Operative_CM_Raid1_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Operative_CM_Raid1_C::OnStartSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStartSliding");
		
		UOakAbility_Operative_CM_Raid1_C_OnStartSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlideEndedDetails                          Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UOakAbility_Operative_CM_Raid1_C::OnStopSliding(const struct FSlideEndedDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.OnStopSliding");
		
		UOakAbility_Operative_CM_Raid1_C_OnStopSliding_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Operative_CM_Raid1_C::StartClassModBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StartClassModBonus");
		
		UOakAbility_Operative_CM_Raid1_C_StartClassModBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Operative_CM_Raid1_C::StopClassModBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.StopClassModBonus");
		
		UOakAbility_Operative_CM_Raid1_C_StopClassModBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Operative_CM_Raid1_C::ExecuteUbergraph_OakAbility_Operative_CM_Raid1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C.ExecuteUbergraph_OakAbility_Operative_CM_Raid1");
		
		UOakAbility_Operative_CM_Raid1_C_ExecuteUbergraph_OakAbility_Operative_CM_Raid1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Operative_CM_Raid1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Operative_CM_Raid1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_CM_Raid1.OakAbility_Operative_CM_Raid1_C");
		return ptr;
	}

}


