#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
	 */
	struct ADynamicRoomBase_VisibleForAllPlayers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom
	 */
	struct ADynamicRoomBase_UnloadRoom_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible
	 */
	struct ADynamicRoomBase_SelectedRoomVisible_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded
	 */
	struct ADynamicRoomBase_SelectedRoomLoaded_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded
	 */
	struct ADynamicRoomBase_SelectedRoomClassLoaded_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
	 */
	struct ADynamicRoomBase_OnRep_RoomInfoToLoad_Params
	{
	public:
		struct FDynamicRoomReplicationInfo                         OldRoomInfoToLoad;                                       // 0x0000(0x0010)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
	 */
	struct ADynamicRoomBase_InstanceRoom_Params
	{
	public:
		class UDynamicRoomBaseData*                                RoomToLoad;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom
	 */
	struct ADynamicRoomBase_InstanceRandomRoom_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
	 */
	struct ADynamicRoomBase_GetPlayersInLevel_Params
	{
	public:
		TArray<class AGbxCharacter*>                               Players;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
	 */
	struct ADynamicRoomBase_GetCurrentRoomData_Params
	{
	public:
		class UDynamicRoomBaseData*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
	 */
	struct ADynamicRoomBase_GetAvailableRoomData_Params
	{
	public:
		TArray<class UDynamicRoomBaseData*>                        AvailableRooms;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest
	 */
	struct ADynamicRoomBase_AllPlayerVisibilityTest_Params
	{	};

	/**
	 * Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
	 */
	struct UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
