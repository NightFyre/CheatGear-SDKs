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
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic
	 */
	struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Generic_Params
	{
	public:
		struct FAStruct_Generic_WeaponAnimContainer                AStruct_WeaponAnimContainer_Menu;                        // 0x0000(0x0A20)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<class FName>                                        LiveWeaponPoses;                                         // 0x0A20(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    WeaponManufacturer;                                      // 0x0A30(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WeaponType;                                              // 0x0A34(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GripType;                                                // 0x0A38(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ForeGripType;                                            // 0x0A3C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug_Pose_Array;                                        // 0x0A40(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5JCZ[0x7];                                   // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0A48(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu
	 */
	struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Menu_Params
	{
	public:
		struct FAStruct_WeaponAnimContainer_Menu                   AStruct_WeaponAnimContainer_Menu;                        // 0x0000(0x0780)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<class FName>                                        LiveWeaponPoses;                                         // 0x0780(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    WeaponManufacturer;                                      // 0x0790(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WeaponType;                                              // 0x0794(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GripType;                                                // 0x0798(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ForeGripType;                                            // 0x079C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug_Pose_Array;                                        // 0x07A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19Z6[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x07A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player
	 */
	struct UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Player_Params
	{
	public:
		struct FAStruct_WeaponAnimContainer                        AStruct_WeaponAnimContainer;                             // 0x0000(0x0780)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<class FName>                                        LiveWeaponPoses;                                         // 0x0780(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    WeaponManufacturer;                                      // 0x0790(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WeaponType;                                              // 0x0794(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GripType;                                                // 0x0798(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ForeGripType;                                            // 0x079C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug_Pose_Array;                                        // 0x07A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4W6G[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x07A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck
	 */
	struct UBP_Character_AnimFunctionLibrary_C_PostInitCheck_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxCharacterMovementComponent*                      GbxMoveComp;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOakCharacterMovementComponent*                      OakMoveComp;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error
	 */
	struct UBP_Character_AnimFunctionLibrary_C_Log_Error_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Log_Text;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents
	 */
	struct UBP_Character_AnimFunctionLibrary_C_InitCharacterComponents_Params
	{
	public:
		class APawn*                                               Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxCharacterMovementComponent*                      GbxMoveComp;                                             // 0x0010(0x0008)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOakCharacterMovementComponent*                      OakMoveComp;                                             // 0x0018(0x0008)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       Characteroutput;                                         // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxCharacterMovementComponent*                      GbxCharacterMovement;                                    // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOakCharacterMovementComponent*                      OakCharacterMovement;                                    // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
