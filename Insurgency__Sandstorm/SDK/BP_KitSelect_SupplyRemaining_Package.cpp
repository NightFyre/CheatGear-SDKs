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
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.CanPlayerResupply
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bCanResupply                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_SupplyRemaining_C::CanPlayerResupply(bool* bCanResupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.CanPlayerResupply");
		
		UBP_KitSelect_SupplyRemaining_C_CanPlayerResupply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanResupply != nullptr)
			*bCanResupply = params.bCanResupply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumberPreview
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSupply                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_SupplyRemaining_C::UpdateSupplyNumberPreview(int32_t NewSupply, bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumberPreview");
		
		UBP_KitSelect_SupplyRemaining_C_UpdateSupplyNumberPreview_Params params {};
		params.NewSupply = NewSupply;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSupply                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SupplyRemaining_C::UpdateSupplyNumber(int32_t NewSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateSupplyNumber");
		
		UBP_KitSelect_SupplyRemaining_C_UpdateSupplyNumber_Params params {};
		params.NewSupply = NewSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ActivateResupplyButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::ActivateResupplyButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ActivateResupplyButton");
		
		UBP_KitSelect_SupplyRemaining_C_ActivateResupplyButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.TimerFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::TimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.TimerFinished");
		
		UBP_KitSelect_SupplyRemaining_C_TimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateCircularTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::UpdateCircularTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.UpdateCircularTimer");
		
		UBP_KitSelect_SupplyRemaining_C_UpdateCircularTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.SetResupplyButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_SupplyRemaining_C::SetResupplyButtonVisibility(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.SetResupplyButtonVisibility");
		
		UBP_KitSelect_SupplyRemaining_C_SetResupplyButtonVisibility_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetPreviewSupplyAmountText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_SupplyRemaining_C::GetPreviewSupplyAmountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetPreviewSupplyAmountText");
		
		UBP_KitSelect_SupplyRemaining_C_GetPreviewSupplyAmountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetSupplyRemainingAmountText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_KitSelect_SupplyRemaining_C::GetSupplyRemainingAmountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetSupplyRemainingAmountText");
		
		UBP_KitSelect_SupplyRemaining_C_GetSupplyRemainingAmountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetFgColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_KitSelect_SupplyRemaining_C::GetFgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.GetFgColor");
		
		UBP_KitSelect_SupplyRemaining_C_GetFgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Construct");
		
		UBP_KitSelect_SupplyRemaining_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__ResupplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnPlayerSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSSoldier*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SupplyRemaining_C::OnPlayerSpawned(class AINSSoldier* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnPlayerSpawned");
		
		UBP_KitSelect_SupplyRemaining_C_OnPlayerSpawned_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SupplyRemaining_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.Tick");
		
		UBP_KitSelect_SupplyRemaining_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.PlayFlashAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::PlayFlashAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.PlayFlashAnimation");
		
		UBP_KitSelect_SupplyRemaining_C_PlayFlashAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_BndEvt__DeployButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ExecuteUbergraph_BP_KitSelect_SupplyRemaining
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_SupplyRemaining_C::ExecuteUbergraph_BP_KitSelect_SupplyRemaining(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.ExecuteUbergraph_BP_KitSelect_SupplyRemaining");
		
		UBP_KitSelect_SupplyRemaining_C_ExecuteUbergraph_BP_KitSelect_SupplyRemaining_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnDeployButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::OnDeployButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnDeployButtonPressed__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_OnDeployButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnResupplyButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_SupplyRemaining_C::OnResupplyButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C.OnResupplyButtonPressed__DelegateSignature");
		
		UBP_KitSelect_SupplyRemaining_C_OnResupplyButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_SupplyRemaining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_SupplyRemaining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_SupplyRemaining.BP_KitSelect_SupplyRemaining_C");
		return ptr;
	}

}


