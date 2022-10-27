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
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.RemoveShield
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_8_C::RemoveShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.RemoveShield");
		
		UPassive_Beastmaster_DLCSkill_8_C_RemoveShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ConfigureShield
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_8_C::ConfigureShield(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ConfigureShield");
		
		UPassive_Beastmaster_DLCSkill_8_C_ConfigureShield_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_8_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.OnActivated");
		
		UPassive_Beastmaster_DLCSkill_8_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.UpdateShield
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_8_C::UpdateShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.UpdateShield");
		
		UPassive_Beastmaster_DLCSkill_8_C_UpdateShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_8_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9");
		
		UPassive_Beastmaster_DLCSkill_8_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_9_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_DLCSkill_8_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_DLCSkill_8_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_9.Passive_Beastmaster_DLCSkill_8_C");
		return ptr;
	}

}


