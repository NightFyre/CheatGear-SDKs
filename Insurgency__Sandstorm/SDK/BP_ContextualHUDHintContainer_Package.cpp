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
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateLoadoutHintImageIfAvailableSupply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextualHUDHintContainer_C::UpdateLoadoutHintImageIfAvailableSupply(int32_t A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateLoadoutHintImageIfAvailableSupply");
		
		UBP_ContextualHUDHintContainer_C_UpdateLoadoutHintImageIfAvailableSupply_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetAssets
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAssetName                                         AssetName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FChildAsset                                 Asset                                                      (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_ContextualHUDHintContainer_C::GetAssets(EAssetName AssetName, struct FChildAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetAssets");
		
		UBP_ContextualHUDHintContainer_C_GetAssets_Params params {};
		params.AssetName = AssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Asset != nullptr)
			*Asset = params.Asset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeOutAnimation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UWidgetAnimation* UBP_ContextualHUDHintContainer_C::GetFadeOutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeOutAnimation");
		
		UBP_ContextualHUDHintContainer_C_GetFadeOutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeInAnimation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UWidgetAnimation* UBP_ContextualHUDHintContainer_C::GetFadeInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeInAnimation");
		
		UBP_ContextualHUDHintContainer_C_GetFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateInputIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsGamePade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ContextualHUDHintContainer_C::UpdateInputIcon(bool IsGamePade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateInputIcon");
		
		UBP_ContextualHUDHintContainer_C_UpdateInputIcon_Params params {};
		params.IsGamePade = IsGamePade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UsingControllerUpdate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    NewIconType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextualHUDHintContainer_C::UsingControllerUpdate(bool bUsingController, EeInputIconType NewIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UsingControllerUpdate");
		
		UBP_ContextualHUDHintContainer_C_UsingControllerUpdate_Params params {};
		params.bUsingController = bUsingController;
		params.NewIconType = NewIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ContextualHUDHintContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.Construct");
		
		UBP_ContextualHUDHintContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateChangeLoadoutHintImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AvailableSupply                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextualHUDHintContainer_C::UpdateChangeLoadoutHintImage(int32_t AvailableSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateChangeLoadoutHintImage");
		
		UBP_ContextualHUDHintContainer_C_UpdateChangeLoadoutHintImage_Params params {};
		params.AvailableSupply = AvailableSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.ExecuteUbergraph_BP_ContextualHUDHintContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ContextualHUDHintContainer_C::ExecuteUbergraph_BP_ContextualHUDHintContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.ExecuteUbergraph_BP_ContextualHUDHintContainer");
		
		UBP_ContextualHUDHintContainer_C_ExecuteUbergraph_BP_ContextualHUDHintContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ContextualHUDHintContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ContextualHUDHintContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C");
		return ptr;
	}

}


