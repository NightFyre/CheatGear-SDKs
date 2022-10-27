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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Factions.CinematicFactionEvent
	 * Size -> 0x0088
	 */
	struct FCinematicFactionEvent
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FCinematicQuestEvent                                CinematicData;                                           // 0x0008(0x0080) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Factions.FactionDisplayInfo
	 * Size -> 0x00A0
	 */
	struct FFactionDisplayInfo
	{
	public:
		class UClass*                                              Faction;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_KB61[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                Description;                                             // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_8JYT[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector2D                                           CardOffset;                                              // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FStringAssetReference                               KeyArt;                                                  // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringAssetReference                               Icon;                                                    // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Factions.FactionRequest
	 * Size -> 0x0020
	 */
	struct FFactionRequest
	{
	public:
		class UClass*                                              Faction;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_NF90[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Factions.FigureheadFactionVFXParams
	 * Size -> 0x0030
	 */
	struct FFigureheadFactionVFXParams
	{
	public:
		class UParticleSystem*                                     FBParticleSystem;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FGParticleSystem;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoDestroy;                                             // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OwnerOnlySee;                                            // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OwnerNoSee;                                              // 0x002A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YCBF[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Factions.FactionVoteRemovedEvent
	 * Size -> 0x0008
	 */
	struct FFactionVoteRemovedEvent
	{
	public:
		class FName                                                Company;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Factions.FactionVoteAddedEvent
	 * Size -> 0x0008
	 */
	struct FFactionVoteAddedEvent
	{
	public:
		class FName                                                Company;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Factions.CrewJoinedFactionPopupEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FCrewJoinedFactionPopupEvent : public FNetworkEventStruct
	{
	public:
		class UDataAsset*                                          PopUpDesc;                                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
