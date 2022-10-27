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
	 * BlueprintGeneratedClass Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C
	 * Size -> 0x0008 (FullSize[0x08B0] - InheritedSize[0x08A8])
	 */
	class UMove_IronBear_SurpriseForYou_C : public UOakControlledMove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A8(0x0008) Transient, DuplicateTransient

	public:
		void OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void OnStop(bool bInterrupted);
		void ExecuteUbergraph_Move_IronBear_SurpriseForYou(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
