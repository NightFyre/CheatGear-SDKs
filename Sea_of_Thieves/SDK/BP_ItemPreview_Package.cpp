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
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ItemPreview_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript");
		
		ABP_ItemPreview_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemPreview_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay");
		
		ABP_ItemPreview_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ItemPreview_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay");
		
		ABP_ItemPreview_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview");
		
		ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPiratePreviewShutdownEvent                 Data                                                       (Parm)
	 */
	void ABP_ItemPreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature");
		
		ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPiratePreviewReadyEvent                    Data                                                       (Parm)
	 */
	void ABP_ItemPreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature");
		
		ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPiratePreviewBusyEvent                     Data                                                       (Parm)
	 */
	void ABP_ItemPreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature");
		
		ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemPreview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C");
		return ptr;
	}

}


