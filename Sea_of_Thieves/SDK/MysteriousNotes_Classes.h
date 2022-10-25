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
	 * Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHasPlayerMysteriousNotesRadialContext : public URadialContextBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.LookingAtMysteriousNoteInputComponent
	 * Size -> 0x0030 (FullSize[0x02D0] - InheritedSize[0x02A0])
	 */
	class ULookingAtMysteriousNoteInputComponent : public ULookingAtWieldableInputComponent
	{
	public:
		unsigned char                                              UnknownData_8PUH[0x30];                                  // 0x02A0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.MysteriousNoteDesc
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UMysteriousNoteDesc : public UItemDesc
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMysteriousNotesCompletionEventsModelDataAsset : public UDataAsset
	{
	public:
		TArray<struct FMysteriousNotesCompletionEventsModel>       MysteriousNoteCompletionEvents;                          // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.MysteriousNoteSettings
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMysteriousNoteSettings : public UObject
	{
	public:
		int32_t                                                    LookAheadInMinutes;                                      // 0x0028(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RequestTimeout;                                          // 0x002C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               MysteriousNotesCompletionStringsAsset;                   // 0x0030(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               WieldableNoteDataAsset;                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               Image;                                                   // 0x0050(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               NotificationBackground;                                  // 0x0060(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.MysteriousNotesServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMysteriousNotesServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.WieldableMysteriousNoteLayout
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class UWieldableMysteriousNoteLayout : public UDataAsset
	{
	public:
		class FText                                                DefaultTitle;                                            // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_TBQO[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                DefaultBody;                                             // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_9ZRI[0x20];                                  // 0x0078(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FWieldableMysteriousNoteLayoutItem                  DefaultNoteLayoutItem;                                   // 0x0098(0x00D0) Edit, DisableEditOnInstance
		TArray<struct FWieldableMysteriousNoteLayoutItem>          NoteLayoutItems;                                         // 0x0168(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.WieldableMysteriousNoteDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWieldableMysteriousNoteDataAsset : public UDataAsset
	{
	public:
		class UClass*                                              WieldableNoteDesc;                                       // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWieldableMysteriousNoteLayout*                      NoteLayout;                                              // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.MysteriousNotesService
	 * Size -> 0x00C8 (FullSize[0x0490] - InheritedSize[0x03C8])
	 */
	class AMysteriousNotesService : public AActor
	{
	public:
		unsigned char                                              UnknownData_NOBW[0x28];                                  // 0x03C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMysteriousNoteSettings*                             CachedNoteSettings;                                      // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UWieldableMysteriousNoteDataAsset*                   WieldableNoteDataAsset;                                  // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UMysteriousNotesCompletionEventsModelDataAsset*      CompletionEventsModelData;                               // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_EUTG[0x88];                                  // 0x0408(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.PlayerMysteriousNoteInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerMysteriousNoteInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.PlayerMysteriousNoteComponent
	 * Size -> 0x0188 (FullSize[0x0250] - InheritedSize[0x00C8])
	 */
	class UPlayerMysteriousNoteComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GUJ4[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClientNoteData                                     NoteData;                                                // 0x00D0(0x0018) Net, RepNotify, Protected
		bool                                                       BeenPossessed;                                           // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected
		bool                                                       CinematicPlayed;                                         // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_86XV[0x166];                                 // 0x00EA(0x0166) MISSED OFFSET (PADDING)

	public:
		void TriggerNotesReceivedPopup(bool InCinematicSkipped);
		void Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const class FName& InCompletionID);
		void Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId);
		void Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId);
		void OnRep_NoteData();
		void OnRep_BeenPossessed();
		void CustomServerUpdateDetailNotes(TArray<struct FNotesRemoteServiceNoteDetailModel> InNotes);
		void AddFakeNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, TArray<class FString> CompletionStrings);
		static UClass* StaticClass();
	};

	/**
	 * Class MysteriousNotes.WieldableMysteriousNote
	 * Size -> 0x01A0 (FullSize[0x0920] - InheritedSize[0x0780])
	 */
	class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
	{
	public:
		unsigned char                                              UnknownData_PR5K[0x10];                                  // 0x0780(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaybeCompressedCanvasRenderTarget2D*                RenderTarget;                                            // 0x0790(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    CanvasWidth;                                             // 0x0798(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    CanvasHeight;                                            // 0x079C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      FontScale;                                               // 0x07A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S2B[0x5C];                                  // 0x07A4(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWieldableMysteriousNoteLayout*                      NoteLayout;                                              // 0x0800(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UUsableWieldableComponent*                           UsableWieldableComponent;                                // 0x0808(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryItemComponent*                             InventoryItemComponent;                                  // 0x0810(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQCN[0x108];                                 // 0x0818(0x0108) MISSED OFFSET (PADDING)

	public:
		void OnTextCanvasUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height);
		void OnRep_NoteLayout();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
