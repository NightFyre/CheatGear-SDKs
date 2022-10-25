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
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.SetFocusOnChild
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayList_C::SetFocusOnChild(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.SetFocusOnChild");
		
		UBP_ReplayList_C_SetFocusOnChild_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.GetReplayIdFromTimestamp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   Timestamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayList_C::GetReplayIdFromTimestamp(const struct FDateTime& Timestamp, int32_t* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.GetReplayIdFromTimestamp");
		
		UBP_ReplayList_C_GetReplayIdFromTimestamp_Params params {};
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.ClearChildren
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayList_C::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.ClearChildren");
		
		UBP_ReplayList_C_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ReplayList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.Construct");
		
		UBP_ReplayList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamsUpdate
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FReplayBrowserInfo>                  Streams                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ReplayList_C::OnRecentStreamsUpdate(TArray<struct FReplayBrowserInfo> Streams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamsUpdate");
		
		UBP_ReplayList_C_OnRecentStreamsUpdate_Params params {};
		params.Streams = Streams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamTravelTo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FReplayBrowserInfo                          ReplayInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ReplayList_C::OnRecentStreamTravelTo(const struct FReplayBrowserInfo& ReplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.OnRecentStreamTravelTo");
		
		UBP_ReplayList_C_OnRecentStreamTravelTo_Params params {};
		params.ReplayInfo = ReplayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.OnSendToTrash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_ReplayListRow_C*                         ReplayListRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayList_C::OnSendToTrash(class UBP_ReplayListRow_C* ReplayListRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.OnSendToTrash");
		
		UBP_ReplayList_C_OnSendToTrash_Params params {};
		params.ReplayListRow = ReplayListRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayList.BP_ReplayList_C.ExecuteUbergraph_BP_ReplayList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayList_C::ExecuteUbergraph_BP_ReplayList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayList.BP_ReplayList_C.ExecuteUbergraph_BP_ReplayList");
		
		UBP_ReplayList_C_ExecuteUbergraph_BP_ReplayList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ReplayList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ReplayList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReplayList.BP_ReplayList_C");
		return ptr;
	}

}


