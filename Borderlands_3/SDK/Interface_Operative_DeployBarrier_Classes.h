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
	 * BlueprintGeneratedClass Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_Operative_DeployBarrier_C : public UInterface
	{
	public:
		void IsHoldingBarrier(bool* res);
		void RefillBarrierHealth(bool* res);
		void GiveBarrierHealth(float Health, float* New_Health);
		void GetBarrierReference(class AActor** Barrier);
		void ActivateHighlyUnstableFromCarry();
		void ActivateHighlyUnstable();
		void GetBarrierHealthPercent(float* HealthPercent);
		void StartHoldingBarrier(class AActor* Player);
		void DeployNewBarrierInHand(class AActor* Player);
		void DeployNewBarrierAroundPlayer();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
