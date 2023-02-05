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
	 * 		RVA    -> 0x00D2F270
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VisionAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetVisionAngle(class UAIPerceptionComponent* Perception, float VisionAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle");
		
		UPerceptionExtensionBPLibrary_SetVisionAngle_Params params {};
		params.Perception = Perception;
		params.VisionAngle = VisionAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2F1A0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UseLoSHearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetUseLoSHearing(class UAIPerceptionComponent* Perception, bool UseLoSHearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing");
		
		UPerceptionExtensionBPLibrary_SetUseLoSHearing_Params params {};
		params.Perception = Perception;
		params.UseLoSHearing = UseLoSHearing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2F0D0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SightRange                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetSightRange(class UAIPerceptionComponent* Perception, float SightRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange");
		
		UPerceptionExtensionBPLibrary_SetSightRange_Params params {};
		params.Perception = Perception;
		params.SightRange = SightRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EFC0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetMaxAge(class UAIPerceptionComponent* Perception, class UClass* SenseClass, float MaxAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge");
		
		UPerceptionExtensionBPLibrary_SetMaxAge_Params params {};
		params.Perception = Perception;
		params.SenseClass = SenseClass;
		params.MaxAge = MaxAge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EE20
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LoSHearingRange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetLoSHearingRange(class UAIPerceptionComponent* Perception, float LoSHearingRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange");
		
		UPerceptionExtensionBPLibrary_SetLoSHearingRange_Params params {};
		params.Perception = Perception;
		params.LoSHearingRange = LoSHearingRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EEF0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LoseSightRange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetLoseSightRange(class UAIPerceptionComponent* Perception, float LoseSightRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange");
		
		UPerceptionExtensionBPLibrary_SetLoseSightRange_Params params {};
		params.Perception = Perception;
		params.LoseSightRange = LoseSightRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2ED50
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HearingRange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetHearingRange(class UAIPerceptionComponent* Perception, float HearingRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange");
		
		UPerceptionExtensionBPLibrary_SetHearingRange_Params params {};
		params.Perception = Perception;
		params.HearingRange = HearingRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EC80
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetDominantSense(class UAIPerceptionComponent* Perception, class UClass* SenseClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense");
		
		UPerceptionExtensionBPLibrary_SetDominantSense_Params params {};
		params.Perception = Perception;
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EAC0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DetectEnemies                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DetectNeutrals                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DetectFriendlies                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_SetDetectionByAffiliation(class UAIPerceptionComponent* Perception, class UClass* SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation");
		
		UPerceptionExtensionBPLibrary_SetDetectionByAffiliation_Params params {};
		params.Perception = Perception;
		params.SenseClass = SenseClass;
		params.DetectEnemies = DetectEnemies;
		params.DetectNeutrals = DetectNeutrals;
		params.DetectFriendlies = DetectFriendlies;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2EA30
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetVisionAngle(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle");
		
		UPerceptionExtensionBPLibrary_GetVisionAngle_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E9A0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_GetUseLoSHearing(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing");
		
		UPerceptionExtensionBPLibrary_GetUseLoSHearing_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E910
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetSightRange(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange");
		
		UPerceptionExtensionBPLibrary_GetSightRange_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E840
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetMaxAge(class UAIPerceptionComponent* Perception, class UClass* SenseClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge");
		
		UPerceptionExtensionBPLibrary_GetMaxAge_Params params {};
		params.Perception = Perception;
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E720
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetLoSHearingRange(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange");
		
		UPerceptionExtensionBPLibrary_GetLoSHearingRange_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E7B0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetLoseSightRange(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange");
		
		UPerceptionExtensionBPLibrary_GetLoseSightRange_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E690
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPerceptionExtensionBPLibrary::STATIC_GetHearingRange(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange");
		
		UPerceptionExtensionBPLibrary_GetHearingRange_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E600
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UPerceptionExtensionBPLibrary::STATIC_GetDominantSense(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense");
		
		UPerceptionExtensionBPLibrary_GetDominantSense_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E540
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAISenseAffiliationFilter UPerceptionExtensionBPLibrary::STATIC_GetDetectionByAffiliation(class UAIPerceptionComponent* Perception, class UClass* SenseClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation");
		
		UPerceptionExtensionBPLibrary_GetDetectionByAffiliation_Params params {};
		params.Perception = Perception;
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E4B0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_ForgetAll(class UAIPerceptionComponent* Perception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll");
		
		UPerceptionExtensionBPLibrary_ForgetAll_Params params {};
		params.Perception = Perception;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2E3E0
	 * 		Name   -> Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPerceptionComponent*                      Perception                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPerceptionExtensionBPLibrary::STATIC_ForgetActor(class UAIPerceptionComponent* Perception, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor");
		
		UPerceptionExtensionBPLibrary_ForgetActor_Params params {};
		params.Perception = Perception;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerceptionExtensionBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerceptionExtensionBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PerceptionExtension.PerceptionExtensionBPLibrary");
		return ptr;
	}

}


