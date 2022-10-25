#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentGoal
	 */
	struct AGOAPGroupNodeBot_Raider_C_OnRep_CurrentGoal_Params
	{	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnRep_CurrentPlan
	 */
	struct AGOAPGroupNodeBot_Raider_C_OnRep_CurrentPlan_Params
	{	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_919336EC48AF4607A4FA2CB56D3692BB
	 */
	struct AGOAPGroupNodeBot_Raider_C_OnLoaded_919336EC48AF4607A4FA2CB56D3692BB_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E
	 */
	struct AGOAPGroupNodeBot_Raider_C_OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.OnGOAPDEBUGplan
	 */
	struct AGOAPGroupNodeBot_Raider_C_OnGOAPDEBUGplan_Params
	{
	public:
		class FString                                              CurrentPlan;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_StoreBaseMissRate
	 */
	struct AGOAPGroupNodeBot_Raider_C_Ai_StoreBaseMissRate_Params
	{
	public:
		float                                                      BaseMissRate;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.MulticastPlayVoice
	 */
	struct AGOAPGroupNodeBot_Raider_C_MulticastPlayVoice_Params
	{
	public:
		bool                                                       is_A_Shout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R84O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                VoiceSet_DT_Row;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SAW5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSet_DT;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceiveBeginPlay
	 */
	struct AGOAPGroupNodeBot_Raider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_CheckSetMyInitialAmmoCount
	 */
	struct AGOAPGroupNodeBot_Raider_C_Ai_CheckSetMyInitialAmmoCount_Params
	{	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.PlayVoice
	 */
	struct AGOAPGroupNodeBot_Raider_C_PlayVoice_Params
	{
	public:
		bool                                                       IsAShout;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0UA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSetDT;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_SetMyGoal
	 */
	struct AGOAPGroupNodeBot_Raider_C_Ai_SetMyGoal_Params
	{
	public:
		class FString                                              CurrentPlan;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.Ai_TurnOnOffDebugText
	 */
	struct AGOAPGroupNodeBot_Raider_C_Ai_TurnOnOffDebugText_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ReceivePossessed
	 */
	struct AGOAPGroupNodeBot_Raider_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C.ExecuteUbergraph_GOAPGroupNodeBot_Raider
	 */
	struct AGOAPGroupNodeBot_Raider_C_ExecuteUbergraph_GOAPGroupNodeBot_Raider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
