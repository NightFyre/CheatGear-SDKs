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
	 * BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C
	 * Size -> 0x0021 (FullSize[0x09A1] - InheritedSize[0x0980])
	 */
	class UBPWeaponFireProjectileComponent_JAK_Rose_C : public UBPWeaponFireProjectileComponent_JAK_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        TimerHandle;                                             // 0x0988(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       ChargedShot;                                             // 0x0990(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RXE1[0x7];                                   // 0x0991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ChargeLightProjectile;                                   // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChargeBuffer;                                            // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UClass* GetShotLightProjectileData();
		void ReceiveBeginPlay();
		void NotifyUsedStarted_Event();
		void NotifyUsedFinished_Event();
		void IncrementBurst();
		void ResetGate();
		void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
