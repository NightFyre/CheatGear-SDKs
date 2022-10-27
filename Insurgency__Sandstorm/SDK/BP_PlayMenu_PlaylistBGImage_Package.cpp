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
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.StartFadein
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::StartFadein(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.StartFadein");
		
		UBP_PlayMenu_PlaylistBGImage_C_StartFadein_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.PreConstruct");
		
		UBP_PlayMenu_PlaylistBGImage_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.Construct");
		
		UBP_PlayMenu_PlaylistBGImage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnAnimationFinished");
		
		UBP_PlayMenu_PlaylistBGImage_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage");
		
		UBP_PlayMenu_PlaylistBGImage_C_ExecuteUbergraph_BP_PlayMenu_PlaylistBGImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnFadeinComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FadedInWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBGImage_C::OnFadeinComplete__DelegateSignature(class UWidget* FadedInWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C.OnFadeinComplete__DelegateSignature");
		
		UBP_PlayMenu_PlaylistBGImage_C_OnFadeinComplete__DelegateSignature_Params params {};
		params.FadedInWidget = FadedInWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayMenu_PlaylistBGImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayMenu_PlaylistBGImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayMenu_PlaylistBGImage.BP_PlayMenu_PlaylistBGImage_C");
		return ptr;
	}

}


