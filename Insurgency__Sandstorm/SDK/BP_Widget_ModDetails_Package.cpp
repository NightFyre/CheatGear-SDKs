/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_ModDetails_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnKeyDown");
		
		UBP_Widget_ModDetails_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.SetRateButtonsEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::SetRateButtonsEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.SetRateButtonsEnabled");
		
		UBP_Widget_ModDetails_C_SetRateButtonsEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::UpdateSubscribedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedState");
		
		UBP_Widget_ModDetails_C_UpdateSubscribedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedButtonState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSubscribed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::UpdateSubscribedButtonState(bool bSubscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedButtonState");
		
		UBP_Widget_ModDetails_C_UpdateSubscribedButtonState_Params params {};
		params.bSubscribed = bSubscribed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateModData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FModObject                                  NewModData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Widget_ModDetails_C::UpdateModData(const struct FModObject& NewModData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateModData");
		
		UBP_Widget_ModDetails_C_UpdateModData_Params params {};
		params.NewModData = NewModData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.InternalUpdateModData
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::InternalUpdateModData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.InternalUpdateModData");
		
		UBP_Widget_ModDetails_C_InternalUpdateModData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_ModDetails_C::OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE");
		
		UBP_Widget_ModDetails_C_OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnUnsubscribed_36C17F4049A426DB22712494EAD5839B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::OnUnsubscribed_36C17F4049A426DB22712494EAD5839B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnUnsubscribed_36C17F4049A426DB22712494EAD5839B");
		
		UBP_Widget_ModDetails_C_OnUnsubscribed_36C17F4049A426DB22712494EAD5839B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRated_172200CB49810EECB2BFBE8010CAF237
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::OnModRated_172200CB49810EECB2BFBE8010CAF237(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRated_172200CB49810EECB2BFBE8010CAF237");
		
		UBP_Widget_ModDetails_C_OnModRated_172200CB49810EECB2BFBE8010CAF237_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRatingsReceived_6E37F70043A39855536685911855CDC0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGetUserRatingsSchema                       Ratings                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Widget_ModDetails_C::OnModRatingsReceived_6E37F70043A39855536685911855CDC0(bool bSuccess, const struct FGetUserRatingsSchema& Ratings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRatingsReceived_6E37F70043A39855536685911855CDC0");
		
		UBP_Widget_ModDetails_C_OnModRatingsReceived_6E37F70043A39855536685911855CDC0_Params params {};
		params.bSuccess = bSuccess;
		params.Ratings = Ratings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.Construct");
		
		UBP_Widget_ModDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ContextValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ContextIntValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature_Params params {};
		params.ContextValue = ContextValue;
		params.ContextIntValue = ContextIntValue;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ContextValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ContextIntValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature_Params params {};
		params.ContextValue = ContextValue;
		params.ContextIntValue = ContextIntValue;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ContextValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ContextIntValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature_Params params {};
		params.ContextValue = ContextValue;
		params.ContextIntValue = ContextIntValue;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateImagesForRating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Rating                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDetails_C::UpdateImagesForRating(int32_t Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateImagesForRating");
		
		UBP_Widget_ModDetails_C_UpdateImagesForRating_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.RateMod
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Rating                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDetails_C::RateMod(int32_t Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.RateMod");
		
		UBP_Widget_ModDetails_C_RateMod_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscriptionsUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FModObject>                          Mods                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDetails_C::OnSubscriptionsUpdated(TArray<struct FModObject> Mods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscriptionsUpdated");
		
		UBP_Widget_ModDetails_C_OnSubscriptionsUpdated_Params params {};
		params.Mods = Mods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateCurrentRating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::UpdateCurrentRating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateCurrentRating");
		
		UBP_Widget_ModDetails_C_UpdateCurrentRating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigateNextImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::NavigateNextImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigateNextImage");
		
		UBP_Widget_ModDetails_C_NavigateNextImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigatePreviousImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::NavigatePreviousImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigatePreviousImage");
		
		UBP_Widget_ModDetails_C_NavigatePreviousImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ModDetails_C::BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");
		
		UBP_Widget_ModDetails_C_BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.ExecuteUbergraph_BP_Widget_ModDetails
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModDetails_C::ExecuteUbergraph_BP_Widget_ModDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.ExecuteUbergraph_BP_Widget_ModDetails");
		
		UBP_Widget_ModDetails_C_ExecuteUbergraph_BP_Widget_ModDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_ModDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_ModDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_ModDetails.BP_Widget_ModDetails_C");
		return ptr;
	}

}


