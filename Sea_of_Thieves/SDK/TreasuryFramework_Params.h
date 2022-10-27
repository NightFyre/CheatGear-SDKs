#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
	 */
	struct AShimmerActor_OnDeactivateShimmer_Params
	{	};

	/**
	 * Function TreasuryFramework.ShimmerActor.OnActivateShimmer
	 */
	struct AShimmerActor_OnActivateShimmer_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnWaveStart
	 */
	struct ATreasuryRoom_OnWaveStart_Params
	{
	public:
		ETreasuryEncounterType                                     EncounterType;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETreasuryWaveType                                          WaveType;                                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster
	 */
	struct ATreasuryRoom_OnWaveFinishedVaultMaster_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnWaveFinished
	 */
	struct ATreasuryRoom_OnWaveFinished_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnWaveComplete
	 */
	struct ATreasuryRoom_OnWaveComplete_Params
	{
	public:
		ETreasuryEncounterType                                     EncounterType;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnVaultOpen
	 */
	struct ATreasuryRoom_OnVaultOpen_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnVaultClosed
	 */
	struct ATreasuryRoom_OnVaultClosed_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
	 */
	struct ATreasuryRoom_OnTreasuryStateChange_Params
	{
	public:
		ETreasuryState                                             PrevState;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETreasuryState                                             NewState;                                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
	 */
	struct ATreasuryRoom_OnTreasuryDeactivate_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
	 */
	struct ATreasuryRoom_OnTreasuryActivate_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
	 */
	struct ATreasuryRoom_OnStartRaiseWater_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
	 */
	struct ATreasuryRoom_OnStartDrainWater_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnRoomStarted
	 */
	struct ATreasuryRoom_OnRoomStarted_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnRaisedWater
	 */
	struct ATreasuryRoom_OnRaisedWater_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
	 */
	struct ATreasuryRoom_OnLeaveRoom_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnEnterRoom
	 */
	struct ATreasuryRoom_OnEnterRoom_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
	 */
	struct ATreasuryRoom_OnEncounterParamsSetup_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.OnDrainedWater
	 */
	struct ATreasuryRoom_OnDrainedWater_Params
	{	};

	/**
	 * Function TreasuryFramework.TreasuryRoom.GetState
	 */
	struct ATreasuryRoom_GetState_Params
	{
	public:
		ETreasuryState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
