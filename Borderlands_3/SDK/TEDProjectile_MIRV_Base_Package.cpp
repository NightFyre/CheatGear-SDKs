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
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATEDProjectile_MIRV_Base_C::AIProjectile_CanBeStolen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.AIProjectile_CanBeStolen");
		
		ATEDProjectile_MIRV_Base_C_AIProjectile_CanBeStolen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_MIRV_Base_C::FuelOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.FuelOut");
		
		ATEDProjectile_MIRV_Base_C_FuelOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_MIRV_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.UserConstructionScript");
		
		ATEDProjectile_MIRV_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BehaviorClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ATEDProjectile_MIRV_Base_C::OnBehaviorInitialized(class UClass* BehaviorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.OnBehaviorInitialized");
		
		ATEDProjectile_MIRV_Base_C_OnBehaviorInitialized_Params params {};
		params.BehaviorClass = BehaviorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATEDProjectile_MIRV_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ReceiveBeginPlay");
		
		ATEDProjectile_MIRV_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_MIRV_Base_C::ExecuteUbergraph_TEDProjectile_MIRV_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C.ExecuteUbergraph_TEDProjectile_MIRV_Base");
		
		ATEDProjectile_MIRV_Base_C_ExecuteUbergraph_TEDProjectile_MIRV_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATEDProjectile_MIRV_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATEDProjectile_MIRV_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_MIRV_Base.TEDProjectile_MIRV_Base_C");
		return ptr;
	}

}


