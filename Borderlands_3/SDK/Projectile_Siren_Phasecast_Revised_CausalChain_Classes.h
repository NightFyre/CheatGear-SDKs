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
	 * BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C
	 * Size -> 0x000C (FullSize[0x07CC] - InheritedSize[0x07C0])
	 */
	class AProjectile_Siren_Phasecast_Revised_CausalChain_C : public AProjectile_Siren_Phasecast_Revised_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) Transient, DuplicateTransient
		int32_t                                                    EnemyHitCount;                                           // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalculateDamage(float* res);
		void UserConstructionScript();
		void DoDamageToEnemy(class AActor* Enemy);
		void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
