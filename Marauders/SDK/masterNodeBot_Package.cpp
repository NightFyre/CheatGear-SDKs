/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AmasterNodeBot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.UserConstructionScript");
		
		AmasterNodeBot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AmasterNodeBot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.ReceiveBeginPlay");
		
		AmasterNodeBot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmasterNodeBot_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.ReceiveTick");
		
		AmasterNodeBot_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.StartActiveEvent
	 * 		Flags  -> ()
	 */
	void AmasterNodeBot_C::StartActiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.StartActiveEvent");
		
		AmasterNodeBot_C_StartActiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.StartDeactiveEvent
	 * 		Flags  -> ()
	 */
	void AmasterNodeBot_C::StartDeactiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.StartDeactiveEvent");
		
		AmasterNodeBot_C_StartDeactiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.DismemberEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AmasterNodeBot_C::DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.DismemberEvent");
		
		AmasterNodeBot_C_DismemberEvent_Params params {};
		params.BoneHit = BoneHit;
		params.ImpactNorm = ImpactNorm;
		params.DamageTypeClass = DamageTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.OnProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AmasterNodeBot_C::OnProxyHitReact(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.OnProxyHitReact");
		
		AmasterNodeBot_C_OnProxyHitReact_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function masterNodeBot.masterNodeBot_C.ExecuteUbergraph_masterNodeBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmasterNodeBot_C::ExecuteUbergraph_masterNodeBot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function masterNodeBot.masterNodeBot_C.ExecuteUbergraph_masterNodeBot");
		
		AmasterNodeBot_C_ExecuteUbergraph_masterNodeBot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AmasterNodeBot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmasterNodeBot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass masterNodeBot.masterNodeBot_C");
		return ptr;
	}

}


