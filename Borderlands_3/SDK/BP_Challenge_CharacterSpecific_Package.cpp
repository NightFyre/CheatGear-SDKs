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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.SetBinds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BindSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Challenge_CharacterSpecific_C::SetBinds(class AOakCharacter* Character, bool* BindSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.SetBinds");
		
		UBP_Challenge_CharacterSpecific_C_SetBinds_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BindSet != nullptr)
			*BindSet = params.BindSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.OnInitChallengeInstance");
		
		UBP_Challenge_CharacterSpecific_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific");
		
		UBP_Challenge_CharacterSpecific_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Challenge_CharacterSpecific_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_CharacterSpecific_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C");
		return ptr;
	}

}


