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
	 * 		RVA    -> 0x02BA8030
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Goal                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");
		
		UNavigationSystemV1_SimpleMoveToLocation_Params params {};
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A28DF0
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Goal                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationSystemV1::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");
		
		UNavigationSystemV1_SimpleMoveToActor_Params params {};
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7E60
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     QueryExtent                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");
		
		UNavigationSystemV1_ProjectPointToNavigation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		params.QueryExtent = QueryExtent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7DE0
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ANavMeshBoundsVolume*                        NavVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");
		
		UNavigationSystemV1_OnNavigationBoundsUpdated_Params params {};
		params.NavVolume = NavVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7C00
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     QueryExtent                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");
		
		UNavigationSystemV1_K2_ProjectPointToNavigation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		params.QueryExtent = QueryExtent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedLocation != nullptr)
			*ProjectedLocation = params.ProjectedLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7A00
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RandomLocation                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");
		
		UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomLocation != nullptr)
			*RandomLocation = params.RandomLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7800
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RandomLocation                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");
		
		UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomLocation != nullptr)
			*RandomLocation = params.RandomLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA75D0
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");
		
		UNavigationSystemV1_GetRandomReachablePointInRadius_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7400
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");
		
		UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Origin = Origin;
		params.Radius = Radius;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7320
	 * 		Name   -> Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");
		
		UNavigationSystemV1_GetNavigationSystem_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationSystemV1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationSystemV1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavigationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbstractNavData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbstractNavData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdManagerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdManagerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationQueryFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationQueryFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavigationQueryFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavigationQueryFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavigationQueryFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavLayerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavLayerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.GbxNavLayerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavLayerRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavLayerRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavLayerRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavTraversalData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavTraversalData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavTraversalData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavMeshGenerationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavMeshGenerationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshGenerationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavMeshLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavMeshLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavMeshLayer_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavMeshLayer_Default::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshLayer_Default");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavVolumeGenerationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavVolumeGenerationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeGenerationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavVolumeLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavVolumeLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavVolumeLayer_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavVolumeLayer_Default::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeLayer_Default");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokTraversalType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokTraversalType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokTraversalType_ClimbUp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokTraversalType_ClimbUp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_ClimbUp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokTraversalType_DropDown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokTraversalType_DropDown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_DropDown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokTraversalType_Jump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokTraversalType_Jump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_Jump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokTraversalType_Vault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokTraversalType_Vault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_Vault");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUserEdgeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUserEdgeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.GbxUserEdgeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokUserEdge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokUserEdge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.HavokUserEdge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Default::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_LowHeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_LowHeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Null.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Null::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Obstacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Obstacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavAreaMeta.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavAreaMeta::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavAreaMeta_SwitchByAgent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavAreaMeta_SwitchByAgent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavCollision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavCollision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavigationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavigationGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationGraphNodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationGraphNodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationInvokerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationInvokerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA77D0
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UNavigationPath::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");
		
		UNavigationPath_IsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5BB0
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsStringPulled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UNavigationPath::IsStringPulled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");
		
		UNavigationPath_IsStringPulled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA77A0
	 * 		Name   -> Function NavigationSystem.NavigationPath.IsPartial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UNavigationPath::IsPartial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");
		
		UNavigationPath_IsPartial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA73D0
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetPathLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UNavigationPath::GetPathLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");
		
		UNavigationPath_GetPathLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA73A0
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetPathCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UNavigationPath::GetPathCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");
		
		UNavigationPath_GetPathCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA72A0
	 * 		Name   -> Function NavigationSystem.NavigationPath.GetDebugString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UNavigationPath::GetDebugString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");
		
		UNavigationPath_GetDebugString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7220
	 * 		Name   -> Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ENavigationOptionFlag                              DoRecalculation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationPath::EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");
		
		UNavigationPath_EnableRecalculationOnInvalidation_Params params {};
		params.DoRecalculation = DoRecalculation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA7140
	 * 		Name   -> Function NavigationSystem.NavigationPath.EnableDebugDrawing
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldDrawDebugData                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                PathColor                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");
		
		UNavigationPath_EnableDebugDrawing_Params params {};
		params.bShouldDrawDebugData = bShouldDrawDebugData;
		params.PathColor = PathColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationPathGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationPathGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigationSystemModuleConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationSystemModuleConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavigationTestingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavigationTestingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA94A0
	 * 		Name   -> Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRelevant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");
		
		UNavRelevantComponent_SetNavigationRelevancy_Params params {};
		params.bRelevant = bRelevant;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavRelevantComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavRelevantComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkCustomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkCustomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkCustomInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkCustomInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkHostInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkHostInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavLinkTrivial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLinkTrivial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavMeshBoundsVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavMeshBoundsVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavMeshRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavMeshRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA9420
	 * 		Name   -> Function NavigationSystem.NavModifierComponent.SetAreaClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");
		
		UNavModifierComponent_SetAreaClass_Params params {};
		params.NewAreaClass = NewAreaClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavModifierComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavModifierComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02BA93A0
	 * 		Name   -> Function NavigationSystem.NavModifierVolume.SetAreaClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");
		
		ANavModifierVolume_SetAreaClass_Params params {};
		params.NewAreaClass = NewAreaClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANavModifierVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavModifierVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavNodeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavNodeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavTestRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavTestRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecastFilter_UseDefaultArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecastFilter_UseDefaultArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARecastNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARecastNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecastNavMeshDataChunk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecastNavMeshDataChunk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

}


