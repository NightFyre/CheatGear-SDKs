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
	 * 		Name   -> Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_SpiritOfMaya_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnRegistered");
		
		UAbility_SpiritOfMaya_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitFriendlyEventDetails                    Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAbility_SpiritOfMaya_C::OnHitFriendly(const struct FHitFriendlyEventDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.OnHitFriendly");
		
		UAbility_SpiritOfMaya_C_OnHitFriendly_Params params {};
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_SpiritOfMaya_C::ExecuteUbergraph_Ability_SpiritOfMaya(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_SpiritOfMaya.Ability_SpiritOfMaya_C.ExecuteUbergraph_Ability_SpiritOfMaya");
		
		UAbility_SpiritOfMaya_C_ExecuteUbergraph_Ability_SpiritOfMaya_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_SpiritOfMaya_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_SpiritOfMaya_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_SpiritOfMaya.Ability_SpiritOfMaya_C");
		return ptr;
	}

}


