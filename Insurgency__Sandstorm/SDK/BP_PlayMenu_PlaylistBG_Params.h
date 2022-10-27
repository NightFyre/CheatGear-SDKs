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
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.SetNextOpenImmediate
	 */
	struct UBP_PlayMenu_PlaylistBG_C_SetNextOpenImmediate_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.OnNewImageTransitioned
	 */
	struct UBP_PlayMenu_PlaylistBG_C_OnNewImageTransitioned_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.TransitionTo
	 */
	struct UBP_PlayMenu_PlaylistBG_C_TransitionTo_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.PreConstruct
	 */
	struct UBP_PlayMenu_PlaylistBG_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.Construct
	 */
	struct UBP_PlayMenu_PlaylistBG_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlaylistBG.BP_PlayMenu_PlaylistBG_C.ExecuteUbergraph_BP_PlayMenu_PlaylistBG
	 */
	struct UBP_PlayMenu_PlaylistBG_C_ExecuteUbergraph_BP_PlayMenu_PlaylistBG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
