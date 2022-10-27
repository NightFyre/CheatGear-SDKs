#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_Character_AnimFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetLocalWeaponSequenceArray_Generic(const struct FAStruct_Generic_WeaponAnimContainer& AStruct_WeaponAnimContainer_Menu, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext);
		void STATIC_SetLocalWeaponSequenceArray_Menu(const struct FAStruct_WeaponAnimContainer_Menu& AStruct_WeaponAnimContainer_Menu, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext);
		void STATIC_SetLocalWeaponSequenceArray_Player(const struct FAStruct_WeaponAnimContainer& AStruct_WeaponAnimContainer, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext);
		void STATIC_PostInitCheck(class UObject* Object, class AOakCharacter* Character, class UGbxCharacterMovementComponent* GbxMoveComp, class UOakCharacterMovementComponent* OakMoveComp, class UObject* __WorldContext);
		void STATIC_Log_Error(class UObject* Object, const class FText& Log_Text, class UObject* __WorldContext);
		void STATIC_InitCharacterComponents(class APawn* Target, class AOakCharacter** Character, class UGbxCharacterMovementComponent** GbxMoveComp, class UOakCharacterMovementComponent** OakMoveComp, class UObject* __WorldContext, class AOakCharacter** Characteroutput, class UGbxCharacterMovementComponent** GbxCharacterMovement, class UOakCharacterMovementComponent** OakCharacterMovement);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
