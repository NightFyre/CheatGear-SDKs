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
	 * 		Name   -> Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShieldBoosterPickup_Pills_Upper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.UserConstructionScript");
		
		ABP_ShieldBoosterPickup_Pills_Upper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ShieldBoosterPickup_Pills_Upper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ReceiveBeginPlay");
		
		ABP_ShieldBoosterPickup_Pills_Upper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.PickedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               PickupInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldBoosterPickup_Pills_Upper_C::PickedUp(class AOakCharacter* PickupInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.PickedUp");
		
		ABP_ShieldBoosterPickup_Pills_Upper_C_PickedUp_Params params {};
		params.PickupInstigator = PickupInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldBoosterPickup_Pills_Upper_C::ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C.ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper");
		
		ABP_ShieldBoosterPickup_Pills_Upper_C_ExecuteUbergraph_BP_ShieldBoosterPickup_Pills_Upper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShieldBoosterPickup_Pills_Upper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShieldBoosterPickup_Pills_Upper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_Pills_Upper.BP_ShieldBoosterPickup_Pills_Upper_C");
		return ptr;
	}

}


