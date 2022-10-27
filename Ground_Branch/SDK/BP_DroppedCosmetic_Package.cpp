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
	 * 		Name   -> Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewVel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedCosmetic_C::Setup(class UStaticMeshComponent* Target, const struct FVector& NewVel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.Setup");
		
		ABP_DroppedCosmetic_C_Setup_Params params {};
		params.Target = Target;
		params.NewVel = NewVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.K2_OnReset
	 * 		Flags  -> ()
	 */
	void ABP_DroppedCosmetic_C::K2_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.K2_OnReset");
		
		ABP_DroppedCosmetic_C_K2_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.ExecuteUbergraph_BP_DroppedCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedCosmetic_C::ExecuteUbergraph_BP_DroppedCosmetic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedCosmetic.BP_DroppedCosmetic_C.ExecuteUbergraph_BP_DroppedCosmetic");
		
		ABP_DroppedCosmetic_C_ExecuteUbergraph_BP_DroppedCosmetic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroppedCosmetic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroppedCosmetic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppedCosmetic.BP_DroppedCosmetic_C");
		return ptr;
	}

}


