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
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.UpdateTierIcon
	 */
	struct UBP_PlayMenu_CompRank_C_UpdateTierIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Band;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnCompRatingUpdate
	 */
	struct UBP_PlayMenu_CompRank_C_OnCompRatingUpdate_Params
	{
	public:
		struct FCompetitiveRating                                  Rating;                                                  // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PreConstruct
	 */
	struct UBP_PlayMenu_CompRank_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.Construct
	 */
	struct UBP_PlayMenu_CompRank_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PlayerRatingUpdated
	 */
	struct UBP_PlayMenu_CompRank_C_PlayerRatingUpdated_Params
	{
	public:
		struct FCompetitiveRating                                  Rating;                                                  // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.ExecuteUbergraph_BP_PlayMenu_CompRank
	 */
	struct UBP_PlayMenu_CompRank_C_ExecuteUbergraph_BP_PlayMenu_CompRank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnUpdated__DelegateSignature
	 */
	struct UBP_PlayMenu_CompRank_C_OnUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       HasRating;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInPlacements;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
