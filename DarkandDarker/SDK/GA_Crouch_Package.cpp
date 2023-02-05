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
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Crouch_C::EventReceived_F8111BF74E13C0F203A0A2A357F51B3A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A");
		
		UGA_Crouch_C_EventReceived_F8111BF74E13C0F203A0A2A357F51B3A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Crouch_C::OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB");
		
		UGA_Crouch_C_OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Crouch_C::OnChange_1B5403AA43F34E6E271364B87A6DC3AC(EMovementMode NewMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC");
		
		UGA_Crouch_C_OnChange_1B5403AA43F34E6E271364B87A6DC3AC_Params params {};
		params.NewMovementMode = NewMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Crouch_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.K2_ActivateAbility");
		
		UGA_Crouch_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Crouch.GA_Crouch_C.ExecuteUbergraph_GA_Crouch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Crouch_C::ExecuteUbergraph_GA_Crouch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Crouch.GA_Crouch_C.ExecuteUbergraph_GA_Crouch");
		
		UGA_Crouch_C_ExecuteUbergraph_GA_Crouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Crouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Crouch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Crouch.GA_Crouch_C");
		return ptr;
	}

}


