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
	 * Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.RefreshInternal
	 */
	struct UBP_Widget_SpectatorDPR_C_RefreshInternal_Params
	{	};

	/**
	 * Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.SetActive
	 */
	struct UBP_Widget_SpectatorDPR_C_SetActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.UpdateImagesInternal
	 */
	struct UBP_Widget_SpectatorDPR_C_UpdateImagesInternal_Params
	{
	public:
		int32_t                                                    NewRequiredPlayers;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDeadPlayers;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.PreConstruct
	 */
	struct UBP_Widget_SpectatorDPR_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_SpectatorDPR.BP_Widget_SpectatorDPR_C.ExecuteUbergraph_BP_Widget_SpectatorDPR
	 */
	struct UBP_Widget_SpectatorDPR_C_ExecuteUbergraph_BP_Widget_SpectatorDPR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
