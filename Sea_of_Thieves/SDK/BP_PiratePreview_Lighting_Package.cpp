/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PiratePreview_Lighting_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.UserConstructionScript");
		
		ABP_PiratePreview_Lighting_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPiratePreviewReadyEvent                    Data                                                       (Parm)
	 */
	void ABP_PiratePreview_Lighting_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewReady__DelegateSignature");
		
		ABP_PiratePreview_Lighting_C_PreviewReady__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPiratePreviewBusyEvent                     Data                                                       (Parm)
	 */
	void ABP_PiratePreview_Lighting_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C.PreviewBusy__DelegateSignature");
		
		ABP_PiratePreview_Lighting_C_PreviewBusy__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PiratePreview_Lighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PiratePreview_Lighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C");
		return ptr;
	}

}


