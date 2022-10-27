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
	 * 		Name   -> PredefinedFunction UGbxNavSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCE90
	 * 		Name   -> Function GbxNav.GbxNavComponent.TryMoving
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              fDuration                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavComponent::TryMoving(float fDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.TryMoving");
		
		UGbxNavComponent_TryMoving_Params params {};
		params.fDuration = fDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCE10
	 * 		Name   -> Function GbxNav.GbxNavComponent.SetPathFindingData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UHavokPathFindingData*                       NewPathFindingData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavComponent::SetPathFindingData(class UHavokPathFindingData* NewPathFindingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.SetPathFindingData");
		
		UGbxNavComponent_SetPathFindingData_Params params {};
		params.NewPathFindingData = NewPathFindingData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCBE0
	 * 		Name   -> Function GbxNav.GbxNavComponent.ResetPathFindingData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxNavComponent::ResetPathFindingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.ResetPathFindingData");
		
		UGbxNavComponent_ResetPathFindingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCB70
	 * 		Name   -> Function GbxNav.GbxNavComponent.GetPathFindingData
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UHavokPathFindingData* UGbxNavComponent::GetPathFindingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavComponent.GetPathFindingData");
		
		UGbxNavComponent_GetPathFindingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxNavWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxNavWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCBA0
	 * 		Name   -> Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState
	 * 		Flags  -> (Native, Public)
	 */
	void UAIVehicleFlightComponent::OnRep_FlightState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.AIVehicleFlightComponent.OnRep_FlightState");
		
		UAIVehicleFlightComponent_OnRep_FlightState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIVehicleFlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIVehicleFlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.AIVehicleFlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavAnimTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavAnimTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavAnimTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCBC0
	 * 		Name   -> Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGbxAnimStateManager_AINav::Owner_PostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxAnimStateManager_AINav.Owner_PostBeginPlay");
		
		UGbxAnimStateManager_AINav_Owner_PostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_AINav.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_AINav::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_AINav");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_NavIdle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_NavIdle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavIdle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavIdleTurnTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavIdleTurnTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavIdleTurnTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_NavIdleTurn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_NavIdleTurn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavIdleTurn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_NavTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_NavTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_NavHop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_NavHop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavHop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCD60
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxPathType                                       PathType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavBlueprintLibrary::STATIC_SetAINavPathType(class AActor* Actor, EGbxPathType PathType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.SetAINavPathType");
		
		UGbxNavBlueprintLibrary_SetAINavPathType_Params params {};
		params.Actor = Actor;
		params.PathType = PathType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCCB0
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavBlueprintLibrary::STATIC_ResourceUnlockAvoidance(class AActor* Actor, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ResourceUnlockAvoidance");
		
		UGbxNavBlueprintLibrary_ResourceUnlockAvoidance_Params params {};
		params.Actor = Actor;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCC00
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavBlueprintLibrary::STATIC_ResourceLockAvoidance(class AActor* Actor, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ResourceLockAvoidance");
		
		UGbxNavBlueprintLibrary_ResourceLockAvoidance_Params params {};
		params.Actor = Actor;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBCAC0
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxNavMeshLayer*                            ForcedNavMeshLayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavBlueprintLibrary::STATIC_ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.ForceNavMeshLayer");
		
		UGbxNavBlueprintLibrary_ForceNavMeshLayer_Params params {};
		params.Actor = Actor;
		params.ForcedNavMeshLayer = ForcedNavMeshLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBC960
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxNavBlueprintLibrary::STATIC_FindNavMeshPointForActor(class AActor* Actor, const struct FVector& Point, float Radius, struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPointForActor");
		
		UGbxNavBlueprintLibrary_FindNavMeshPointForActor_Params params {};
		params.Actor = Actor;
		params.Point = Point;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBC7A0
	 * 		Name   -> Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxNavMeshLayer*                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxNavBlueprintLibrary::STATIC_FindNavMeshPoint(class UObject* WorldContextObject, const struct FVector& Point, float Radius, struct FVector* Result, class UGbxNavMeshLayer* Layer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBlueprintLibrary.FindNavMeshPoint");
		
		UGbxNavBlueprintLibrary_FindNavMeshPoint_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Point = Point;
		params.Radius = Radius;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FBC780
	 * 		Name   -> Function GbxNav.GbxNavBoxComponent.DoAutoResize
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxNavBoxComponent::DoAutoResize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavBoxComponent.DoAutoResize");
		
		UGbxNavBoxComponent_DoAutoResize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavFlyLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavFlyLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavFlyLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxNavSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxNavSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxNavFlySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxNavFlySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavFlySection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavSectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavSectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavSectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavFlySectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavFlySectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavFlySectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavGlobalData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavGlobalData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavGlobalData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavMeshLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavMeshLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavMeshLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC09A0
	 * 		Name   -> Function GbxNav.GbxNavMeshPainter.SetPainterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxNavMeshPainter::SetPainterEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainter.SetPainterEnabled");
		
		AGbxNavMeshPainter_SetPainterEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC08D0
	 * 		Name   -> Function GbxNav.GbxNavMeshPainter.IsPainterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGbxNavMeshPainter::IsPainterEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainter.IsPainterEnabled");
		
		AGbxNavMeshPainter_IsPainterEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxNavMeshPainter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxNavMeshPainter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavMeshPainter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC0A30
	 * 		Name   -> Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavMeshPainterComponent::SetPainterEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.SetPainterEnabled");
		
		UGbxNavMeshPainterComponent_SetPainterEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E65630
	 * 		Name   -> Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewAlwaysEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxNavMeshPainterComponent::SetPainterAlwaysEnabled(bool bNewAlwaysEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.SetPainterAlwaysEnabled");
		
		UGbxNavMeshPainterComponent_SetPainterAlwaysEnabled_Params params {};
		params.bNewAlwaysEnabled = bNewAlwaysEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC0980
	 * 		Name   -> Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxNavMeshPainterComponent::ResetToStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.ResetToStatic");
		
		UGbxNavMeshPainterComponent_ResetToStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01423AA0
	 * 		Name   -> Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxNavMeshPainterComponent::IsPainterEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.GbxNavMeshPainterComponent.IsPainterEnabled");
		
		UGbxNavMeshPainterComponent_IsPainterEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavMeshPainterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavMeshPainterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavMeshPainterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxNavMeshSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxNavMeshSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavMeshSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavMeshSectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavMeshSectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavMeshSectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNavUserEdgeTrailComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNavUserEdgeTrailComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxNavUserEdgeTrailComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUserEdge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUserEdge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxUserEdge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxUserEdgeBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxUserEdgeBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.GbxUserEdgeBlocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokMovementData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokMovementData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokMovementData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavObstacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavObstacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokNavObstacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC0AC0
	 * 		Name   -> Function GbxNav.HavokNavObstacleComponent.UnlockObstacle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHavokNavObstacleComponent::UnlockObstacle(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokNavObstacleComponent.UnlockObstacle");
		
		UHavokNavObstacleComponent_UnlockObstacle_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC0900
	 * 		Name   -> Function GbxNav.HavokNavObstacleComponent.LockObstacle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHavokNavObstacleComponent::LockObstacle(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokNavObstacleComponent.LockObstacle");
		
		UHavokNavObstacleComponent_LockObstacle_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokNavObstacleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokNavObstacleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokNavObstacleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokPathFindingData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokPathFindingData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokPathFindingData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokStreamingSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokStreamingSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokStreamingSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokUserEdge_Jump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokUserEdge_Jump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokUserEdge_Jump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC1580
	 * 		Name   -> Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHavokUserEdgeActor::SetEdgeEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeActor.SetEdgeEnabled");
		
		AHavokUserEdgeActor_SetEdgeEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC1520
	 * 		Name   -> Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHavokUserEdgeActor::IsEdgeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeActor.IsEdgeEnabled");
		
		AHavokUserEdgeActor_IsEdgeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHavokUserEdgeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHavokUserEdgeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokUserEdgeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC1610
	 * 		Name   -> Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHavokUserEdgeComponent::SetEdgeEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.SetEdgeEnabled");
		
		UHavokUserEdgeComponent_SetEdgeEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FC1550
	 * 		Name   -> Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHavokUserEdgeComponent::IsEdgeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.IsEdgeEnabled");
		
		UHavokUserEdgeComponent_IsEdgeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672610
	 * 		Name   -> Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHavokUserEdgeComponent::AnchorDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgeComponent.AnchorDestroyed");
		
		UHavokUserEdgeComponent_AnchorDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokUserEdgeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokUserEdgeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokUserEdgeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00672610
	 * 		Name   -> Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UBlueprint*                                  BP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHavokUserEdgePreviewComponent::OnBlueprintCompiled(class UBlueprint* BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxNav.HavokUserEdgePreviewComponent.OnBlueprintCompiled");
		
		UHavokUserEdgePreviewComponent_OnBlueprintCompiled_Params params {};
		params.BP = BP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHavokUserEdgePreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHavokUserEdgePreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.HavokUserEdgePreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleSplineConsumerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleSplineConsumerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.VehicleSplineConsumerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleSplineInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleSplineInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxNav.VehicleSplineInterface");
		return ptr;
	}

}


