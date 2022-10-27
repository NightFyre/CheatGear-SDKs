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
	 * 		Name   -> Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEDProjectile_SG_SacrificialLamb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.UserConstructionScript");
		
		ATEDProjectile_SG_SacrificialLamb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATEDProjectile_SG_SacrificialLamb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ReceiveBeginPlay");
		
		ATEDProjectile_SG_SacrificialLamb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATEDProjectile_SG_SacrificialLamb_C::ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C.ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb");
		
		ATEDProjectile_SG_SacrificialLamb_C_ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATEDProjectile_SG_SacrificialLamb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATEDProjectile_SG_SacrificialLamb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C");
		return ptr;
	}

}


