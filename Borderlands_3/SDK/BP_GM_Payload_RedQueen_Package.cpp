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
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeLastBounce
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_GrenadeLastBounce(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeLastBounce");
		
		UBP_GM_Payload_RedQueen_C_K2_GrenadeLastBounce_Params params {};
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
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeExplode");
		
		UBP_GM_Payload_RedQueen_C_K2_GrenadeExplode_Params params {};
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
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeInitialized
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeInitialized");
		
		UBP_GM_Payload_RedQueen_C_K2_GrenadeInitialized_Params params {};
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
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_UpdateChildGeneration
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGrenadeChildGenerationData                 InGenerationData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FGrenadeChildGenerationData                 GenerationData                                             (Parm, OutParm, NoDestructor)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_UpdateChildGeneration(const struct FGrenadeChildGenerationData& InGenerationData, struct FGrenadeChildGenerationData* GenerationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_UpdateChildGeneration");
		
		UBP_GM_Payload_RedQueen_C_K2_UpdateChildGeneration_Params params {};
		params.InGenerationData = InGenerationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GenerationData != nullptr)
			*GenerationData = params.GenerationData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_NativeDelayCallback
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FName                                        DelayName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_NativeDelayCallback(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData, const class FName& DelayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_NativeDelayCallback");
		
		UBP_GM_Payload_RedQueen_C_K2_NativeDelayCallback_Params params {};
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
	 * 		Name   -> Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeBeginPlay
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPayloadInstanceData                        InstanceData                                               (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_GM_Payload_RedQueen_C::K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C.K2_GrenadeBeginPlay");
		
		UBP_GM_Payload_RedQueen_C_K2_GrenadeBeginPlay_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_GM_Payload_RedQueen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GM_Payload_RedQueen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_RedQueen.BP_GM_Payload_RedQueen_C");
		return ptr;
	}

}


