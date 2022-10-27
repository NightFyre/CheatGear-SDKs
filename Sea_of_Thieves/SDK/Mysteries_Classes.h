#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class Mysteries.AbandonedNoteWeightedTextDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAbandonedNoteWeightedTextDataAsset : public UDataAsset
	{
	public:
		TArray<struct FAbandonedNoteWeightedTextEntry>             Entries;                                                 // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Mysteries.AbandonedNoteWeightedTextSourceComponent
	 * Size -> 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
	 */
	class UAbandonedNoteWeightedTextSourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YOJ1[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UAbandonedNoteWeightedTextDataAsset>       WeightedText;                                            // 0x00E8(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_UU1O[0x4];                                   // 0x0104(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                ClueText;                                                // 0x0108(0x0018) ELEMENT_SIZE_MISMATCH Net, RepNotify
		unsigned char                                              UnknownData_DN2S[0x20];                                  // 0x0120(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                TitleText;                                               // 0x0140(0x0018) ELEMENT_SIZE_MISMATCH Net, RepNotify
		unsigned char                                              UnknownData_R3L0[0x20];                                  // 0x0158(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_QSUP[0x30];                                  // 0x0178(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnRep_TitleText();
		void OnRep_ClueText();
		static UClass* StaticClass();
	};

	/**
	 * Class Mysteries.OneShotRewardableObjectBase
	 * Size -> 0x0080 (FullSize[0x04E8] - InheritedSize[0x0468])
	 */
	class AOneShotRewardableObjectBase : public AInteractableObject
	{
	public:
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0468(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0470(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRewardId                                           Reward;                                                  // 0x0478(0x0008) Edit, DisableEditOnInstance
		class UClass*                                              RewardEntitlement;                                       // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      InteractionHoldTime;                                     // 0x0488(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InteractionRadius;                                       // 0x048C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DisplayName;                                             // 0x0490(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_GEYL[0x20];                                  // 0x04A8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ZVYL[0x20];                                  // 0x04C8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Mysteries.PopUpNotificationOnItemWieldedComponent
	 * Size -> 0x0020 (FullSize[0x0158] - InheritedSize[0x0138])
	 */
	class UPopUpNotificationOnItemWieldedComponent : public UOnItemWieldedComponent
	{
	public:
		class UPopUpMessageDesc*                                   PopUpDesc;                                               // 0x0138(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JTYE[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Mysteries.SirenPuzzleContext
	 * Size -> 0x00F0 (FullSize[0x04B8] - InheritedSize[0x03C8])
	 */
	class ASirenPuzzleContext : public AActor
	{
	public:
		unsigned char                                              UnknownData_E3Y6[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSirenPuzzleLockState>                       PuzzleLocks;                                             // 0x03D8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FLandmarkReactionKeyFrame>                   UnlockCompleteReactions;                                 // 0x03E8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FLandmarkReactionKeyFrame>                   ResetLocksReactions;                                     // 0x03F8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<unsigned char>                                      LockStates;                                              // 0x0408(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_CQZ6[0xA0];                                  // 0x0418(0x00A0) MISSED OFFSET (PADDING)

	public:
		void Unlock(const struct FGuid& LockId, const struct FGuid& CrewId);
		void ResetUnlock();
		void OnRep_LockStates(TArray<unsigned char> OldStates);
		void DeactivateLock(const struct FGuid& LockId);
		void ActivateLock(const struct FGuid& LockId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
