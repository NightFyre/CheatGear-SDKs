/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.RemoveVOIPUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPUserManager_C::RemoveVOIPUser(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.RemoveVOIPUser");
		
		UWBP_VOIPUserManager_C_RemoveVOIPUser_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.FindOrAddVOIPUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsRadio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWBP_VOIPUser_C*                             OutVOIPUser                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPUserManager_C::FindOrAddVOIPUser(class AGBPlayerState* PlayerState, bool bIsRadio, class UWBP_VOIPUser_C** OutVOIPUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.FindOrAddVOIPUser");
		
		UWBP_VOIPUserManager_C_FindOrAddVOIPUser_Params params {};
		params.PlayerState = PlayerState;
		params.bIsRadio = bIsRadio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVOIPUser != nullptr)
			*OutVOIPUser = params.OutVOIPUser;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_VOIPUserManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Construct");
		
		UWBP_VOIPUserManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerControllerStateChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPUserManager_C::OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerControllerStateChanged_Event_1");
		
		UWBP_VOIPUserManager_C_OnPlayerControllerStateChanged_Event_1_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_VOIPUserManager_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Update");
		
		UWBP_VOIPUserManager_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerReadyRoomStatusChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPUserManager_C::OnPlayerReadyRoomStatusChanged_Event_1(class AGBPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerReadyRoomStatusChanged_Event_1");
		
		UWBP_VOIPUserManager_C_OnPlayerReadyRoomStatusChanged_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnVOIPEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasRadio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_VOIPUserManager_C::OnVOIPEvent_Event_1(class AGBPlayerState* PlayerState, bool bIsTalking, bool bWasRadio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnVOIPEvent_Event_1");
		
		UWBP_VOIPUserManager_C_OnVOIPEvent_Event_1_Params params {};
		params.PlayerState = PlayerState;
		params.bIsTalking = bIsTalking;
		params.bWasRadio = bWasRadio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.ExecuteUbergraph_WBP_VOIPUserManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VOIPUserManager_C::ExecuteUbergraph_WBP_VOIPUserManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.ExecuteUbergraph_WBP_VOIPUserManager");
		
		UWBP_VOIPUserManager_C_ExecuteUbergraph_WBP_VOIPUserManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_VOIPUserManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VOIPUserManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VOIPUserManager.WBP_VOIPUserManager_C");
		return ptr;
	}

}


