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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LostShipmentsClueVariants.EInteractableGrammaticalGender
	 */
	enum class EInteractableGrammaticalGender : uint8_t
	{
		Default   = 0,
		Masculine = 1,
		Feminine  = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LostShipmentsClueVariants.ClueDestinationToTextIndex
	 * Size -> 0x0028
	 */
	struct FClueDestinationToTextIndex
	{
	public:
		class UClass*                                              DestinationType;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TAssetPtr<class UAbandonedNoteClueTextIndexAssetBase>      RequiredIndexAsset;                                      // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CX3D[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct LostShipmentsClueVariants.ClueDestinationChoice
	 * Size -> 0x0010
	 */
	struct FClueDestinationChoice
	{
	public:
		class UClueDestinationDescriptor*                          Destination;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int16_t                                                    ClueChoice;                                              // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D0YY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueVariants.GenderSpecificTextPairings
	 * Size -> 0x0070
	 */
	struct FGenderSpecificTextPairings
	{
	public:
		class FText                                                MasculineClueDestinationDescription;                     // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_XHIP[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                FeminineClueDestinationDescription;                      // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_XV0E[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct LostShipmentsClueVariants.TextEntryWithLayout
	 * Size -> 0x0070
	 */
	struct FTextEntryWithLayout
	{
	public:
		class FText                                                TextEntry;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_TDQ3[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FTreasureMapWidgetText                              TextLayout;                                              // 0x0038(0x0038) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct LostShipmentsClueVariants.MapRadialIconData
	 * Size -> 0x0018
	 */
	struct FMapRadialIconData
	{
	public:
		struct FStringAssetReference                               AssetReference;                                          // 0x0000(0x0010) ZeroConstructor
		float                                                      Rotation;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DUZC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LostShipmentsClueVariants.ExistingNPCToPhasedNPC
	 * Size -> 0x0040
	 */
	struct FExistingNPCToPhasedNPC
	{
	public:
		TAssetPtr<class UClass>                                    ExistingNPC;                                             // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_L20Y[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UClass>                                    PhasedNPC;                                               // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_0R6R[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
