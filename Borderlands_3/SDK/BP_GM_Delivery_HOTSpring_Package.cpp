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
	 * 		Name   -> Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GM_Delivery_HOTSpring_C::K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeBeginPlay");
		
		UBP_GM_Delivery_HOTSpring_C_K2_GrenadeBeginPlay_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeExplode
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AGrenade*                                    Grenade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGrenadeMod*                                 GrenadeMod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GM_Delivery_HOTSpring_C::K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C.K2_GrenadeExplode");
		
		UBP_GM_Delivery_HOTSpring_C_K2_GrenadeExplode_Params params {};
		params.Grenade = Grenade;
		params.GrenadeMod = GrenadeMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GM_Delivery_HOTSpring_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GM_Delivery_HOTSpring_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_HOTSpring.BP_GM_Delivery_HOTSpring_C");
		return ptr;
	}

}


