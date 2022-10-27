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
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeInitialized
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeInitialized");
		
		UBP_GM_Payload_WidowMaker_C_K2_GrenadeInitialized_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeStuckTo
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      StickTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_GrenadeStuckTo(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, class AActor* StickTarget, struct FPayloadInstanceData* InstanceData, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeStuckTo");
		
		UBP_GM_Payload_WidowMaker_C_K2_GrenadeStuckTo_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		params.StickTarget = StickTarget;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_StuckGrenadeOverlapped
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_StuckGrenadeOverlapped(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, class AActor* OverlappedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_StuckGrenadeOverlapped");
		
		UBP_GM_Payload_WidowMaker_C_K2_StuckGrenadeOverlapped_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		params.OverlappedActor = OverlappedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_NativeDelayCallback
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FName                                        DelayName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_NativeDelayCallback(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, const class FName& DelayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_NativeDelayCallback");
		
		UBP_GM_Payload_WidowMaker_C_K2_NativeDelayCallback_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		params.DelayName = DelayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeExplode
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeExplode");
		
		UBP_GM_Payload_WidowMaker_C_K2_GrenadeExplode_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeImpact
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_WidowMaker_C::K2_GrenadeImpact(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const struct FHitResult& HitResult, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C.K2_GrenadeImpact");
		
		UBP_GM_Payload_WidowMaker_C_K2_GrenadeImpact_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GM_Payload_WidowMaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GM_Payload_WidowMaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_WidowMaker.BP_GM_Payload_WidowMaker_C");
		return ptr;
	}

}


