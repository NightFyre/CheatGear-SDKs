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
	 * BlueprintGeneratedClass BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C
	 * Size -> 0x0027 (FullSize[0x2434] - InheritedSize[0x240D])
	 */
	class ABPChar_TedioreTurret_PS_Sabre_C : public ABPChar_TedioreTurret_PS_C
	{
	public:
		unsigned char                                              UnknownData_HZ5L[0x3];                                   // 0x240D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2410(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Shield;                                               // 0x2418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_Sabre_TurretShield;                                   // 0x2420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneBodySwitchComponent*                           ShieldBodySwitch;                                        // 0x2428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShotCounter;                                             // 0x2430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Fired(class AWeapon* EventWeapon);
		void Reload2(bool bAutoReload);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
