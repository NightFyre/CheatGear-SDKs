#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Handgun_Master.BP_Handgun_Master_C
	 * Size -> 0x000C (FullSize[0x0668] - InheritedSize[0x065C])
	 */
	class ABP_Handgun_Master_C : public ABP_Firearm_Master_C
	{
	public:
		unsigned char                                              UnknownData_7NFI[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		float GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition);
		void LockOnEmpty(bool* bShouldLock);
		void SetEquipInfo(unsigned char* OutSwitchType, EHandsRequired* OutHandsRequired);
		void PositionAlphaMet();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Handgun_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
