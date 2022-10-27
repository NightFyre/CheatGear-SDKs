/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerMetaData
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ServerDetails_C::UpdateServerMetaData(struct FServerInfo* ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerMetaData");
		
		UWBP_ServerDetails_C_UpdateServerMetaData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServerInfo != nullptr)
			*ServerInfo = params.ServerInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerData
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ServerDetails_C::UpdateServerData(struct FServerInfo* ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerData");
		
		UWBP_ServerDetails_C_UpdateServerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ServerInfo != nullptr)
			*ServerInfo = params.ServerInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.SetupServerDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ServerDetails_C::SetupServerDetails(const struct FServerInfo& ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.SetupServerDetails");
		
		UWBP_ServerDetails_C_SetupServerDetails_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_ServerDetails_C::BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ServerDetails_C_BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.ExecuteUbergraph_WBP_ServerDetails
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ServerDetails_C::ExecuteUbergraph_WBP_ServerDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.ExecuteUbergraph_WBP_ServerDetails");
		
		UWBP_ServerDetails_C_ExecuteUbergraph_WBP_ServerDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ServerDetails.WBP_ServerDetails_C.OnJoinServerBtnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ServerDetails_C::OnJoinServerBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ServerDetails.WBP_ServerDetails_C.OnJoinServerBtnClicked__DelegateSignature");
		
		UWBP_ServerDetails_C_OnJoinServerBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ServerDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ServerDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerDetails.WBP_ServerDetails_C");
		return ptr;
	}

}


