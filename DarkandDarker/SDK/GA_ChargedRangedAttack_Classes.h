#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass GA_ChargedRangedAttack.GA_ChargedRangedAttack_C
	 * Size -> 0x0030 (FullSize[0x05D0] - InheritedSize[0x05A0])
	 */
	class UGA_ChargedRangedAttack_C : public UGA_ChargedRangedAttackBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     RnadomAngle;                                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RnadomAngle_Sum;                                         // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EndTraceLocation;                                        // 0x05B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnSuccess_1109563B47783EC02F381C99DD38D5C5(class AActor* ProjectileActor);
		void CreateMultiShotProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation);
		void ExecuteUbergraph_GA_ChargedRangedAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
