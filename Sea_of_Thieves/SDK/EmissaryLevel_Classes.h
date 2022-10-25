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
	 * Class EmissaryLevel.EmissaryActionRewardBoostComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UEmissaryActionRewardBoostComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_F1W9[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
	 * Size -> 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
	 */
	class UEmissaryActiveTableVisualiserComponent : public UActorComponent
	{
	public:
		class UClass*                                              TargetCompany;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FMaterialVisualisation>                      MaterialChanges;                                         // 0x00D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_FXV6[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLightVisualisation>                         LightChanges;                                            // 0x00F0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_R0F8[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FParticleVisualisation>                      ParticleChanges;                                         // 0x0110(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_X4U5[0x38];                                  // 0x0120(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnControllerEndPlay(EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryEntitlementCategory
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UEmissaryEntitlementCategory : public UItemCategory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryEntitlementDesc
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UEmissaryEntitlementDesc : public UEntitlementDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryFlotsamDuplicationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmissaryFlotsamDuplicationInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryFlotsamItemInfo
	 * Size -> 0x0028 (FullSize[0x0748] - InheritedSize[0x0720])
	 */
	class AEmissaryFlotsamItemInfo : public ABootyItemInfo
	{
	public:
		unsigned char                                              UnknownData_4YTZ[0x8];                                   // 0x0720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanySpecificBootyReward                         HandInOwnFlotsamReward;                                  // 0x0728(0x0018) Edit, DisableEditOnInstance
		bool                                                       FlotsamCanBeDuplicated;                                  // 0x0740(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IV5A[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
	 * Size -> 0x0090 (FullSize[0x04D0] - InheritedSize[0x0440])
	 */
	class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
	{
	public:
		unsigned char                                              UnknownData_B8UV[0x90];                                  // 0x0440(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UEmissaryFlotsamTooltipCustomizerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CN0V[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CheckForDelivery;                                        // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckForPickup;                                          // 0x00D9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XOWK[0x16];                                  // 0x00DA(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryLevelSettingsAsset
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UEmissaryLevelSettingsAsset : public UDataAsset
	{
	public:
		TArray<struct FEmissaryLevelEntry>                         EmissaryLevelData;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FEmissaryPointBoostMultipliers                      BoostMultiplers;                                         // 0x0038(0x0008) Edit, DisableEditOnInstance
		struct FEmissaryFlagMeshReferences                         DefaultEmissaryFlagAssetReferences;                      // 0x0040(0x0020) Edit, DisableEditOnInstance
		uint32_t                                                   NumberOfCustomisedShipPartsToGainBoost;                  // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1SGG[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryLevelService
	 * Size -> 0x0338 (FullSize[0x0700] - InheritedSize[0x03C8])
	 */
	class AEmissaryLevelService : public AActor
	{
	public:
		unsigned char                                              UnknownData_L4OK[0xA0];                                  // 0x03C8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEmissaryLevelSettingsAsset*                         Settings;                                                // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UEmissaryRewardSettingsAsset*                        RewardSettings;                                          // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_WIX1[0x288];                                 // 0x0478(0x0288) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryMaxRankQuestProvider
	 * Size -> 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
	 */
	class UEmissaryMaxRankQuestProvider : public UActorComponent
	{
	public:
		class UClass*                                              MaxRankQuestNotificationID;                              // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EActionDisplayPriority                                     MaxRankQuestToolTipPriority;                             // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D3DJ[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                StartMaxRankQuestToolTipText;                            // 0x00D8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_RPCE[0x20];                                  // 0x00F0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                CannotStartMaxRankQuestToolTipText;                      // 0x0110(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_M851[0x20];                                  // 0x0128(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FStringAssetReference                               QuestDesc;                                               // 0x0148(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              Company;                                                 // 0x0158(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryParticipantComponent
	 * Size -> 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
	 */
	class UEmissaryParticipantComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_2DDF[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EmissaryLevel;                                           // 0x00D0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      EmissaryLevelProgress;                                   // 0x00D4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FName                                                AffiliatedCompany;                                       // 0x00D8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       IsAtMaxRank;                                             // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       IsEmissaryMaxRankQuestBeenActivatedThisSession;          // 0x00E1(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_FBQ1[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMysteriousNotesCompletionEventsModelEntry>  NoteCompletionIdents;                                    // 0x00E8(0x0010) Edit, ZeroConstructor, Protected
		unsigned char                                              UnknownData_SUB0[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                VotedCompany;                                            // 0x0108(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_EmissaryLevel();
		void OnRep_AffiliatedCompany(const class FName& PreviousId);
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryRepresentationMeshComponent
	 * Size -> 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
	 */
	class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEmissaryRewardCampaignSettingsAsset : public UDataAsset
	{
	public:
		TArray<struct FEmissaryCompanyCampaignSettings>            Companies;                                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryRewardSettingsAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEmissaryRewardSettingsAsset : public UDataAsset
	{
	public:
		TArray<struct FEmissaryRewardEntry>                        EmissaryRewardData;                                      // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      PlayerKilledExpiryTime;                                  // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HDQY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEmissaryRewardCampaignSettingsAsset*                CampaignSettings;                                        // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
	 * Size -> 0x0070 (FullSize[0x0350] - InheritedSize[0x02E0])
	 */
	class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
	{
	public:
		int32_t                                                    EmissaryCount;                                           // 0x02E0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XW37[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TrackedCompany;                                          // 0x02E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    EmissaryRepresentationMesh;                              // 0x02F0(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZJ9O[0x4];                                   // 0x030C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FTransform>                                  EmissaryRepresentationTransforms;                        // 0x0310(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        EmissaryRepresentationMeshes;                            // 0x0320(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference
		class UClass*                                              LoadedEmissaryRepresentationMesh;                        // 0x0330(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_D487[0x18];                                  // 0x0338(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_EmissaryCount();
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
	{
	public:
		class UEmissaryVoyageVoteValidatorBase*                    Validator;                                               // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9DAL[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                VoyageCinematicHeader;                                   // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_RMHZ[0x20];                                  // 0x0098(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                VoyageCinematicTag;                                      // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_FXZ0[0x20];                                  // 0x00C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCrewMemberVotes>                            Votes;                                                   // 0x00E0(0x0010) Net, ZeroConstructor, RepNotify
		class UBoxedRpcDispatcherComponent*                        RpcDispatcher;                                           // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NY4C[0x20];                                  // 0x00F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwningActor;                                             // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5LUF[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_Votes();
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
	 * Size -> 0x01D8 (FullSize[0x0300] - InheritedSize[0x0128])
	 */
	class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
	{
	public:
		class FText                                                EmissaryVotingCastVote;                                  // 0x0128(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_2T9B[0x20];                                  // 0x0140(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVote;                                  // 0x0160(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_R1B0[0x20];                                  // 0x0178(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonCrewShipOutsideRange;        // 0x0198(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_2MX4[0x20];                                  // 0x01B0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonNoEmissaryEntitlement;       // 0x01D0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_2QCO[0x20];                                  // 0x01E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x0208(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_S8AY[0x20];                                  // 0x0220(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonOnOpposingFaction;           // 0x0240(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_F29Q[0x20];                                  // 0x0258(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingRemoveVote;                                // 0x0278(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_HERW[0x20];                                  // 0x0290(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantRemoveVote;                            // 0x02B0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_31J6[0x20];                                  // 0x02C8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_M0PP[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
	 * Size -> 0x0168 (FullSize[0x0290] - InheritedSize[0x0128])
	 */
	class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
	{
	public:
		class FText                                                EmissaryVotingCastVote;                                  // 0x0128(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_6ABC[0x20];                                  // 0x0140(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVote;                                  // 0x0160(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_6OYR[0x20];                                  // 0x0178(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonCrewShipOutsideRange;        // 0x0198(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_5GRR[0x20];                                  // 0x01B0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantVoteReasonActiveForDifferentCompany;   // 0x01D0(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_DSNF[0x20];                                  // 0x01E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingRemoveVote;                                // 0x0208(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_66GY[0x20];                                  // 0x0220(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                EmissaryVotingCantRemoveVote;                            // 0x0240(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_A0GR[0x20];                                  // 0x0258(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_FUYG[0x18];                                  // 0x0278(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
	{
	public:
		class UClass*                                              RequiredEntitlement;                                     // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_7TLL[0x78];                                  // 0x0038(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TargetCompany;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		class UEmissaryVoyageInlineVoteConsumerBase*               Consumer;                                                // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.IsAnEmissaryStatCondition
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UIsAnEmissaryStatCondition : public UTargetedStatCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmissaryLevel.IsEmissaryStatCondition
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIsEmissaryStatCondition : public UStatCondition
	{
	public:
		class UClass*                                              RequiredEmissaryCompany;                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       RequiresMaxEmissaryLevel;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SP7C[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
