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
	 * 		Name   -> Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATedioreProjectile*                          Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TEDBehavior_Horizon_C::K2_OnComboTargetTriggered(class ATedioreProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_OnComboTargetTriggered");
		
		UBP_TEDBehavior_Horizon_C_K2_OnComboTargetTriggered_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ATedioreProjectile*                          Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TEDBehavior_Horizon_C::K2_ComboTargetTriggeredEvent(class ATedioreProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.K2_ComboTargetTriggeredEvent");
		
		UBP_TEDBehavior_Horizon_C_K2_ComboTargetTriggeredEvent_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TEDBehavior_Horizon_C::ExecuteUbergraph_BP_TEDBehavior_Horizon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C.ExecuteUbergraph_BP_TEDBehavior_Horizon");
		
		UBP_TEDBehavior_Horizon_C_ExecuteUbergraph_BP_TEDBehavior_Horizon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TEDBehavior_Horizon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TEDBehavior_Horizon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C");
		return ptr;
	}

}


