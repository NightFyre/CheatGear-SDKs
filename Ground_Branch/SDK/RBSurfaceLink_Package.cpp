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
	 * 		Name   -> PredefinedFunction URBSurfaceLink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSurfaceLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSurfaceLink.RBSurfaceLink");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkActorInterface.GetSurfaceLinkType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InCollisionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URBSurfaceLinkActorInterface::GetSurfaceLinkType(class UPrimitiveComponent* InCollisionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkActorInterface.GetSurfaceLinkType");
		
		URBSurfaceLinkActorInterface_GetSurfaceLinkType_Params params {};
		params.InCollisionComponent = InCollisionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSurfaceLinkActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSurfaceLinkActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSurfaceLink.RBSurfaceLinkActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkClassInterface.SetPhysicCollisionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InSourceActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InSourceComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InContactPosition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InContactNormal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URBSurfaceLinkClassInterface::SetPhysicCollisionInfo(class AActor* InSourceActor, class UPrimitiveComponent* InSourceComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& InContactPosition, const struct FVector& InContactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkClassInterface.SetPhysicCollisionInfo");
		
		URBSurfaceLinkClassInterface_SetPhysicCollisionInfo_Params params {};
		params.InSourceActor = InSourceActor;
		params.InSourceComponent = InSourceComponent;
		params.OtherActor = OtherActor;
		params.OtherComponent = OtherComponent;
		params.InContactPosition = InContactPosition;
		params.InContactNormal = InContactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkClassInterface.SetHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InHitResultSource                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  InHitResult                                                (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URBSurfaceLinkClassInterface::SetHitResult(class UObject* InHitResultSource, const struct FHitResult& InHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkClassInterface.SetHitResult");
		
		URBSurfaceLinkClassInterface_SetHitResult_Params params {};
		params.InHitResultSource = InHitResultSource;
		params.InHitResult = InHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSurfaceLinkClassInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSurfaceLinkClassInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSurfaceLink.RBSurfaceLinkClassInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClassFromHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UClass* URBSurfaceLinkManager::GetLinkedClassFromHitResult(const class FName& Type, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClassFromHitResult");
		
		URBSurfaceLinkManager_GetLinkedClassFromHitResult_Params params {};
		params.Type = Type;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PhysicalMaterialName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* URBSurfaceLinkManager::GetLinkedClass(const class FName& Type, const class FName& PhysicalMaterialName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClass");
		
		URBSurfaceLinkManager_GetLinkedClass_Params params {};
		params.Type = Type;
		params.PhysicalMaterialName = PhysicalMaterialName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBSurfaceLink.RBSurfaceLinkManager.GetDefaultLinkedClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* URBSurfaceLinkManager::GetDefaultLinkedClass(const class FName& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBSurfaceLink.RBSurfaceLinkManager.GetDefaultLinkedClass");
		
		URBSurfaceLinkManager_GetDefaultLinkedClass_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSurfaceLinkManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSurfaceLinkManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSurfaceLink.RBSurfaceLinkManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBSurfaceLinkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBSurfaceLinkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RBSurfaceLink.RBSurfaceLinkSettings");
		return ptr;
	}

}


