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
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment
	 */
	struct UBPBeastmasterComponent_C_ValidateCurrentPetAugment_Params
	{
	public:
		class UOakPlayerCharacterAugmentData_Pet*                  PetAugment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_14MY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent
	 */
	struct UBPBeastmasterComponent_C_GetPetCooldownRefundPercent_Params
	{
	public:
		EPetRespawnCooldownRefundType                              RefundType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13PF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation
	 */
	struct UBPBeastmasterComponent_C_GetFallbackPetSpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions
	 */
	struct UBPBeastmasterComponent_C_CheckForSpawnCollisions_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCollisionsDetected;                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_25E7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass
	 */
	struct UBPBeastmasterComponent_C_GetPetSpawnClass_Params
	{
	public:
		class UOakPlayerCharacterAugmentData_Pet*                  InAugment;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              res;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet
	 */
	struct UBPBeastmasterComponent_C_SpawnNewPet_Params
	{
	public:
		class UOakPlayerCharacterAugmentData_Pet*                  PetAugment;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ECN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AOakCharacter*                                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet
	 */
	struct UBPBeastmasterComponent_C_OnReleasedPet_Params
	{
	public:
		bool                                                       bForced;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPetReleaseReason                                          ReleaseReason;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay
	 */
	struct UBPBeastmasterComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack
	 */
	struct UBPBeastmasterComponent_C_TryOrderPetAttack_Params
	{	};

	/**
	 * Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent
	 */
	struct UBPBeastmasterComponent_C_ExecuteUbergraph_BPBeastmasterComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_334K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
