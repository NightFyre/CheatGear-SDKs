#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.CheckForClassSymbolUpdates
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates_Params
	{	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.UpdateClassSymbol
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol_Params
	{
	public:
		class UHDKit*                                              Loadout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetClassSymbolForLoadout
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout_Params
	{
	public:
		class UHDKit*                                              Loadout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         ClassSymbolToUse;                                        // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetMostValidLoadoutFromPS
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHDKit*                                              Loadout;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnVoiceMsgInfoSet
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet_Params
	{
	public:
		bool                                                       bIsDesignTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Tick
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PlayerLoadoutChanged
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged_Params
	{
	public:
		class UHDKit*                                              NewLoadout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PreConstruct
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnInitialized
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Activate
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_Activate_Params
	{	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Deactivate
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_Deactivate_Params
	{	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.InputAnimFinished
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_InputAnimFinished_Params
	{	};

	/**
	 * Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing
	 */
	struct UWBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
