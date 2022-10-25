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
	 * ScriptStruct CustomMysteriousNotes.CustomPlayerNoteList
	 * Size -> 0x0010
	 */
	struct FCustomPlayerNoteList
	{
	public:
		TArray<struct FNotesRemoteServiceNoteDetailModel>          Notes;                                                   // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CustomMysteriousNotes.DestroyMysteriousNoteData
	 * Size -> 0x0014
	 */
	struct FDestroyMysteriousNoteData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               NoteGUID;                                                // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteResponseData
	 * Size -> 0x0014
	 */
	struct FCreateMysteriousNoteResponseData
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2RDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               NoteId;                                                  // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteData
	 * Size -> 0x0038
	 */
	struct FCreateMysteriousNoteData
	{
	public:
		int32_t                                                    PlayerNetGUID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CTH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NoteType;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NoteTitle;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              NoteBody;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
