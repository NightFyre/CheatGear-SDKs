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
	 * BlueprintGeneratedClass BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C
	 * Size -> 0x0028 (FullSize[0x0980] - InheritedSize[0x0958])
	 */
	class UBPWepFireProjectile_Skeksis_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		class UClass*                                              LightProjectile;                                         // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               ProjDamageScalar;                                        // 0x0968(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void ReceiveBeginPlay();
		void NotifyUseFinished_Event();
		void ExecuteUbergraph_BPWepFireProjectile_Skeksis(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
