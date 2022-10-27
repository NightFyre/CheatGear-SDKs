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
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.CheckClassMod
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EquippedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_ClassMod_C::CheckClassMod(class AActor* EquippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.CheckClassMod");
		
		UBP_Challenge_CharacterSpecific_ClassMod_C_CheckClassMod_Params params {};
		params.EquippedActor = EquippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.SetBinds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BindSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Challenge_CharacterSpecific_ClassMod_C::SetBinds(class AOakCharacter* Character, bool* BindSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.SetBinds");
		
		UBP_Challenge_CharacterSpecific_ClassMod_C_SetBinds_Params params {};
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
	 * 		Name   -> Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_CharacterSpecific_ClassMod_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod");
		
		UBP_Challenge_CharacterSpecific_ClassMod_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_ClassMod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Challenge_CharacterSpecific_ClassMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_CharacterSpecific_ClassMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific_ClassMod.BP_Challenge_CharacterSpecific_ClassMod_C");
		return ptr;
	}

}


