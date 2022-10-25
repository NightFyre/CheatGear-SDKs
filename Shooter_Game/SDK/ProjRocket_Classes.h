#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * BlueprintGeneratedClass ProjRocket.ProjRocket_C
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class AProjRocket_C : public AShooterProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio;                                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ExecuteUbergraph_ProjRocket(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
