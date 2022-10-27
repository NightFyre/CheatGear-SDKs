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
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.SetNextOpenImmediate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlaylistBG_C::SetNextOpenImmediate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.SetNextOpenImmediate");
		
		UBP_PlayMenu_PlaylistBG_C_SetNextOpenImmediate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.OnNewImageTransitioned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBG_C::OnNewImageTransitioned(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.OnNewImageTransitioned");
		
		UBP_PlayMenu_PlaylistBG_C_OnNewImageTransitioned_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.TransitionTo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBG_C::TransitionTo(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.TransitionTo");
		
		UBP_PlayMenu_PlaylistBG_C_TransitionTo_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_PlaylistBG_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.PreConstruct");
		
		UBP_PlayMenu_PlaylistBG_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_PlaylistBG_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.Construct");
		
		UBP_PlayMenu_PlaylistBG_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBG
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_PlaylistBG_C::ExecuteUbergraph_BP_PlayMenu_PlaylistBG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBG");
		
		UBP_PlayMenu_PlaylistBG_C_ExecuteUbergraph_BP_PlayMenu_PlaylistBG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayMenu_PlaylistBG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayMenu_PlaylistBG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C");
		return ptr;
	}

}


