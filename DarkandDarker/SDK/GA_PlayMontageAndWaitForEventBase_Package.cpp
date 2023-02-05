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
	 * 		Name   -> Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToMonsterBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBaseWithOptions                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToMonsterBase");
		
		UGA_PlayMontageAndWaitForEventBase_C_GetBBTargetActorToMonsterBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (DCMonsterBaseWithOptions != nullptr)
			*DCMonsterBaseWithOptions = params.DCMonsterBaseWithOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToCharacterBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADCCharacterBase*                            AsDCCharacterBase                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** AsDCCharacterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToCharacterBase");
		
		UGA_PlayMontageAndWaitForEventBase_C_GetBBTargetActorToCharacterBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AsDCCharacterBase != nullptr)
			*AsDCCharacterBase = params.AsDCCharacterBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActor(bool* Result, class UObject** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActor");
		
		UGA_PlayMontageAndWaitForEventBase_C_GetBBTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_PlayMontageAndWaitForEventBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_PlayMontageAndWaitForEventBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C");
		return ptr;
	}

}


