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
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnRep_bLightActive
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::OnRep_bLightActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnRep_bLightActive");
		
		ABP_TacLight_Master_C_OnRep_bLightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.AllowUsageWhileAttached
	 * 		Flags  -> ()
	 */
	bool ABP_TacLight_Master_C::AllowUsageWhileAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.AllowUsageWhileAttached");
		
		ABP_TacLight_Master_C_AllowUsageWhileAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2");
		
		ABP_TacLight_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1");
		
		ABP_TacLight_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnStartUsing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::OnStartUsing(int32_t UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnStartUsing");
		
		ABP_TacLight_Master_C_OnStartUsing_Params params {};
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::OnSelected_Event_1(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnSelected_Event_1");
		
		ABP_TacLight_Master_C_OnSelected_Event_1_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.AddAttachedUseMenuEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UsageMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::AddAttachedUseMenuEntries(class UUserWidget* UsageMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.AddAttachedUseMenuEntries");
		
		ABP_TacLight_Master_C_AddAttachedUseMenuEntries_Params params {};
		params.UsageMenu = UsageMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.ReceiveBeginPlay");
		
		ABP_TacLight_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnLocalPlayerTagsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnLocalPlayerTagsUpdated_Event_1");
		
		ABP_TacLight_Master_C_OnLocalPlayerTagsUpdated_Event_1_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.InternalUpdateLight
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::InternalUpdateLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.InternalUpdateLight");
		
		ABP_TacLight_Master_C_InternalUpdateLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnStopUsing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::OnStopUsing(int32_t UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnStopUsing");
		
		ABP_TacLight_Master_C_OnStopUsing_Params params {};
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.CharacterPlayDying_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::CharacterPlayDying_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.CharacterPlayDying_Event_1");
		
		ABP_TacLight_Master_C_CharacterPlayDying_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingEquipped");
		
		ABP_TacLight_Master_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnBeingUnequipped");
		
		ABP_TacLight_Master_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.MulticastSetLightActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLightActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TacLight_Master_C::MulticastSetLightActive(bool bLightActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.MulticastSetLightActive");
		
		ABP_TacLight_Master_C_MulticastSetLightActive_Params params {};
		params.bLightActive = bLightActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnAddedToInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::OnAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnAddedToInventoryEvent");
		
		ABP_TacLight_Master_C_OnAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.OnRemovedFromInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_TacLight_Master_C::OnRemovedFromInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.OnRemovedFromInventoryEvent");
		
		ABP_TacLight_Master_C_OnRemovedFromInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TacLight_Master.BP_TacLight_Master_C.ExecuteUbergraph_BP_TacLight_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TacLight_Master_C::ExecuteUbergraph_BP_TacLight_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TacLight_Master.BP_TacLight_Master_C.ExecuteUbergraph_BP_TacLight_Master");
		
		ABP_TacLight_Master_C_ExecuteUbergraph_BP_TacLight_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TacLight_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TacLight_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TacLight_Master.BP_TacLight_Master_C");
		return ptr;
	}

}


