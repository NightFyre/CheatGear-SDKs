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
	 * BlueprintGeneratedClass BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C
	 * Size -> 0x0010 (FullSize[0x0A10] - InheritedSize[0x0A00])
	 */
	class ABPWeap_JAK_AR_BaseWeapon_C : public ABPWeap_Jakobs_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A00(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Notify_ReloadStarted(bool bAutoReload);
		void ReceiveBeginPlay();
		void AttachAudioComponentToClip();
		void ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
