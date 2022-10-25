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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClothActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClothActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.ClothActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClothSkeletalMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClothSkeletalMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.ClothSkeletalMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClothStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClothStaticMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.ClothStaticMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AClothManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AClothManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.ClothManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030326D0
	 * 		Name   -> Function GbxDestruction.GbxDestructibleActor.SetFracturable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFracturable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxDestructibleActor::SetFracturable(bool bFracturable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.SetFracturable");
		
		AGbxDestructibleActor_SetFracturable_Params params {};
		params.bFracturable = bFracturable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030326B0
	 * 		Name   -> Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxDestructibleActor::OnRep_TransformBuffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer");
		
		AGbxDestructibleActor_OnRep_TransformBuffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03032690
	 * 		Name   -> Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxDestructibleActor::OnRep_SyncID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID");
		
		AGbxDestructibleActor_OnRep_SyncID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03032670
	 * 		Name   -> Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxDestructibleActor::OnRep_FractureBuffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer");
		
		AGbxDestructibleActor_OnRep_FractureBuffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxDestructibleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxDestructibleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.GbxDestructibleActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03032760
	 * 		Name   -> Function GbxDestruction.GbxDestructibleComponent.SetFracturable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFracturable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDestructibleComponent::SetFracturable(bool bFracturable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.SetFracturable");
		
		UGbxDestructibleComponent_SetFracturable_Params params {};
		params.bFracturable = bFracturable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03032640
	 * 		Name   -> Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGbxDestructibleComponent::GetTotalPercentFractured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured");
		
		UGbxDestructibleComponent_GetTotalPercentFractured_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030325B0
	 * 		Name   -> Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxDestructibleComponent::GetDamageRequiredToFracture(int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture");
		
		UGbxDestructibleComponent_GetDamageRequiredToFracture_Params params {};
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03032590
	 * 		Name   -> Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxDestructibleComponent::FractureRandomChunk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk");
		
		UGbxDestructibleComponent_FractureRandomChunk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDestructibleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDestructibleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.GbxDestructibleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxUserDestructibleSyncManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxUserDestructibleSyncManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDestruction.GbxUserDestructibleSyncManager");
		return ptr;
	}

}


