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
	 * Class Factions.FactionSettingsAsset
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UFactionSettingsAsset : public UDataAsset
	{
	public:
		TArray<class UClass*>                                      PossibleFactions;                                        // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TArray<class UClass*>                                      FactionsRewardingFriendlyFire;                           // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		TArray<struct FSandsOfFateData>                            SandsOfFateRewards;                                      // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFactionStreakLevelData>                     FactionStreakLevelData;                                  // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FDefenderLootLevelThreshold>                 DefenderLootLevelThresholds;                             // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      EnemyFactionShipEmergentRange;                           // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyFactionShipInvasionRange;                           // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrewShipRangeStatesUpdateInterval;                       // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6IAL[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCompanyFactionAlignment>                    AlignedFactionsAndCompanies;                             // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanyFactionAlignment>                    OpposingFactionsAndCompanies;                            // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFactionServicePopUpData>                    JoiningFactionPopUp;                                     // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.CrewFactionOwnershipInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrewFactionOwnershipInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionFlipMeshComponent
	 * Size -> 0x0050 (FullSize[0x0670] - InheritedSize[0x0620])
	 */
	class UFactionFlipMeshComponent : public UStaticMeshComponent
	{
	public:
		class UCurveFloat*                                         FlipCurve;                                               // 0x0620(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OXDU[0x40];                                  // 0x0628(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsFlipping;                                              // 0x0668(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Flipped;                                                 // 0x0669(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_VCQN[0x6];                                   // 0x066A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsFlipping();
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionInterationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFactionInterationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionInteractionVoteComponent
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UFactionInteractionVoteComponent : public UInlineVotingInteractionComponent
	{
	public:
		unsigned char                                              UnknownData_MBU1[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnHourglassInteractionHoldTime;                        // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YST8[0x14];                                  // 0x015C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionServiceDebugRepActor
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class AFactionServiceDebugRepActor : public AActor
	{
	public:
		bool                                                       bDebugEnabled;                                           // 0x03C8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z9E6[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCrewFactionEntryData>                       FactionAlignedCrewData;                                  // 0x03D0(0x0010) Net, ZeroConstructor
		class AFactionService*                                     FactionService;                                          // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionService
	 * Size -> 0x0130 (FullSize[0x04F8] - InheritedSize[0x03C8])
	 */
	class AFactionService : public AActor
	{
	public:
		unsigned char                                              UnknownData_N2XO[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFactionSettingsAsset*                               Settings;                                                // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R92C[0x70];                                  // 0x03E0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCompanyFactionAlignment>                    OpposingFactionsAndCompanies;                            // 0x0450(0x0010) Net, ZeroConstructor
		TArray<struct FCrewFactionEntryData>                       FactionAlignedCrewData;                                  // 0x0460(0x0010) ZeroConstructor
		TArray<struct FCrewFactionEntry>                           FactionAlignedCrews;                                     // 0x0470(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_L3E8[0x58];                                  // 0x0480(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFactionServiceDebugRepActor*                        DebugRepActor;                                           // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S8VS[0x18];                                  // 0x04E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_FactionAlignedCrews(TArray<struct FCrewFactionEntry> PreviousCrews);
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionVoteAudioComponent
	 * Size -> 0x0110 (FullSize[0x01F8] - InheritedSize[0x00E8])
	 */
	class UFactionVoteAudioComponent : public UVoteAudioComponent
	{
	public:
		class UWwiseEvent*                                         FactionStart;                                            // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Flip;                                                    // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         Levelup;                                                 // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LevelupSwitchGroup;                                      // 0x0100(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        LevelupSwitchValues;                                     // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_OW11[0xE0];                                  // 0x0118(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionVoteConsumerBase
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UFactionVoteConsumerBase : public UVoteConsumerInlineBase
	{
	public:
		unsigned char                                              UnknownData_53HV[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFactionVoteValidatorBase*                           Validator;                                               // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_AMST[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwningActor;                                             // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		TArray<struct FCinematicFactionEvent>                      FactionBannerData;                                       // 0x0098(0x0010) Edit, ZeroConstructor, Protected
		TArray<struct FCrewMemberVotes>                            Votes;                                                   // 0x00A8(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_Q60T[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_Votes();
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.StartFactionVoyageVoteConsumer
	 * Size -> 0x0188 (FullSize[0x0248] - InheritedSize[0x00C0])
	 */
	class UStartFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
	{
	public:
		class FText                                                FactionVotingCastVote;                                   // 0x00C0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_H4CJ[0x20];                                  // 0x00D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVote;                                   // 0x00F8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_TAO9[0x20];                                  // 0x0110(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingRemoveVote;                                 // 0x0130(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_BATM[0x20];                                  // 0x0148(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantRemoveVote;                             // 0x0168(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_IT34[0x20];                                  // 0x0180(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVoteReasonVoterNotOnOwnShip;            // 0x01A0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_CN07[0x20];                                  // 0x01B8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVoteReasonIsOpposingEmissary;           // 0x01D8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_3FOA[0x20];                                  // 0x01F0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingSwitchVote;                                 // 0x0210(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_90A0[0x20];                                  // 0x0228(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.StopFactionVoyageVoteConsumer
	 * Size -> 0x0150 (FullSize[0x0210] - InheritedSize[0x00C0])
	 */
	class UStopFactionVoyageVoteConsumer : public UFactionVoteConsumerBase
	{
	public:
		class FText                                                FactionVotingCastVote;                                   // 0x00C0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_ZTD2[0x20];                                  // 0x00D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVote;                                   // 0x00F8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_S4S2[0x20];                                  // 0x0110(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingRemoveVote;                                 // 0x0130(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_XZMV[0x20];                                  // 0x0148(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantRemoveVote;                             // 0x0168(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_AYEM[0x20];                                  // 0x0180(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVoteReasonGoToOutpost;                  // 0x01A0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_MS3B[0x20];                                  // 0x01B8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FactionVotingCantVoteReasonActiveForDifferentCompany;    // 0x01D8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_E56U[0x20];                                  // 0x01F0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionVoteInteractionActor
	 * Size -> 0x00F8 (FullSize[0x04C0] - InheritedSize[0x03C8])
	 */
	class AFactionVoteInteractionActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Y1CU[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeDuration;                                            // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K53R[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFactionDisplayInfo>                         NoFactionInfos;                                          // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFactionDisplayInfo>                         FactionInfos;                                            // 0x03F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFactionRequest>                             NoFactionInfoPtrs;                                       // 0x0400(0x0010) ZeroConstructor
		TArray<struct FFactionRequest>                             FactionInfoPtrs;                                         // 0x0410(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_1R0O[0xA0];                                  // 0x0420(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionVoteValidatorBase
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UFactionVoteValidatorBase : public UVoteValidatorInlineBase
	{
	public:
		TArray<class UClass*>                                      TargetCompanies;                                         // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper
		unsigned char                                              UnknownData_F9W1[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFactionVoteConsumerBase*                            Consumer;                                                // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    CurrentCompany;                                          // 0x0078(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FlipTime;                                                // 0x007C(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_8KYI[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwningActor;                                             // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		void OnRep_CurrentCompany();
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.StartFactionVoyageVoteValidator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UStartFactionVoyageVoteValidator : public UFactionVoteValidatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.StopFactionVoyageVoteValidator
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UStopFactionVoyageVoteValidator : public UFactionVoteValidatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.IsInFactionStatCondition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UIsInFactionStatCondition : public UTargetedStatCondition
	{
	public:
		bool                                                       CheckOwnerFaction;                                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RequiresOwnerMaxStreakLevel;                             // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WXAR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredOwnerFaction;                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       CheckTargetFaction;                                      // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RequiresTargetMaxStreakLevel;                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AS7U[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredTargetFaction;                                   // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.ShipFactionCustomisation
	 * Size -> 0x0050 (FullSize[0x0330] - InheritedSize[0x02E0])
	 */
	class UShipFactionCustomisation : public USceneComponent
	{
	public:
		struct FFigureheadFactionVFXParams                         FigureheadFactionVFX;                                    // 0x02E0(0x0030) Edit, DisableEditOnInstance
		class FScriptMulticastDelegate                             GetBPFactionHourglass;                                   // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class UChildActorComponent*                                BPFactionHourglass;                                      // 0x0320(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SpawnedFigureheadParticles;                              // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnLeavingFightEndVFX();
		void OnJoiningFightStartVFX();
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.ShipSunkTrackingComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UShipSunkTrackingComponent : public UActorComponent
	{
	public:
		float                                                      CrewRange;                                               // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DOWU[0x14];                                  // 0x00CC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
