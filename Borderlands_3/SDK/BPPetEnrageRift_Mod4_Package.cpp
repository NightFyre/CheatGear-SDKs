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
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InLinkedTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_Mod4_C::PlayFeedback(class AActor* InLinkedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.PlayFeedback");
		
		ABPPetEnrageRift_Mod4_C_PlayFeedback_Params params {};
		params.InLinkedTarget = InLinkedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UPrimitiveComponent* ABPPetEnrageRift_Mod4_C::GetOverlapComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.GetOverlapComponent");
		
		ABPPetEnrageRift_Mod4_C_GetOverlapComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPPetEnrageRift_Mod4_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.UserConstructionScript");
		
		ABPPetEnrageRift_Mod4_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPPetEnrageRift_Mod4_C::OnShutdownRequested(bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnShutdownRequested");
		
		ABPPetEnrageRift_Mod4_C_OnShutdownRequested_Params params {};
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               InLinkedTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_Mod4_C::OnLinkedTargetAdded(class AOakCharacter* InLinkedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetAdded");
		
		ABPPetEnrageRift_Mod4_C_OnLinkedTargetAdded_Params params {};
		params.InLinkedTarget = InLinkedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               InLinkedTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_Mod4_C::OnLinkedTargetRemoved(class AOakCharacter* InLinkedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.OnLinkedTargetRemoved");
		
		ABPPetEnrageRift_Mod4_C_OnLinkedTargetRemoved_Params params {};
		params.InLinkedTarget = InLinkedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPPetEnrageRift_Mod4_C::ExecuteUbergraph_BPPetEnrageRift_Mod4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C.ExecuteUbergraph_BPPetEnrageRift_Mod4");
		
		ABPPetEnrageRift_Mod4_C_ExecuteUbergraph_BPPetEnrageRift_Mod4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPPetEnrageRift_Mod4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPPetEnrageRift_Mod4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C");
		return ptr;
	}

}


