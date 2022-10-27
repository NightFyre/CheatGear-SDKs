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
	 * Class ChecklistMaps.ChecklistActionData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UChecklistActionData : public UObject
	{
	public:
		int32_t                                                    NumRequiredActions;                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EChecklistActionType                                       ActionType;                                              // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZVXI[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.DeliverBootyChecklistActionData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UDeliverBootyChecklistActionData : public UChecklistActionData
	{
	public:
		TArray<TAssetPtr<class UClass>>                            TargetBootyTypes;                                        // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper
		TArray<class UClass*>                                      TargetCompanies;                                         // 0x0040(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.KillActorChecklistActionData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UKillActorChecklistActionData : public UChecklistActionData
	{
	public:
		TArray<class UClass*>                                      TargetAIClasses;                                         // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.NamedChecklistEventActionData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UNamedChecklistEventActionData : public UChecklistActionData
	{
	public:
		class FName                                                Event;                                                   // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<class FString> EventsSource();
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.NPCInteractionChecklistActionData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UNPCInteractionChecklistActionData : public UChecklistActionData
	{
	public:
		TArray<struct FGuid>                                       TargetNPCIds;                                            // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.ChecklistItemsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UChecklistItemsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FChecklistItem>                              ChecklistItems;                                          // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.ChecklistMap
	 * Size -> 0x0158 (FullSize[0x0920] - InheritedSize[0x07C8])
	 */
	class AChecklistMap : public ATreasureMap
	{
	public:
		unsigned char                                              UnknownData_NLXN[0x4];                                   // 0x07C8(0x0004) Fix Super Size
		int32_t                                                    CanvasHeight;                                            // 0x07CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UFont*                                               Font;                                                    // 0x07D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FontScale;                                               // 0x07D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FontLineSpacingScale;                                    // 0x07DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_JMHV[0x8];                                   // 0x07E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChecklistMapLayout*                                 ChecklistMapLayout;                                      // 0x07E8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FChecklistMapContents                               Contents;                                                // 0x07F0(0x00E8) Net, RepNotify
		unsigned char                                              UnknownData_LAXU[0x48];                                  // 0x08D8(0x0048) MISSED OFFSET (PADDING)

	public:
		void RefreshContents();
		void OnTextCanvasUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height);
		void OnRep_Contents(const struct FChecklistMapContents& InPreviousContents);
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.ChecklistMapCollectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChecklistMapCollectionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.ChecklistMapCompletionComponent
	 * Size -> 0x0078 (FullSize[0x0140] - InheritedSize[0x00C8])
	 */
	class UChecklistMapCompletionComponent : public UActorComponent
	{
	public:
		class UChecklistActionData*                                ActionData;                                              // 0x00C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_7LW9[0x70];                                  // 0x00D0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChecklistMaps.ChecklistMapSettings
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UChecklistMapSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               ChecklistMapItemDescClass;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<class FName>                                        ChecklistEvents;                                         // 0x0048(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
