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
	 * BlueprintGeneratedClass ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C
	 * Size -> 0x0008 (FullSize[0x08B0] - InheritedSize[0x08A8])
	 */
	class UControlledMove_PetSkag_HornKnockupTest_C : public UOakControlledMove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A8(0x0008) Transient, DuplicateTransient

	public:
		void OnStop(bool bInterrupted);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
