#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties
	 */
	struct UUI_CharacterSlot_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UUI_CharacterSlot_C_BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CharacterSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot
	 */
	struct UUI_CharacterSlot_C_ExecuteUbergraph_UI_CharacterSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EB8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature
	 */
	struct UUI_CharacterSlot_C_OnDestroyClicked__DelegateSignature_Params
	{
	public:
		class UUI_CharacterSlot_C*                                 Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature
	 */
	struct UUI_CharacterSlot_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserProfile*                                        UserProfile;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
