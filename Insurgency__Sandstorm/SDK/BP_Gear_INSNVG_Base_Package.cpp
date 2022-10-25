/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DB53C0
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Gear_INSNVG_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.ReceiveBeginPlay");
		
		ABP_Gear_INSNVG_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21160
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.OnThirdPersonMeshesVisibilityChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bVisible__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bPropagateToChildren__pf                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::OnThirdPersonMeshesVisibilityChanged(bool bpp__bVisible__pf, bool bpp__bPropagateToChildren__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.OnThirdPersonMeshesVisibilityChanged");
		
		ABP_Gear_INSNVG_Base_C_OnThirdPersonMeshesVisibilityChanged_Params params {};
		params.bpp__bVisible__pf = bpp__bVisible__pf;
		params.bpp__bPropagateToChildren__pf = bpp__bPropagateToChildren__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21040
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.MeshLoaded
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::MeshLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.MeshLoaded");
		
		ABP_Gear_INSNVG_Base_C_MeshLoaded_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB43A0
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.MergedMesh
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Gear_INSNVG_Base_C::MergedMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.MergedMesh");
		
		ABP_Gear_INSNVG_Base_C_MergedMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20D70
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintSpawnedPreviewActor
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bFirstPerson__pf__const                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPlayerInventoryComponent*                   bpp__PlayerInventory__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::BlueprintSpawnedPreviewActor(bool bpp__bFirstPerson__pf__const, class UPlayerInventoryComponent* bpp__PlayerInventory__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintSpawnedPreviewActor");
		
		ABP_Gear_INSNVG_Base_C_BlueprintSpawnedPreviewActor_Params params {};
		params.bpp__bFirstPerson__pf__const = bpp__bFirstPerson__pf__const;
		params.bpp__PlayerInventory__pf = bpp__PlayerInventory__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5400
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintOnPickedUp
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Gear_INSNVG_Base_C::BlueprintOnPickedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintOnPickedUp");
		
		ABP_Gear_INSNVG_Base_C_BlueprintOnPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20C10
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintOnAttachMeshToPawn
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintOnAttachMeshToPawn");
		
		ABP_Gear_INSNVG_Base_C_BlueprintOnAttachMeshToPawn_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20B00
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintInteractableStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EEquipableState                                    bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::BlueprintInteractableStateChanged(EEquipableState bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.BlueprintInteractableStateChanged");
		
		ABP_Gear_INSNVG_Base_C_BlueprintInteractableStateChanged_Params params {};
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20960
	 * 		Name   -> Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.AttachGogglesToComponent
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__TargetComponent__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::AttachGogglesToComponent(class UINSSkeletalMeshComponent* bpp__TargetComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.AttachGogglesToComponent");
		
		ABP_Gear_INSNVG_Base_C_AttachGogglesToComponent_Params params {};
		params.bpp__TargetComponent__pf = bpp__TargetComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.OnMergedMeshSetDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ABP_Gear_INSNVG_Base_C::OnMergedMeshSetDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.OnMergedMeshSetDelegate__DelegateSignature");
		
		ABP_Gear_INSNVG_Base_C_OnMergedMeshSetDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.ItemMeshLoadedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Gear_INSNVG_Base_C::ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C.ItemMeshLoadedDelegate__DelegateSignature");
		
		ABP_Gear_INSNVG_Base_C_ItemMeshLoadedDelegate__DelegateSignature_Params params {};
		params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gear_INSNVG_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gear_INSNVG_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C");
		return ptr;
	}

}


