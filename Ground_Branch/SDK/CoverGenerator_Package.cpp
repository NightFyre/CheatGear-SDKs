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
	 * 		Name   -> Function CoverGenerator.CoverGenerator.ReleaseCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverGenerator::ReleaseCover(class UCoverPoint* CoverPoint, class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.ReleaseCover");
		
		ACoverGenerator_ReleaseCover_Params params {};
		params.CoverPoint = CoverPoint;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverGenerator::OnNavigationGenerationFinished(class ANavigationData* NavData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished");
		
		ACoverGenerator_OnNavigationGenerationFinished_Params params {};
		params.NavData = NavData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.OccupyCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::OccupyCover(class UCoverPoint* CoverPoint, class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.OccupyCover");
		
		ACoverGenerator_OccupyCover_Params params {};
		params.CoverPoint = CoverPoint;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.IsFreeCoverPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::IsFreeCoverPoint(class UCoverPoint* CoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.IsFreeCoverPoint");
		
		ACoverGenerator_IsFreeCoverPoint_Params params {};
		params.CoverPoint = CoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.GetCoverWithinBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        BoxIn                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class UCoverPoint*> ACoverGenerator::GetCoverWithinBox(const struct FBox& BoxIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.GetCoverWithinBox");
		
		ACoverGenerator_GetCoverWithinBox_Params params {};
		params.BoxIn = BoxIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.GetCoverGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoverGenerator* ACoverGenerator::GetCoverGenerator(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.GetCoverGenerator");
		
		ACoverGenerator_GetCoverGenerator_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.ForceRefresh
	 * 		Flags  -> ()
	 */
	void ACoverGenerator::ForceRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.ForceRefresh");
		
		ACoverGenerator_ForceRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.CoverExistWithinBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        BoxIn                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::CoverExistWithinBox(const struct FBox& BoxIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.CoverExistWithinBox");
		
		ACoverGenerator_CoverExistWithinBox_Params params {};
		params.BoxIn = BoxIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoverGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.CoverGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetOccupiedBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetOccupiedBy(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetOccupiedBy");
		
		UCoverPoint_SetOccupiedBy_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCrouchOnlyCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCrouchOnlyCover(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCrouchOnlyCover");
		
		UCoverPoint_SetCrouchOnlyCover_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCoverLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCoverLocation(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCoverLocation");
		
		UCoverPoint_SetCoverLocation_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCoverDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCoverDirection(const struct FVector& NewDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCoverDirection");
		
		UCoverPoint_SetCoverDirection_Params params {};
		params.NewDirection = NewDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCanStandUpFront
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCanStandUpFront(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCanStandUpFront");
		
		UCoverPoint_SetCanStandUpFront_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCanLeanRightStanding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCanLeanRightStanding(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCanLeanRightStanding");
		
		UCoverPoint_SetCanLeanRightStanding_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCanLeanRightCrouched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCanLeanRightCrouched(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCanLeanRightCrouched");
		
		UCoverPoint_SetCanLeanRightCrouched_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCanLeanLeftStanding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCanLeanLeftStanding(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCanLeanLeftStanding");
		
		UCoverPoint_SetCanLeanLeftStanding_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.SetCanLeanLeftCrouched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverPoint::SetCanLeanLeftCrouched(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.SetCanLeanLeftCrouched");
		
		UCoverPoint_SetCanLeanLeftCrouched_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.OnlyProvidesCover
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::OnlyProvidesCover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.OnlyProvidesCover");
		
		UCoverPoint_OnlyProvidesCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetOccupiedBy
	 * 		Flags  -> ()
	 */
	class AController* UCoverPoint::GetOccupiedBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetOccupiedBy");
		
		UCoverPoint_GetOccupiedBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCrouchOnlyCover
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCrouchOnlyCover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCrouchOnlyCover");
		
		UCoverPoint_GetCrouchOnlyCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCoverRotation
	 * 		Flags  -> ()
	 */
	struct FRotator UCoverPoint::GetCoverRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCoverRotation");
		
		UCoverPoint_GetCoverRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCoverLocation
	 * 		Flags  -> ()
	 */
	struct FVector UCoverPoint::GetCoverLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCoverLocation");
		
		UCoverPoint_GetCoverLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCoverDirection
	 * 		Flags  -> ()
	 */
	struct FVector UCoverPoint::GetCoverDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCoverDirection");
		
		UCoverPoint_GetCoverDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCanStandUpFront
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCanStandUpFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCanStandUpFront");
		
		UCoverPoint_GetCanStandUpFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCanLeanRightStanding
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCanLeanRightStanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCanLeanRightStanding");
		
		UCoverPoint_GetCanLeanRightStanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCanLeanRightCrouched
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCanLeanRightCrouched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCanLeanRightCrouched");
		
		UCoverPoint_GetCanLeanRightCrouched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCanLeanLeftStanding
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCanLeanLeftStanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCanLeanLeftStanding");
		
		UCoverPoint_GetCanLeanLeftStanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverPoint.GetCanLeanLeftCrouched
	 * 		Flags  -> ()
	 */
	bool UCoverPoint::GetCanLeanLeftCrouched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverPoint.GetCanLeanLeftCrouched");
		
		UCoverPoint_GetCanLeanLeftCrouched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.CoverPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_CoverFMemory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_CoverFMemory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryGenerator_CoverFMemory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Cover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Cover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryItemType_Cover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CoverPointFree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CoverPointFree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_CoverPointFree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_FilterCoverPoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_FilterCoverPoints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_FilterCoverPoints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsCoverPosition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsCoverPosition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_IsCoverPosition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_ParallelToCoverDirection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_ParallelToCoverDirection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_ParallelToCoverDirection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TraceDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TraceDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_TraceDistance");
		return ptr;
	}

}


