#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnFocusReceived
	 */
	struct UBP_MainMenu_LanguagePanel_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature
	 */
	struct UBP_MainMenu_LanguagePanel_C_BndEvt__BP_LanguageSelect_K2Node_ComponentBoundEvent_1_LanguageApplied__DelegateSignature_Params
	{
	public:
		bool                                                       IsNewCulture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.ExecuteUbergraph_BP_MainMenu_LanguagePanel
	 */
	struct UBP_MainMenu_LanguagePanel_C_ExecuteUbergraph_BP_MainMenu_LanguagePanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_LanguagePanel.BP_MainMenu_LanguagePanel_C.OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_LanguagePanel_C_OnContinue__DelegateSignature_Params
	{
	public:
		bool                                                       IsNewCulture;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
