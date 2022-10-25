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
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.GatherAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     OutAssets                                                  (Parm, OutParm)
	 */
	void UAnimAction_SwitchItem_Master_C::GatherAssets(TArray<struct FSoftObjectPath>* OutAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.GatherAssets");
		
		UAnimAction_SwitchItem_Master_C_GatherAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssets != nullptr)
			*OutAssets = params.OutAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_SwitchItem_Master_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TriggerAction");
		
		UAnimAction_SwitchItem_Master_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Equip
	 * 		Flags  -> ()
	 */
	void UAnimAction_SwitchItem_Master_C::Equip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Equip");
		
		UAnimAction_SwitchItem_Master_C_Equip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Unequip
	 * 		Flags  -> ()
	 */
	void UAnimAction_SwitchItem_Master_C::Unequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.Unequip");
		
		UAnimAction_SwitchItem_Master_C_Unequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_SwitchItem_Master_C::PlaySound(class UAkAudioEvent* AkEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.PlaySound");
		
		UAnimAction_SwitchItem_Master_C_PlaySound_Params params {};
		params.AkEvent = AkEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnLoadAssetsComplete
	 * 		Flags  -> ()
	 */
	void UAnimAction_SwitchItem_Master_C::OnLoadAssetsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnLoadAssetsComplete");
		
		UAnimAction_SwitchItem_Master_C_OnLoadAssetsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnMontageEndedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimAction_SwitchItem_Master_C::OnMontageEndedEvent(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.OnMontageEndedEvent");
		
		UAnimAction_SwitchItem_Master_C_OnMontageEndedEvent_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TryEndAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_SwitchItem_Master_C::TryEndAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.TryEndAction");
		
		UAnimAction_SwitchItem_Master_C_TryEndAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.ExecuteUbergraph_AnimAction_SwitchItem_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_SwitchItem_Master_C::ExecuteUbergraph_AnimAction_SwitchItem_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C.ExecuteUbergraph_AnimAction_SwitchItem_Master");
		
		UAnimAction_SwitchItem_Master_C_ExecuteUbergraph_AnimAction_SwitchItem_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_SwitchItem_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_SwitchItem_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_SwitchItem_Master.AnimAction_SwitchItem_Master_C");
		return ptr;
	}

}


