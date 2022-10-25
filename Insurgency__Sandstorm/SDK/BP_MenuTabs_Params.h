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
	 * Function BP_MenuTabs.BP_MenuTabs_C.SetTabEnabled
	 */
	struct UBP_MenuTabs_C_SetTabEnabled_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnabled;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.SetTabVisibility
	 */
	struct UBP_MenuTabs_C_SetTabVisibility_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisibilty;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.NavigateDirection
	 */
	struct UBP_MenuTabs_C_NavigateDirection_Params
	{
	public:
		bool                                                       bGoRight;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.SetHighlightedTab
	 */
	struct UBP_MenuTabs_C_SetHighlightedTab_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.PreConstruct
	 */
	struct UBP_MenuTabs_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.OnChildTabSelected
	 */
	struct UBP_MenuTabs_C_OnChildTabSelected_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.ExecuteUbergraph_BP_MenuTabs
	 */
	struct UBP_MenuTabs_C_ExecuteUbergraph_BP_MenuTabs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuTabs.BP_MenuTabs_C.OnTabSelected__DelegateSignature
	 */
	struct UBP_MenuTabs_C_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
