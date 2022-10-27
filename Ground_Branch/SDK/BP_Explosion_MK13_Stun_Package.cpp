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
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_MK13_Stun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ReceiveBeginPlay");
		
		ABP_Explosion_MK13_Stun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_MK13_Stun_C::StunLocalPlayer(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunLocalPlayer");
		
		ABP_Explosion_MK13_Stun_C_StunLocalPlayer_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.FindAICharacters
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_MK13_Stun_C::FindAICharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.FindAICharacters");
		
		ABP_Explosion_MK13_Stun_C_FindAICharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.CheckCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_MK13_Stun_C::CheckCharacter(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.CheckCharacter");
		
		ABP_Explosion_MK13_Stun_C_CheckCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Explosion_MK13_Stun_C::StunCharacter(class AGBCharacter* Character, const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunCharacter");
		
		ABP_Explosion_MK13_Stun_C_StunCharacter_Params params {};
		params.Character = Character;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.LightFlash
	 * 		Flags  -> ()
	 */
	void ABP_Explosion_MK13_Stun_C::LightFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.LightFlash");
		
		ABP_Explosion_MK13_Stun_C_LightFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ExecuteUbergraph_BP_Explosion_MK13_Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosion_MK13_Stun_C::ExecuteUbergraph_BP_Explosion_MK13_Stun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ExecuteUbergraph_BP_Explosion_MK13_Stun");
		
		ABP_Explosion_MK13_Stun_C_ExecuteUbergraph_BP_Explosion_MK13_Stun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosion_MK13_Stun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosion_MK13_Stun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C");
		return ptr;
	}

}


