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
	 * BlueprintGeneratedClass Action_GroundSlam_High_Siren_Exit.Action_GroundSlam_High_Siren_Exit_C
	 * Size -> 0x00B8 (FullSize[0x02D8] - InheritedSize[0x0220])
	 */
	class UAction_GroundSlam_High_Siren_Exit_C : public UAction_GroundSlam_High_Exit_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) Transient, DuplicateTransient
		TMap<class UClass*, class UParticleSystem*>                GroundSlam_FX;                                           // 0x0228(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class UClass*, class UParticleSystem*>                GroundSlam_FX_3rd;                                       // 0x0278(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AActor*                                              Player_Actor;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABPChar_Player_C*                                    Player_BPChar;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayVFX();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_GroundSlam_High_Siren_Exit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
