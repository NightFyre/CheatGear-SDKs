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
	 * BlueprintGeneratedClass BPWepFireBeam_IonLaser.BPWepFireBeam_IonLaser_C
	 * Size -> 0x0010 (FullSize[0x0948] - InheritedSize[0x0938])
	 */
	class UBPWepFireBeam_IonLaser_C : public UWeaponFireBeamComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0938(0x0008) Transient, DuplicateTransient
		class UClass*                                              LightProjectile;                                         // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyUseStarted_Event();
		void NotifyUseFinished_Event();
		void EvaluateShot();
		void K2_OnDeactivated();
		void ExecuteUbergraph_BPWepFireBeam_IonLaser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
