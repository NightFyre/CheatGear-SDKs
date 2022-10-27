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
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabAlerted
	 */
	struct UUI_TabModeTabsContainer_C_SetTabAlerted_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Alerted;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6RJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
	 */
	struct UUI_TabModeTabsContainer_C_GetTabFromTabMode_Params
	{
	public:
		ETabMode                                                   Tab;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LG9X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_TabModeTab_C*                                    Result;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
	 */
	struct UUI_TabModeTabsContainer_C_SetTabEnabled_Params
	{
	public:
		ETabMode                                                   Tab;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C27A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
	 */
	struct UUI_TabModeTabsContainer_C_OpenSpecifiedTab_Params
	{
	public:
		class UUI_TabModeTab_C*                                    Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETabMode                                                   tabMode;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L9PG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
	 */
	struct UUI_TabModeTabsContainer_C_SelectTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
	 */
	struct UUI_TabModeTabsContainer_C_Construct_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
	 */
	struct UUI_TabModeTabsContainer_C_BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
	 */
	struct UUI_TabModeTabsContainer_C_ExecuteUbergraph_UI_TabModeTabsContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1JBW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
