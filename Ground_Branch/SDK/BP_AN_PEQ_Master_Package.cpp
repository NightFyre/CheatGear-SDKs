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
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.GatherAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     OutAssets                                                  (Parm, OutParm)
	 */
	void ABP_AN_PEQ_Master_C::GatherAssets(TArray<struct FSoftObjectPath>* OutAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.GatherAssets");
		
		ABP_AN_PEQ_Master_C_GatherAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssets != nullptr)
			*OutAssets = params.OutAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminator_High
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnRep_bIlluminator_High()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminator_High");
		
		ABP_AN_PEQ_Master_C_OnRep_bIlluminator_High_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bMode_IRLaser
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnRep_bMode_IRLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bMode_IRLaser");
		
		ABP_AN_PEQ_Master_C_OnRep_bMode_IRLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminatorActive
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnRep_bIlluminatorActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bIlluminatorActive");
		
		ABP_AN_PEQ_Master_C_OnRep_bIlluminatorActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bLaserActive
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnRep_bLaserActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRep_bLaserActive");
		
		ABP_AN_PEQ_Master_C_OnRep_bLaserActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AllowUsageWhileAttached
	 * 		Flags  -> ()
	 */
	bool ABP_AN_PEQ_Master_C::AllowUsageWhileAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AllowUsageWhileAttached");
		
		ABP_AN_PEQ_Master_C_AllowUsageWhileAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_ToggleLaser_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_7");
		
		ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaser_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_ToggleLaser_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaser_K2Node_InputActionEvent_6");
		
		ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaser_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5");
		
		ABP_AN_PEQ_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4");
		
		ABP_AN_PEQ_Master_C_InpActEvt_ToggleLightSource_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3");
		
		ABP_AN_PEQ_Master_C_InpActEvt_IncreaseReticleBrightnessLevel_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2");
		
		ABP_AN_PEQ_Master_C_InpActEvt_DecreaseReticleBrightnessLevel_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1");
		
		ABP_AN_PEQ_Master_C_InpActEvt_ToggleLaserMode_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddAttachedUseMenuEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UsageMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::AddAttachedUseMenuEntries(class UUserWidget* UsageMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddAttachedUseMenuEntries");
		
		ABP_AN_PEQ_Master_C_AddAttachedUseMenuEntries_Params params {};
		params.UsageMenu = UsageMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Laser_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnSelected_Laser_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Laser_Event");
		
		ABP_AN_PEQ_Master_C_OnSelected_Laser_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStartUsing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnStartUsing(int32_t UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStartUsing");
		
		ABP_AN_PEQ_Master_C_OnStartUsing_Params params {};
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddLaserEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_RadialMenu_C*                           UsageMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::AddLaserEntry(class UWBP_RadialMenu_C* UsageMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddLaserEntry");
		
		ABP_AN_PEQ_Master_C_AddLaserEntry_Params params {};
		params.UsageMenu = UsageMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InternalUpdateLaser
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::InternalUpdateLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InternalUpdateLaser");
		
		ABP_AN_PEQ_Master_C_InternalUpdateLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.CharacterPlayDying_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::CharacterPlayDying_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.CharacterPlayDying_Event_1");
		
		ABP_AN_PEQ_Master_C_CharacterPlayDying_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ReceiveBeginPlay");
		
		ABP_AN_PEQ_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLocalPlayerTagsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLocalPlayerTagsUpdated_Event_1");
		
		ABP_AN_PEQ_Master_C_OnLocalPlayerTagsUpdated_Event_1_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InteralUpdateIlluminatorStatus
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::InteralUpdateIlluminatorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.InteralUpdateIlluminatorStatus");
		
		ABP_AN_PEQ_Master_C_InteralUpdateIlluminatorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddIlluminatorEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_RadialMenu_C*                           UsageMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::AddIlluminatorEntry(class UWBP_RadialMenu_C* UsageMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.AddIlluminatorEntry");
		
		ABP_AN_PEQ_Master_C_AddIlluminatorEntry_Params params {};
		params.UsageMenu = UsageMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Illuminator_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnSelected_Illuminator_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_Illuminator_Event");
		
		ABP_AN_PEQ_Master_C_OnSelected_Illuminator_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.BindToLocalPlayerTagsUpdated
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::BindToLocalPlayerTagsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.BindToLocalPlayerTagsUpdated");
		
		ABP_AN_PEQ_Master_C_BindToLocalPlayerTagsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStopUsing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnStopUsing(int32_t UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnStopUsing");
		
		ABP_AN_PEQ_Master_C_OnStopUsing_Params params {};
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_LaserMode_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::OnSelected_LaserMode_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnSelected_LaserMode_Event");
		
		ABP_AN_PEQ_Master_C_OnSelected_LaserMode_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.DisplayLaserModeChangeMessage
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::DisplayLaserModeChangeMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.DisplayLaserModeChangeMessage");
		
		ABP_AN_PEQ_Master_C_DisplayLaserModeChangeMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingUnequipped");
		
		ABP_AN_PEQ_Master_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnBeingEquipped");
		
		ABP_AN_PEQ_Master_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetLaserActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLaserActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AN_PEQ_Master_C::MulticastSetLaserActive(bool bLaserActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetLaserActive");
		
		ABP_AN_PEQ_Master_C_MulticastSetLaserActive_Params params {};
		params.bLaserActive = bLaserActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIlluminatorActive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AN_PEQ_Master_C::MulticastSetIlluminatorActive(bool bIlluminatorActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorActive");
		
		ABP_AN_PEQ_Master_C_MulticastSetIlluminatorActive_Params params {};
		params.bIlluminatorActive = bIlluminatorActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticasModeIRLaser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMode_IRLaser                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AN_PEQ_Master_C::MulticasModeIRLaser(bool bMode_IRLaser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticasModeIRLaser");
		
		ABP_AN_PEQ_Master_C_MulticasModeIRLaser_Params params {};
		params.bMode_IRLaser = bMode_IRLaser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorHigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIlluminator_High                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AN_PEQ_Master_C::MulticastSetIlluminatorHigh(bool bIlluminator_High)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.MulticastSetIlluminatorHigh");
		
		ABP_AN_PEQ_Master_C_MulticastSetIlluminatorHigh_Params params {};
		params.bIlluminator_High = bIlluminator_High;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLoadAssetsComplete
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnLoadAssetsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnLoadAssetsComplete");
		
		ABP_AN_PEQ_Master_C_OnLoadAssetsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnAddedToInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnAddedToInventoryEvent");
		
		ABP_AN_PEQ_Master_C_OnAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRemovedFromInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_AN_PEQ_Master_C::OnRemovedFromInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.OnRemovedFromInventoryEvent");
		
		ABP_AN_PEQ_Master_C_OnRemovedFromInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ExecuteUbergraph_BP_AN_PEQ_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AN_PEQ_Master_C::ExecuteUbergraph_BP_AN_PEQ_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PEQ_Master.BP_AN_PEQ_Master_C.ExecuteUbergraph_BP_AN_PEQ_Master");
		
		ABP_AN_PEQ_Master_C_ExecuteUbergraph_BP_AN_PEQ_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AN_PEQ_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AN_PEQ_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AN_PEQ_Master.BP_AN_PEQ_Master_C");
		return ptr;
	}

}


