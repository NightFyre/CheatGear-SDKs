#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.RemoveVOIPUser
	 */
	struct UWBP_VOIPUserManager_C_RemoveVOIPUser_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.FindOrAddVOIPUser
	 */
	struct UWBP_VOIPUserManager_C_FindOrAddVOIPUser_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsRadio;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZOF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_VOIPUser_C*                                     OutVOIPUser;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Construct
	 */
	struct UWBP_VOIPUserManager_C_Construct_Params
	{	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerControllerStateChanged_Event_1
	 */
	struct UWBP_VOIPUserManager_C_OnPlayerControllerStateChanged_Event_1_Params
	{
	public:
		class FName                                                OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.Update
	 */
	struct UWBP_VOIPUserManager_C_Update_Params
	{	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnPlayerReadyRoomStatusChanged_Event_1
	 */
	struct UWBP_VOIPUserManager_C_OnPlayerReadyRoomStatusChanged_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.OnVOIPEvent_Event_1
	 */
	struct UWBP_VOIPUserManager_C_OnVOIPEvent_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasRadio;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_VOIPUserManager.WBP_VOIPUserManager_C.ExecuteUbergraph_WBP_VOIPUserManager
	 */
	struct UWBP_VOIPUserManager_C_ExecuteUbergraph_WBP_VOIPUserManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
