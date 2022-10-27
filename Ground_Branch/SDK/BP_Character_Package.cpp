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
	 * 		Name   -> Function BP_Character.BP_Character_C.GatherAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     OutAssets                                                  (Parm, OutParm)
	 */
	void ABP_Character_C::GatherAssets(TArray<struct FSoftObjectPath>* OutAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GatherAssets");
		
		ABP_Character_C_GatherAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssets != nullptr)
			*OutAssets = params.OutAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.DamageOrgan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Character_C::DamageOrgan(const struct FHitResult& HitResult, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DamageOrgan");
		
		ABP_Character_C_DamageOrgan_Params params {};
		params.HitResult = HitResult;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnLandedEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              FallingSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::OnLandedEffects(const struct FHitResult& Hit, float FallingSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnLandedEffects");
		
		ABP_Character_C_OnLandedEffects_Params params {};
		params.Hit = Hit;
		params.FallingSpeed = FallingSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveBeginPlay");
		
		ABP_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnPlayVoiceEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               VoiceAudioEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLocalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::OnPlayVoiceEvent(class UAkAudioEvent* VoiceAudioEvent, bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnPlayVoiceEvent");
		
		ABP_Character_C_OnPlayVoiceEvent_Params params {};
		params.VoiceAudioEvent = VoiceAudioEvent;
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnPlayVoiceCallback_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::OnPlayVoiceCallback_Event(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnPlayVoiceCallback_Event");
		
		ABP_Character_C_OnPlayVoiceCallback_Event_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnStopVoiceEvent
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnStopVoiceEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnStopVoiceEvent");
		
		ABP_Character_C_OnStopVoiceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveTick");
		
		ABP_Character_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BlueprintAddDefaultItems
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::BlueprintAddDefaultItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BlueprintAddDefaultItems");
		
		ABP_Character_C_BlueprintAddDefaultItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.PlayDeathVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DeathVoiceKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::PlayDeathVoice(const class FName& DeathVoiceKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.PlayDeathVoice");
		
		ABP_Character_C_PlayDeathVoice_Params params {};
		params.DeathVoiceKey = DeathVoiceKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.K2_OnStartCrouch");
		
		ABP_Character_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.K2_OnEndCrouch");
		
		ABP_Character_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ExecuteUbergraph_BP_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character");
		
		ABP_Character_C_ExecuteUbergraph_BP_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character.BP_Character_C");
		return ptr;
	}

}


