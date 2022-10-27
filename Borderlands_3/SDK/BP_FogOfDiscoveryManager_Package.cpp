/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FogOfDiscoveryManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript");
		
		ABP_FogOfDiscoveryManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FogOfDiscoveryManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay");
		
		ABP_FogOfDiscoveryManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FogOfDiscoveryManager_C::Update_Map()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map");
		
		ABP_FogOfDiscoveryManager_C_Update_Map_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogOfDiscoveryManager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay");
		
		ABP_FogOfDiscoveryManager_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FogOfDiscoveryManager_C::Save_FOD_Texture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture");
		
		ABP_FogOfDiscoveryManager_C_Save_FOD_Texture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogOfDiscoveryManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick");
		
		ABP_FogOfDiscoveryManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogOfDiscoveryManager_C::ExecuteUbergraph_BP_FogOfDiscoveryManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager");
		
		ABP_FogOfDiscoveryManager_C_ExecuteUbergraph_BP_FogOfDiscoveryManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FogOfDiscoveryManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FogOfDiscoveryManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C");
		return ptr;
	}

}


