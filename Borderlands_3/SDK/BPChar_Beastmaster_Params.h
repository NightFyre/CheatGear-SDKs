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
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.TryForceSpawnPetAtLocation
	 */
	struct ABPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRes;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetCurrentPet
	 */
	struct ABPChar_Beastmaster_C_GetCurrentPet_Params
	{
	public:
		class AOakCharacter*                                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetHeadMesh
	 */
	struct ABPChar_Beastmaster_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMesh*                                       HeadMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetupCallResponse
	 */
	struct ABPChar_Beastmaster_C_SetupCallResponse_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPet
	 */
	struct ABPChar_Beastmaster_C_GetPet_Params
	{
	public:
		class AOakCharacter*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.GetPrimaryActionAbility
	 */
	struct ABPChar_Beastmaster_C_GetPrimaryActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.UserConstructionScript
	 */
	struct ABPChar_Beastmaster_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnDialogSequenceFinished_3
	 */
	struct ABPChar_Beastmaster_C_OnDialogSequenceFinished_3_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.SetNewPetThreatScale
	 */
	struct ABPChar_Beastmaster_C_SetNewPetThreatScale_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.PlayPetAudioCallAndResponse
	 */
	struct ABPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params
	{
	public:
		Enum_BeastmasterDialogAction                               DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnInventoryPickedUp
	 */
	struct ABPChar_Beastmaster_C_OnInventoryPickedUp_Params
	{
	public:
		class AActor*                                              PickedUpActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.ReceiveBeginPlay
	 */
	struct ABPChar_Beastmaster_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.HideBackpack
	 */
	struct ABPChar_Beastmaster_C_HideBackpack_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.ShowBackpack
	 */
	struct ABPChar_Beastmaster_C_ShowBackpack_Params
	{	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.OnResourceNowFilled_AttackCommand
	 */
	struct ABPChar_Beastmaster_C_OnResourceNowFilled_AttackCommand_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Beastmaster.BPChar_Beastmaster_C.ExecuteUbergraph_BPChar_Beastmaster
	 */
	struct ABPChar_Beastmaster_C_ExecuteUbergraph_BPChar_Beastmaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_INH9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
