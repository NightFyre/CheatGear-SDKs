/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BulletImpact_StopBullets_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C.ReceiveBeginPlay");
		
		ABP_BulletImpact_StopBullets_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C.ExecuteUbergraph_BP_BulletImpact_StopBullets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BulletImpact_StopBullets_C::ExecuteUbergraph_BP_BulletImpact_StopBullets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C.ExecuteUbergraph_BP_BulletImpact_StopBullets");
		
		ABP_BulletImpact_StopBullets_C_ExecuteUbergraph_BP_BulletImpact_StopBullets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BulletImpact_StopBullets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BulletImpact_StopBullets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C");
		return ptr;
	}

}


