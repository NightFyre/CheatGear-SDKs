#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
	 */
	struct UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params
	{
	public:
		bool                                                       InCinematicSkipped;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
	 */
	struct UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InCompletionID;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
	 */
	struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               NoteId;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
	 */
	struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               NoteId;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
	 */
	struct UPlayerMysteriousNoteComponent_OnRep_NoteData_Params
	{	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
	 */
	struct UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params
	{	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes
	 */
	struct UPlayerMysteriousNoteComponent_CustomServerUpdateDetailNotes_Params
	{
	public:
		TArray<struct FNotesRemoteServiceNoteDetailModel>          InNotes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
	 */
	struct UPlayerMysteriousNoteComponent_AddFakeNote_Params
	{
	public:
		class FString                                              NoteType;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NoteTitle;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NoteBody;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      CompletionStrings;                                       // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
	 */
	struct AWieldableMysteriousNote_OnTextCanvasUpdate_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
	 */
	struct AWieldableMysteriousNote_OnRep_NoteLayout_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
