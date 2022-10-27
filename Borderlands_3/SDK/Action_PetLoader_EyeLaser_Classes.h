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
	 * BlueprintGeneratedClass Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C
	 * Size -> 0x0030 (FullSize[0x03E8] - InheritedSize[0x03B8])
	 */
	class UAction_PetLoader_EyeLaser_C : public UGbxAction_Loop
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) Transient, DuplicateTransient
		class UBPEventHub_Beastmaster_C*                           EventHubOwner;                                           // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EyeBeamSocket;                                           // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              EyeBeamAudioPlayback;                                    // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AttackCommandUsed();
		void CustomEvent();
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void Start_EyeLaser();
		void Stop_EyeLaser();
		void CustomEvent_4();
		void Start_EyeLaserCharge();
		void OnServerBegin(class AActor* Actor);
		void Audio_EyeBeam_Charge();
		void ExecuteUbergraph_Action_PetLoader_EyeLaser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
