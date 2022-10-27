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
	 * 		RVA    -> 0x0370BAB0
	 * 		Name   -> Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UVoiceChatEmitterInterface::GetVoiceLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceLocation");
		
		UVoiceChatEmitterInterface_GetVoiceLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370B9E0
	 * 		Name   -> Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwiseEmitter                               EmitterProxy                                               (Parm, OutParm)
	 */
	void UVoiceChatEmitterInterface::GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAudioEmitterProxy");
		
		UVoiceChatEmitterInterface_GetVoiceAudioEmitterProxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EmitterProxy != nullptr)
			*EmitterProxy = params.EmitterProxy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370B930
	 * 		Name   -> Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVoiceChatEmitterInterface::GetVoiceAttenuationScaler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PositionalVoice.VoiceChatEmitterInterface.GetVoiceAttenuationScaler");
		
		UVoiceChatEmitterInterface_GetVoiceAttenuationScaler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceChatEmitterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceChatEmitterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PositionalVoice.VoiceChatEmitterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceChatRendererInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceChatRendererInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceChatRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceChatRenderer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRenderer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceChatRendererRetreivalInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceChatRendererRetreivalInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererRetreivalInterface");
		return ptr;
	}

}


