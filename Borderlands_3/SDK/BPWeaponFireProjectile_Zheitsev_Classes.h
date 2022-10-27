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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Zheitsev.BPWeaponFireProjectile_Zheitsev_C
	 * Size -> 0x00E8 (FullSize[0x0A40] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_Zheitsev_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		struct FEnvQueryParams                                     Query;                                                   // 0x0960(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FTransform>                                  ProjSpawnLocs;                                           // 0x0A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class AActor*>                                      TargetList;                                              // 0x0A28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AActor*                                              HomingTarget;                                            // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
		void ExecuteUbergraph_BPWeaponFireProjectile_Zheitsev(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
