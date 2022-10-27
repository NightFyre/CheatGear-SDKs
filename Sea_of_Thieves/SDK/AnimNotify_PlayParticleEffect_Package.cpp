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
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString UAnimNotify_PlayParticleEffect_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName");
		
		UAnimNotify_PlayParticleEffect_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAnimNotify_PlayParticleEffect_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify");
		
		UAnimNotify_PlayParticleEffect_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayParticleEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayParticleEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C");
		return ptr;
	}

}


