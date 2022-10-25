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
	 * BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C
	 * Size -> 0x0120 (FullSize[0x0218] - InheritedSize[0x00F8])
	 */
	class UOakAbility_Siren_ClassMod_Unique_01_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Siren_Unique01; // 0x0100(0x0028)
		struct FEnvQueryParams                                     FindTargets;                                             // 0x0128(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class AActor*>                                      TargetList;                                              // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UClass*                                              PhasetranceElement;                                      // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerController*                                   PlayerController;                                        // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               GraspDamagePerSecond;                                    // 0x0200(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnActivated();
		void SirenUnique01_GraspedTarget(class AGbxCharacter* GraspedTarget);
		void ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
