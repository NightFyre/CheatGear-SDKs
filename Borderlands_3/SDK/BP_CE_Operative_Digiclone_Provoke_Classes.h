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
	 * BlueprintGeneratedClass BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UBP_CE_Operative_Digiclone_Provoke_C : public UOakAction_CoordinatedEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        Provoke_Sound_Timer;                                     // 0x0150(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ProvokeSoundStop();
		void ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
