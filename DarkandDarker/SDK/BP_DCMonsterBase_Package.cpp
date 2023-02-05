/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBase_C::OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83");
		
		ABP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceivePreInitializeComponents
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DCMonsterBase_C::ReceivePreInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceivePreInitializeComponents");
		
		ABP_DCMonsterBase_C_ReceivePreInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgSoundEvent                              Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_DCMonsterBase_C::EventFMsgSoundEvent(const struct FMsgSoundEvent& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent");
		
		ABP_DCMonsterBase_C_EventFMsgSoundEvent_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemData>                           ResultItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_DCMonsterBase_C::BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(TArray<struct FItemData>* ResultItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature");
		
		ABP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultItems != nullptr)
			*ResultItems = params.ResultItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Interacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                StateTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                TriggerTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DCMonsterBase_C::InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed");
		
		ABP_DCMonsterBase_C_InteractSucceed_Params params {};
		params.Interacter = Interacter;
		params.StateTag = StateTag;
		params.TriggerTag = TriggerTag;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DCMonsterBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceiveBeginPlay");
		
		ABP_DCMonsterBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBase_C::ExecuteUbergraph_BP_DCMonsterBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase");
		
		ABP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DCMonsterBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DCMonsterBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DCMonsterBase.BP_DCMonsterBase_C");
		return ptr;
	}

}


