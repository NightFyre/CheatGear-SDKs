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
	 * 		Name   -> Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_SomeForTheRoad_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated");
		
		UPassive_Gunner_SomeForTheRoad_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_SomeForTheRoad_C::BronzeAgeRage_ExitedIronBear(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear");
		
		UPassive_Gunner_SomeForTheRoad_C_BronzeAgeRage_ExitedIronBear_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_SomeForTheRoad_C::ExecuteUbergraph_Passive_Gunner_SomeForTheRoad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad");
		
		UPassive_Gunner_SomeForTheRoad_C_ExecuteUbergraph_Passive_Gunner_SomeForTheRoad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_SomeForTheRoad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_SomeForTheRoad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C");
		return ptr;
	}

}


