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
	 * 		RVA    -> 0x008DBD40
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorList                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SortActorListByDistance(class AActor* TargetActor, TArray<class AActor*>* ActorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SortActorListByDistance");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SortActorListByDistance_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorList != nullptr)
			*ActorList = params.ActorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DBCA0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector4                                    Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise4D(const struct FVector4& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise4D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise4D_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DBC10
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise3D(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise3D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise3D_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DBB80
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise2D(const struct FVector2D& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise2D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise2D_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DBB00
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SimplexNoise1D(float Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SimplexNoise1D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SimplexNoise1D_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB930
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  MaterialArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideForceMiplevelsToBeResident                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceMiplevelsToBeResidentValue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ForceDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CinematicTextureGroups                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_SetForceMipLevelsToBeResidentForMaterialArray(TArray<class UMaterialInterface*> MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.SetForceMipLevelsToBeResidentForMaterialArray");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_SetForceMipLevelsToBeResidentForMaterialArray_Params params {};
		params.MaterialArray = MaterialArray;
		params.OverrideForceMiplevelsToBeResident = OverrideForceMiplevelsToBeResident;
		params.bForceMiplevelsToBeResidentValue = bForceMiplevelsToBeResidentValue;
		params.ForceDuration = ForceDuration;
		params.CinematicTextureGroups = CinematicTextureGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB6A0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Octaves                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Persistence                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_PerlinNoise2D(const struct FVector2D& Location, int32_t Octaves, float Persistence, float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise2D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise2D_Params params {};
		params.Location = Location;
		params.Octaves = Octaves;
		params.Persistence = Persistence;
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB560
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Octaves                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Persistence                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_PerlinNoise1D(float X, int32_t Octaves, float Persistence, float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.PerlinNoise1D");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_PerlinNoise1D_Params params {};
		params.X = X;
		params.Octaves = Octaves;
		params.Persistence = Persistence;
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB3C0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Source                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_IsWithinRangeAndAngle(const struct FTransform& Source, class AActor* Target, float Range, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsWithinRangeAndAngle");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_IsWithinRangeAndAngle_Params params {};
		params.Source = Source;
		params.Target = Target;
		params.Range = Range;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0066DB50
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_IsInEditorMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.IsInEditorMode");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_IsInEditorMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA620
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Param                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_GbxBlueprintFunctionLibrariesSampleFunction(float Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.GbxBlueprintFunctionLibrariesSampleFunction");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_GbxBlueprintFunctionLibrariesSampleFunction_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA450
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SmoothDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FloatDamp(float Current, float Target, float* CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FloatDamp");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_FloatDamp_Params params {};
		params.Current = Current;
		params.Target = Target;
		params.SmoothDuration = SmoothDuration;
		params.MaxSpeed = MaxSpeed;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentVelocity != nullptr)
			*CurrentVelocity = params.CurrentVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA380
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RefLocation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACharacter* UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FindClosestPlayerCharacter(class UObject* WorldContextObject, const struct FVector& RefLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestPlayerCharacter");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestPlayerCharacter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RefLocation = RefLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA110
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    ActorArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     RefLocation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClosestActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_FindClosestActor(TArray<int32_t> ActorArray, const struct FVector& RefLocation, int32_t* ClosestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.FindClosestActor");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_FindClosestActor_Params params {};
		params.ActorArray = ActorArray;
		params.RefLocation = RefLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestActor != nullptr)
			*ClosestActor = params.ClosestActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA050
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	class UObject* UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_EditorLoadAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.EditorLoadAsset");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_EditorLoadAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9B20
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxBlueprintFunctionLibrariesBPLibrary::STATIC_BroadcastRemoteEvent(class UObject* WorldContextObject, const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary.BroadcastRemoteEvent");
		
		UGbxBlueprintFunctionLibrariesBPLibrary_BroadcastRemoteEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxBlueprintFunctionLibrariesBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxBlueprintFunctionLibrariesBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB220
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UHitResultFunctionLibrary::STATIC_IsBlockingHit(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.IsBlockingHit");
		
		UHitResultFunctionLibrary_IsBlockingHit_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB080
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UPhysicalMaterial* UHitResultFunctionLibrary::STATIC_GetPhysMaterial(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetPhysMaterial");
		
		UHitResultFunctionLibrary_GetPhysMaterial_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DAED0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVector UHitResultFunctionLibrary::STATIC_GetHitNormal(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitNormal");
		
		UHitResultFunctionLibrary_GetHitNormal_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DAD20
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVector UHitResultFunctionLibrary::STATIC_GetHitLocation(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitLocation");
		
		UHitResultFunctionLibrary_GetHitLocation_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DAB80
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float UHitResultFunctionLibrary::STATIC_GetHitDistance(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitDistance");
		
		UHitResultFunctionLibrary_GetHitDistance_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA9E0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* UHitResultFunctionLibrary::STATIC_GetHitComponent(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitComponent");
		
		UHitResultFunctionLibrary_GetHitComponent_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA840
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class AActor* UHitResultFunctionLibrary::STATIC_GetHitActor(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetHitActor");
		
		UHitResultFunctionLibrary_GetHitActor_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DA6A0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class FName UHitResultFunctionLibrary::STATIC_GetBoneName(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.HitResultFunctionLibrary.GetBoneName");
		
		UHitResultFunctionLibrary_GetBoneName_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitResultFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitResultFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxBlueprintFunctionLibraries.HitResultFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB880
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagsFunctionLibrary::STATIC_RemoveTagFromComponent(class UActorComponent* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromComponent");
		
		UTagsFunctionLibrary_RemoveTagFromComponent_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008DB7D0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagsFunctionLibrary::STATIC_RemoveTagFromActor(class AActor* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.RemoveTagFromActor");
		
		UTagsFunctionLibrary_RemoveTagFromActor_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9F90
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTagsFunctionLibrary::STATIC_ComponentContainsTag(class UActorComponent* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ComponentContainsTag");
		
		UTagsFunctionLibrary_ComponentContainsTag_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9E50
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             FirstComponent                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             SecondComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompareTag                                        Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UTagsFunctionLibrary::STATIC_CompareComponentTags(class UActorComponent* FirstComponent, class UActorComponent* SecondComponent, ECompareTag* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareComponentTags");
		
		UTagsFunctionLibrary_CompareComponentTags_Params params {};
		params.FirstComponent = FirstComponent;
		params.SecondComponent = SecondComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9D10
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompareTag                                        Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UTagsFunctionLibrary::STATIC_CompareActorTagsWithComponent(class AActor* Actor, class UActorComponent* Component, ECompareTag* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTagsWithComponent");
		
		UTagsFunctionLibrary_CompareActorTagsWithComponent_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9BD0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      FirstActor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SecondActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECompareTag                                        Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UTagsFunctionLibrary::STATIC_CompareActorTags(class AActor* FirstActor, class AActor* SecondActor, ECompareTag* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.CompareActorTags");
		
		UTagsFunctionLibrary_CompareActorTags_Params params {};
		params.FirstActor = FirstActor;
		params.SecondActor = SecondActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9A70
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagsFunctionLibrary::STATIC_AddTagToComponent(class UActorComponent* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToComponent");
		
		UTagsFunctionLibrary_AddTagToComponent_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D99C0
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagsFunctionLibrary::STATIC_AddTagToActor(class AActor* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.AddTagToActor");
		
		UTagsFunctionLibrary_AddTagToActor_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008D9900
	 * 		Name   -> Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTagsFunctionLibrary::STATIC_ActorContainsTag(class AActor* Target, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxBlueprintFunctionLibraries.TagsFunctionLibrary.ActorContainsTag");
		
		UTagsFunctionLibrary_ActorContainsTag_Params params {};
		params.Target = Target;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxBlueprintFunctionLibraries.TagsFunctionLibrary");
		return ptr;
	}

}


