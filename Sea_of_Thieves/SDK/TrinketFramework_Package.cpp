/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UTrinketLoadoutFinderPolicyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketLoadoutFinderPolicyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketLoadoutFinderPolicyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketAudioInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketAudioInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketAudioInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvalidTrinketCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvalidTrinketCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.InvalidTrinketCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketLoadoutControlInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketLoadoutControlInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketLoadoutControlInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USameActorTrinketLoadoutFinderPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USameActorTrinketLoadoutFinderPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.SameActorTrinketLoadoutFinderPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketLoadoutViewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketLoadoutViewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketLoadoutViewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034D9AD0
	 * 		Name   -> Function TrinketFramework.TrinketReplacementActor.RegisterTrinketReplacementMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorWithTrinkets                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        ReplacementMesh                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrinketReplacementActor::RegisterTrinketReplacementMesh(class AActor* ActorWithTrinkets, class UStaticMeshComponent* ReplacementMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrinketFramework.TrinketReplacementActor.RegisterTrinketReplacementMesh");
		
		ATrinketReplacementActor_RegisterTrinketReplacementMesh_Params params {};
		params.ActorWithTrinkets = ActorWithTrinkets;
		params.ReplacementMesh = ReplacementMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrinketReplacementActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrinketReplacementActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketReplacementActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketSetControlInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketSetControlInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketSetControlInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrinketSfxDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrinketSfxDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TrinketFramework.TrinketSfxDataAsset");
		return ptr;
	}

}


