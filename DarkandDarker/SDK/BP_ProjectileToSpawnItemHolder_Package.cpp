/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bIsAttached                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  ActorPrevTickTransform                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_ProjectileToSpawnItemHolder_C::ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit");
		
		ABP_ProjectileToSpawnItemHolder_C_ProjectileHit_Params params {};
		params.Hit = Hit;
		params.bIsAttached = bIsAttached;
		params.ActorPrevTickTransform = ActorPrevTickTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SpawnHolderClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  InTransform                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UItem*                                       ItemObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileToSpawnItemHolder_C::SpawnItemHolder(class UClass* SpawnHolderClass, const struct FTransform& InTransform, class UItem* ItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder");
		
		ABP_ProjectileToSpawnItemHolder_C_SpawnItemHolder_Params params {};
		params.SpawnHolderClass = SpawnHolderClass;
		params.InTransform = InTransform;
		params.ItemObject = ItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileToSpawnItemHolder_C::ExecuteUbergraph_BP_ProjectileToSpawnItemHolder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder");
		
		ABP_ProjectileToSpawnItemHolder_C_ExecuteUbergraph_BP_ProjectileToSpawnItemHolder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProjectileToSpawnItemHolder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProjectileToSpawnItemHolder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C");
		return ptr;
	}

}


