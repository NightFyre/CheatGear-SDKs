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
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_Init_Params
	{	};

	/**
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_ExecuteUbergraph_UI_ContinueOrNewCharacterDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_New__DelegateSignature_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    GameplayPort;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AuthToken;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature
	 */
	struct UUI_ContinueOrNewCharacterDialog_C_Continue__DelegateSignature_Params
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    GameplayPort;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResponsePort;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AuthToken;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
