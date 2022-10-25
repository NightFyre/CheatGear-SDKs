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
	 * ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModel
	 * Size -> 0x0008
	 */
	struct FMysteriousNotesCompletionEventsModel
	{
	public:
		class FName                                                CompletionIdent;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
	 * Size -> 0x00D0
	 */
	struct FWieldableMysteriousNoteLayoutItem
	{
	public:
		class FString                                              Theme;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UFont*                                               Font;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTreasureMapWidgetStreamedTexture                   Image;                                                   // 0x0018(0x0030) Edit, DisableEditOnInstance
		struct FStringAssetReference                               RadialIcon;                                              // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FTreasureMapWidgetText                              NoteTitleWidgetText;                                     // 0x0058(0x0038) Edit, DisableEditOnInstance
		struct FTreasureMapWidgetText                              NoteBodyWidgetText;                                      // 0x0090(0x0038) Edit, DisableEditOnInstance
		float                                                      NoteWidth;                                               // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoteLineSpacingMultiplier;                               // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.MysteriousNoteInfo
	 * Size -> 0x0014
	 */
	struct FMysteriousNoteInfo
	{
	public:
		struct FGuid                                               NoteId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NoteRead;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowNoteAnimation;                                       // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GV24[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.ClientNoteData
	 * Size -> 0x0018
	 */
	struct FClientNoteData
	{
	public:
		bool                                                       NotifyArrival;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T59W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMysteriousNoteInfo>                         PendingNotes;                                            // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModelEntry
	 * Size -> 0x0008
	 */
	struct FMysteriousNotesCompletionEventsModelEntry
	{
	public:
		class FName                                                CompletionIdent;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.EventListenForCinematicEndEvent
	 * Size -> 0x0001
	 */
	struct FEventListenForCinematicEndEvent
	{
	public:
		unsigned char                                              UnknownData_BYNH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventTriggerMysteriousNotesPopup
	 * Size -> 0x0010
	 */
	struct FEventTriggerMysteriousNotesPopup
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CinematicSkipped;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3PI6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMarkNoteDeleted
	 * Size -> 0x0018
	 */
	struct FEventMarkNoteDeleted
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               NoteId;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
	 * Size -> 0x0010
	 */
	struct FEventNoteClientCompletionStep
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompletionStepID;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.EventNoteCompletionStep
	 * Size -> 0x0010
	 */
	struct FEventNoteCompletionStep
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CompletionStepID;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.EventNotesUpdated
	 * Size -> 0x0001
	 */
	struct FEventNotesUpdated
	{
	public:
		unsigned char                                              UnknownData_ZXI7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMarkNoteRead
	 * Size -> 0x0018
	 */
	struct FEventMarkNoteRead
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               NoteId;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MysteriousNotes.EventOnlineAthenaPlayerControllerUnpossessed
	 * Size -> 0x0008
	 */
	struct FEventOnlineAthenaPlayerControllerUnpossessed
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.EventPlayerControllerPossessed
	 * Size -> 0x0008
	 */
	struct FEventPlayerControllerPossessed
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMysteriousNoteContentUpdated
	 * Size -> 0x0010
	 */
	struct FEventMysteriousNoteContentUpdated
	{
	public:
		unsigned char                                              UnknownData_XZWQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMysteriousNoteSettingsLoaded
	 * Size -> 0x0001
	 */
	struct FEventMysteriousNoteSettingsLoaded
	{
	public:
		unsigned char                                              UnknownData_BXUC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMysteriousNoteCustomContentUpdate
	 * Size -> 0x0001
	 */
	struct FEventMysteriousNoteCustomContentUpdate
	{
	public:
		unsigned char                                              UnknownData_HIFW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
	 * Size -> 0x0010
	 */
	struct FEventMysteriousNoteRemoved
	{
	public:
		unsigned char                                              UnknownData_8BW7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.MysteriousNoteTheme
	 * Size -> 0x0010
	 */
	struct FMysteriousNoteTheme
	{
	public:
		class FString                                              NoteType;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.NoteCompletionEntry
	 * Size -> 0x0020
	 */
	struct FNoteCompletionEntry
	{
	public:
		struct FGuid                                               NoteId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FString>                                      CompletionEventIds;                                      // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MysteriousNotes.ActiveNoteData
	 * Size -> 0x0030
	 */
	struct FActiveNoteData
	{
	public:
		TArray<struct FNotesRemoteServiceNoteModel>                NotesRemoteServiceNoteModels;                            // 0x0000(0x0010) ZeroConstructor
		TArray<struct FNoteCompletionEntry>                        PendingCompletionEntries;                                // 0x0010(0x0010) ZeroConstructor
		TArray<struct FGuid>                                       PendingDetailRequestIDs;                                 // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MysteriousNotes.MysteriousNoteRequest
	 * Size -> 0x0080
	 */
	struct FMysteriousNoteRequest
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPirateIdentity                                     PirateIdentity;                                          // 0x0008(0x0078)
	};

	/**
	 * ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
	 * Size -> 0x0048
	 */
	struct FPlayerMysteriousNoteItem
	{
	public:
		struct FGuid                                               OriginalNoteID;                                          // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              LocalisedTitle;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              LocalisedBody;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NoteType;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RW8Z[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MysteriousNotes.PlayerSentNotesTelemetryEvent
	 * Size -> 0x0004
	 */
	struct FPlayerSentNotesTelemetryEvent
	{
	public:
		int32_t                                                    NoteCount;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MysteriousNotes.PlayerNoteStateChangeTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FPlayerNoteStateChangeTelemetryEvent
	{
	public:
		struct FGuid                                               NoteId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              NoteState;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
