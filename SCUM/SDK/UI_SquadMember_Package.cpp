/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.UpdateOptions
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::UpdateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.UpdateOptions");
		
		UUI_SquadMember_C_UpdateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDbIntegerId                                UserProfileId                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EConZSquadMemberRank                               Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FamePoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               online                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SquadMember_C::SetInfo(const struct FDbIntegerId& UserProfileId, const class FString& Name, EConZSquadMemberRank Rank, float FamePoints, bool online)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.SetInfo");
		
		UUI_SquadMember_C_SetInfo_Params params {};
		params.UserProfileId = UserProfileId;
		params.Name = Name;
		params.Rank = Rank;
		params.FamePoints = FamePoints;
		params.online = online;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.PromoteConfirmed
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::PromoteConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.PromoteConfirmed");
		
		UUI_SquadMember_C_PromoteConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.PromoteCanceled
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::PromoteCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.PromoteCanceled");
		
		UUI_SquadMember_C_PromoteCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.DemoteConfirmed
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::DemoteConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.DemoteConfirmed");
		
		UUI_SquadMember_C_DemoteConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.DemoteCanceled
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::DemoteCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.DemoteCanceled");
		
		UUI_SquadMember_C_DemoteCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.KickConfirmed
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::KickConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.KickConfirmed");
		
		UUI_SquadMember_C_KickConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.KickCanceled
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::KickCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.KickCanceled");
		
		UUI_SquadMember_C_KickCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.MakeLeaderConfirmed
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::MakeLeaderConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.MakeLeaderConfirmed");
		
		UUI_SquadMember_C_MakeLeaderConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.MakeLeaderCanceled
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::MakeLeaderCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.MakeLeaderCanceled");
		
		UUI_SquadMember_C_MakeLeaderCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SquadMember_C::BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadMember.UI_SquadMember_C.ExecuteUbergraph_UI_SquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadMember_C::ExecuteUbergraph_UI_SquadMember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadMember.UI_SquadMember_C.ExecuteUbergraph_UI_SquadMember");
		
		UUI_SquadMember_C_ExecuteUbergraph_UI_SquadMember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadMember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadMember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadMember.UI_SquadMember_C");
		return ptr;
	}

}


