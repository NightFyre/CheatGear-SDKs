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
	 * BlueprintGeneratedClass TEDProjectile_Execute.TEDProjectile_Execute_C
	 * Size -> 0x000C (FullSize[0x08D8] - InheritedSize[0x08CC])
	 */
	class ATEDProjectile_Execute_C : public ATEDProjectile_Base_C
	{
	public:
		unsigned char                                              UnknownData_NCW8[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08D0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void OnHitEnemy(const struct FHitResult& Hit);
		void ExecuteUbergraph_TEDProjectile_Execute(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
