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
	 * 		Name   -> Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CharacterEditor_Character_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.UserConstructionScript");
		
		ABP_CharacterEditor_Character_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CharacterEditor_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ReceiveBeginPlay");
		
		ABP_CharacterEditor_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.InventoryItemAdded_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     InvItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterEditor_Character_C::InventoryItemAdded_Event_1(class AGBCharacter* Character, class AGBItem* InvItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.InventoryItemAdded_Event_1");
		
		ABP_CharacterEditor_Character_C_InventoryItemAdded_Event_1_Params params {};
		params.Character = Character;
		params.InvItem = InvItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ExecuteUbergraph_BP_CharacterEditor_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterEditor_Character_C::ExecuteUbergraph_BP_CharacterEditor_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ExecuteUbergraph_BP_CharacterEditor_Character");
		
		ABP_CharacterEditor_Character_C_ExecuteUbergraph_BP_CharacterEditor_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CharacterEditor_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterEditor_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterEditor_Character.BP_CharacterEditor_Character_C");
		return ptr;
	}

}


