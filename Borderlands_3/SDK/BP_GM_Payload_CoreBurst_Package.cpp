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
	 * 		Name   -> Function BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C.K2_GrenadeImpact
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_CoreBurst_C::K2_GrenadeImpact(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const struct FHitResult& HitResult, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C.K2_GrenadeImpact");
		
		UBP_GM_Payload_CoreBurst_C_K2_GrenadeImpact_Params params {};
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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C.K2_GrenadeBeginPlay
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_CoreBurst_C::K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C.K2_GrenadeBeginPlay");
		
		UBP_GM_Payload_CoreBurst_C_K2_GrenadeBeginPlay_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GM_Payload_CoreBurst_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GM_Payload_CoreBurst_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C");
		return ptr;
	}

}


