#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.UserConstructionScript
	 */
	struct ABP_CharacterEditor_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ReceiveBeginPlay
	 */
	struct ABP_CharacterEditor_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.InventoryItemAdded_Event_1
	 */
	struct ABP_CharacterEditor_Character_C_InventoryItemAdded_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             InvItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterEditor_Character.BP_CharacterEditor_Character_C.ExecuteUbergraph_BP_CharacterEditor_Character
	 */
	struct ABP_CharacterEditor_Character_C_ExecuteUbergraph_BP_CharacterEditor_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
