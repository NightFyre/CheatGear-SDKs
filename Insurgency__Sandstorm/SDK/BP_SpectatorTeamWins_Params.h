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
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamWins
	 */
	struct UBP_SpectatorTeamWins_C_UpdateTeamWins_Params
	{
	public:
		class ATeamInfo*                                           Team;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              CurrentWins;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QCC6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          LabelWidget;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamIconAndTint
	 */
	struct UBP_SpectatorTeamWins_C_UpdateTeamIconAndTint_Params
	{
	public:
		class ATeamInfo*                                           Team;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              IconWidget;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              BackgroundWidget;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.UpdateTeamReferences
	 */
	struct UBP_SpectatorTeamWins_C_UpdateTeamReferences_Params
	{	};

	/**
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Construct
	 */
	struct UBP_SpectatorTeamWins_C_Construct_Params
	{	};

	/**
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.Tick
	 */
	struct UBP_SpectatorTeamWins_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpectatorTeamWins.BP_SpectatorTeamWins_C.ExecuteUbergraph_BP_SpectatorTeamWins
	 */
	struct UBP_SpectatorTeamWins_C_ExecuteUbergraph_BP_SpectatorTeamWins_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
