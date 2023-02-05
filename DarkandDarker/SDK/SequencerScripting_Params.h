#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function SequencerScripting.MovieSceneBindingExtensions.SetParent
	 */
	struct UMovieSceneBindingExtensions_SetParent_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InParentBinding;                                         // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.SetName
	 */
	struct UMovieSceneBindingExtensions_SetName_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              InName;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	 */
	struct UMovieSceneBindingExtensions_SetDisplayName_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FText                                                InDisplayName;                                           // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	 */
	struct UMovieSceneBindingExtensions_RemoveTrack_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    TrackToRemove;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.Remove
	 */
	struct UMovieSceneBindingExtensions_Remove_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	 */
	struct UMovieSceneBindingExtensions_MoveBindingContents_Params
	{
	public:
		struct FSequencerBindingProxy                              SourceBindingId;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              DestinationBindingId;                                    // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.IsValid
	 */
	struct UMovieSceneBindingExtensions_IsValid_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
	 */
	struct UMovieSceneBindingExtensions_GetTracks_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0018(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	 */
	struct UMovieSceneBindingExtensions_GetPossessedObjectClass_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetParent
	 */
	struct UMovieSceneBindingExtensions_GetParent_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	 */
	struct UMovieSceneBindingExtensions_GetObjectTemplate_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetName
	 */
	struct UMovieSceneBindingExtensions_GetName_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetId
	 */
	struct UMovieSceneBindingExtensions_GetId_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	 */
	struct UMovieSceneBindingExtensions_GetDisplayName_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	 */
	struct UMovieSceneBindingExtensions_GetChildPossessables_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FSequencerBindingProxy>                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	 */
	struct UMovieSceneBindingExtensions_FindTracksByType_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0020(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	 */
	struct UMovieSceneBindingExtensions_FindTracksByExactType_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0020(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
	 */
	struct UMovieSceneBindingExtensions_AddTrack_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	 */
	struct UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params
	{
	public:
		struct FMovieSceneEvent                                    EventKey;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	 */
	struct UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params
	{
	public:
		class UMovieSceneEventTrack*                               InTrack;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneEventTriggerSection*                      ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	 */
	struct UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params
	{
	public:
		class UMovieSceneEventTrack*                               InTrack;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneEventRepeaterSection*                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	 */
	struct UMovieSceneFolderExtensions_SetFolderName_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InFolderName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	 */
	struct UMovieSceneFolderExtensions_SetFolderColor_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              InFolderColor;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	 */
	struct UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InObjectBinding;                                         // 0x0008(0x0018)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	 */
	struct UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    InMasterTrack;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	 */
	struct UMovieSceneFolderExtensions_RemoveChildFolder_Params
	{
	public:
		class UMovieSceneFolder*                                   TargetFolder;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneFolder*                                   FolderToRemove;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	 */
	struct UMovieSceneFolderExtensions_GetFolderName_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	 */
	struct UMovieSceneFolderExtensions_GetFolderColor_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	 */
	struct UMovieSceneFolderExtensions_GetChildObjectBindings_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSequencerBindingProxy>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	 */
	struct UMovieSceneFolderExtensions_GetChildMasterTracks_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	 */
	struct UMovieSceneFolderExtensions_GetChildFolders_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneFolder*>                           ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	 */
	struct UMovieSceneFolderExtensions_AddChildObjectBinding_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InObjectBinding;                                         // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	 */
	struct UMovieSceneFolderExtensions_AddChildMasterTrack_Params
	{
	public:
		class UMovieSceneFolder*                                   Folder;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    InMasterTrack;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	 */
	struct UMovieSceneFolderExtensions_AddChildFolder_Params
	{
	public:
		class UMovieSceneFolder*                                   TargetFolder;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneFolder*                                   FolderToAdd;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	 */
	struct UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params
	{
	public:
		class UMovieScenePropertyTrack*                            Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InPropertyName;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPropertyPath;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	 */
	struct UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params
	{
	public:
		class UMovieSceneObjectPropertyTrack*                      Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              PropertyClass;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	 */
	struct UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params
	{
	public:
		class UMovieScenePropertyTrack*                            Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	 */
	struct UMovieScenePropertyTrackExtensions_GetPropertyPath_Params
	{
	public:
		class UMovieScenePropertyTrack*                            Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	 */
	struct UMovieScenePropertyTrackExtensions_GetPropertyName_Params
	{
	public:
		class UMovieScenePropertyTrack*                            Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	 */
	struct UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params
	{
	public:
		class UMovieSceneObjectPropertyTrack*                      Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	 */
	struct UMovieSceneScriptingActorReferenceKey_SetValue_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InNewValue;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	 */
	struct UMovieSceneScriptingActorReferenceKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	 */
	struct UMovieSceneScriptingActorReferenceKey_GetValue_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	 */
	struct UMovieSceneScriptingActorReferenceKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0Z2Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	 */
	struct UMovieSceneScriptingActorReferenceChannel_SetDefault_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InDefaultValue;                                          // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	 */
	struct UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	 */
	struct UMovieSceneScriptingActorReferenceChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	 */
	struct UMovieSceneScriptingActorReferenceChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	 */
	struct UMovieSceneScriptingActorReferenceChannel_GetDefault_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	 */
	struct UMovieSceneScriptingActorReferenceChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneObjectBindingID                          NewValue;                                                // 0x0004(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FWMW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingActorReferenceKey*               ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	 */
	struct UMovieSceneScriptingBoolKey_SetValue_Params
	{
	public:
		bool                                                       InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	 */
	struct UMovieSceneScriptingBoolKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	 */
	struct UMovieSceneScriptingBoolKey_GetValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	 */
	struct UMovieSceneScriptingBoolKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KREX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	 */
	struct UMovieSceneScriptingBoolChannel_SetDefault_Params
	{
	public:
		bool                                                       InDefaultValue;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	 */
	struct UMovieSceneScriptingBoolChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingBoolChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	 */
	struct UMovieSceneScriptingBoolChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	 */
	struct UMovieSceneScriptingBoolChannel_GetNumKeys_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	 */
	struct UMovieSceneScriptingBoolChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	 */
	struct UMovieSceneScriptingBoolChannel_GetDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	 */
	struct UMovieSceneScriptingBoolChannel_EvaluateKeys_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFrameRate                                          FrameRate;                                               // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E50I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	 */
	struct UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params
	{
	public:
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	 */
	struct UMovieSceneScriptingBoolChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewValue;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HDNY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SubFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6RN0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingBoolKey*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
	 */
	struct UMovieSceneScriptingByteKey_SetValue_Params
	{
	public:
		unsigned char                                              InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
	 */
	struct UMovieSceneScriptingByteKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
	 */
	struct UMovieSceneScriptingByteKey_GetValue_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
	 */
	struct UMovieSceneScriptingByteKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3JXB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	 */
	struct UMovieSceneScriptingByteChannel_SetDefault_Params
	{
	public:
		unsigned char                                              InDefaultValue;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	 */
	struct UMovieSceneScriptingByteChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingByteChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	 */
	struct UMovieSceneScriptingByteChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	 */
	struct UMovieSceneScriptingByteChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	 */
	struct UMovieSceneScriptingByteChannel_GetDefault_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	 */
	struct UMovieSceneScriptingByteChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewValue;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VLDK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SubFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieSceneKeyInterpolation                                InInterpolation;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KTYU[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingByteKey*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	 */
	struct UMovieSceneScriptingDoubleKey_SetValue_Params
	{
	public:
		double                                                     InNewValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	 */
	struct UMovieSceneScriptingDoubleKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	 */
	struct UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params
	{
	public:
		ERichCurveTangentWeightMode                                InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	 */
	struct UMovieSceneScriptingDoubleKey_SetTangentMode_Params
	{
	public:
		ERichCurveTangentMode                                      InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	 */
	struct UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	 */
	struct UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	 */
	struct UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params
	{
	public:
		ERichCurveInterpMode                                       InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	 */
	struct UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	 */
	struct UMovieSceneScriptingDoubleKey_SetArriveTangent_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	 */
	struct UMovieSceneScriptingDoubleKey_GetValue_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	 */
	struct UMovieSceneScriptingDoubleKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UZK5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	 */
	struct UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params
	{
	public:
		ERichCurveTangentWeightMode                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	 */
	struct UMovieSceneScriptingDoubleKey_GetTangentMode_Params
	{
	public:
		ERichCurveTangentMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	 */
	struct UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	 */
	struct UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	 */
	struct UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params
	{
	public:
		ERichCurveInterpMode                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	 */
	struct UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	 */
	struct UMovieSceneScriptingDoubleKey_GetArriveTangent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	 */
	struct UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    InExtrapolation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	 */
	struct UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    InExtrapolation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	 */
	struct UMovieSceneScriptingDoubleChannel_SetDefault_Params
	{
	public:
		double                                                     InDefaultValue;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	 */
	struct UMovieSceneScriptingDoubleChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingDoubleChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	 */
	struct UMovieSceneScriptingDoubleChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	 */
	struct UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	 */
	struct UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	 */
	struct UMovieSceneScriptingDoubleChannel_GetNumKeys_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	 */
	struct UMovieSceneScriptingDoubleChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	 */
	struct UMovieSceneScriptingDoubleChannel_GetDefault_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	 */
	struct UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFrameRate                                          FrameRate;                                               // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z3ZE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	 */
	struct UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params
	{
	public:
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	 */
	struct UMovieSceneScriptingDoubleChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T2CF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     NewValue;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieSceneKeyInterpolation                                InInterpolation;                                         // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_23P3[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingDoubleKey*                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
	 */
	struct UMovieSceneScriptingEventKey_SetValue_Params
	{
	public:
		struct FMovieSceneEvent                                    InNewValue;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
	 */
	struct UMovieSceneScriptingEventKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
	 */
	struct UMovieSceneScriptingEventKey_GetValue_Params
	{
	public:
		struct FMovieSceneEvent                                    ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
	 */
	struct UMovieSceneScriptingEventKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UZKA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	 */
	struct UMovieSceneScriptingEventChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	 */
	struct UMovieSceneScriptingEventChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	 */
	struct UMovieSceneScriptingEventChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CIII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMovieSceneEvent                                    NewValue;                                                // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7L39[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingEventKey*                        ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	 */
	struct UMovieSceneScriptingFloatKey_SetValue_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	 */
	struct UMovieSceneScriptingFloatKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	 */
	struct UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params
	{
	public:
		ERichCurveTangentWeightMode                                InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	 */
	struct UMovieSceneScriptingFloatKey_SetTangentMode_Params
	{
	public:
		ERichCurveTangentMode                                      InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	 */
	struct UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	 */
	struct UMovieSceneScriptingFloatKey_SetLeaveTangent_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	 */
	struct UMovieSceneScriptingFloatKey_SetInterpolationMode_Params
	{
	public:
		ERichCurveInterpMode                                       InNewValue;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	 */
	struct UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	 */
	struct UMovieSceneScriptingFloatKey_SetArriveTangent_Params
	{
	public:
		float                                                      InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	 */
	struct UMovieSceneScriptingFloatKey_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	 */
	struct UMovieSceneScriptingFloatKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YA6E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	 */
	struct UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params
	{
	public:
		ERichCurveTangentWeightMode                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	 */
	struct UMovieSceneScriptingFloatKey_GetTangentMode_Params
	{
	public:
		ERichCurveTangentMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	 */
	struct UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	 */
	struct UMovieSceneScriptingFloatKey_GetLeaveTangent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	 */
	struct UMovieSceneScriptingFloatKey_GetInterpolationMode_Params
	{
	public:
		ERichCurveInterpMode                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	 */
	struct UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	 */
	struct UMovieSceneScriptingFloatKey_GetArriveTangent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	 */
	struct UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    InExtrapolation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	 */
	struct UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    InExtrapolation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	 */
	struct UMovieSceneScriptingFloatChannel_SetDefault_Params
	{
	public:
		float                                                      InDefaultValue;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	 */
	struct UMovieSceneScriptingFloatChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingFloatChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	 */
	struct UMovieSceneScriptingFloatChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	 */
	struct UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	 */
	struct UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params
	{
	public:
		ERichCurveExtrapolation                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	 */
	struct UMovieSceneScriptingFloatChannel_GetNumKeys_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	 */
	struct UMovieSceneScriptingFloatChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	 */
	struct UMovieSceneScriptingFloatChannel_GetDefault_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	 */
	struct UMovieSceneScriptingFloatChannel_EvaluateKeys_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFrameRate                                          FrameRate;                                               // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JKV0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	 */
	struct UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params
	{
	public:
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	 */
	struct UMovieSceneScriptingFloatChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieSceneKeyInterpolation                                InInterpolation;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AS56[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingFloatKey*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	 */
	struct UMovieSceneScriptingIntegerKey_SetValue_Params
	{
	public:
		int32_t                                                    InNewValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	 */
	struct UMovieSceneScriptingIntegerKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	 */
	struct UMovieSceneScriptingIntegerKey_GetValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	 */
	struct UMovieSceneScriptingIntegerKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2780[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	 */
	struct UMovieSceneScriptingIntegerChannel_SetDefault_Params
	{
	public:
		int32_t                                                    InDefaultValue;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	 */
	struct UMovieSceneScriptingIntegerChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingIntegerChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	 */
	struct UMovieSceneScriptingIntegerChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	 */
	struct UMovieSceneScriptingIntegerChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	 */
	struct UMovieSceneScriptingIntegerChannel_GetDefault_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	 */
	struct UMovieSceneScriptingIntegerChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KKE3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingIntegerKey*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	 */
	struct UMovieSceneScriptingObjectPathKey_SetValue_Params
	{
	public:
		class UObject*                                             InNewValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	 */
	struct UMovieSceneScriptingObjectPathKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	 */
	struct UMovieSceneScriptingObjectPathKey_GetValue_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	 */
	struct UMovieSceneScriptingObjectPathKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DUFT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	 */
	struct UMovieSceneScriptingObjectPathChannel_SetDefault_Params
	{
	public:
		class UObject*                                             InDefaultValue;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	 */
	struct UMovieSceneScriptingObjectPathChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingObjectPathChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	 */
	struct UMovieSceneScriptingObjectPathChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	 */
	struct UMovieSceneScriptingObjectPathChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	 */
	struct UMovieSceneScriptingObjectPathChannel_GetDefault_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	 */
	struct UMovieSceneScriptingObjectPathChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_THVX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             NewValue;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SMYP[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingObjectPathKey*                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
	 */
	struct UMovieSceneScriptingStringKey_SetValue_Params
	{
	public:
		class FString                                              InNewValue;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
	 */
	struct UMovieSceneScriptingStringKey_SetTime_Params
	{
	public:
		struct FFrameNumber                                        NewFrameNumber;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
	 */
	struct UMovieSceneScriptingStringKey_GetValue_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
	 */
	struct UMovieSceneScriptingStringKey_GetTime_Params
	{
	public:
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WB6N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFrameTime                                          ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	 */
	struct UMovieSceneScriptingStringChannel_SetDefault_Params
	{
	public:
		class FString                                              InDefaultValue;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	 */
	struct UMovieSceneScriptingStringChannel_RemoveKey_Params
	{
	public:
		class UMovieSceneScriptingKey*                             Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	 */
	struct UMovieSceneScriptingStringChannel_RemoveDefault_Params
	{	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	 */
	struct UMovieSceneScriptingStringChannel_HasDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	 */
	struct UMovieSceneScriptingStringChannel_GetKeys_Params
	{
	public:
		TArray<class UMovieSceneScriptingKey*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	 */
	struct UMovieSceneScriptingStringChannel_GetDefault_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	 */
	struct UMovieSceneScriptingStringChannel_AddKey_Params
	{
	public:
		struct FFrameNumber                                        InTime;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HMY9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              NewValue;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SubFrame;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESequenceTimeUnit                                          TimeUnit;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6LFO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneScriptingStringKey*                       ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	 */
	struct UMovieSceneSectionExtensions_SetStartFrameSeconds_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	 */
	struct UMovieSceneSectionExtensions_SetStartFrameBounded_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBounded;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	 */
	struct UMovieSceneSectionExtensions_SetStartFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StartFrame;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	 */
	struct UMovieSceneSectionExtensions_SetRangeSeconds_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetRange
	 */
	struct UMovieSceneSectionExtensions_SetRange_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StartFrame;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndFrame;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	 */
	struct UMovieSceneSectionExtensions_SetEndFrameSeconds_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	 */
	struct UMovieSceneSectionExtensions_SetEndFrameBounded_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBounded;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	 */
	struct UMovieSceneSectionExtensions_SetEndFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	 */
	struct UMovieSceneSectionExtensions_HasStartFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	 */
	struct UMovieSceneSectionExtensions_HasEndFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	 */
	struct UMovieSceneSectionExtensions_GetStartFrameSeconds_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	 */
	struct UMovieSceneSectionExtensions_GetStartFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	 */
	struct UMovieSceneSectionExtensions_GetParentSequenceFrame_Params
	{
	public:
		class UMovieSceneSubSection*                               Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InFrame;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OGGW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMovieSceneSequence*                                 ParentSequence;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	 */
	struct UMovieSceneSectionExtensions_GetEndFrameSeconds_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	 */
	struct UMovieSceneSectionExtensions_GetEndFrame_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	 */
	struct UMovieSceneSectionExtensions_GetChannelsByType_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ChannelType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneScriptingChannel*>                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
	 */
	struct UMovieSceneSectionExtensions_GetChannels_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneScriptingChannel*>                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	 */
	struct UMovieSceneSectionExtensions_GetAllChannels_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneScriptingChannel*>                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
	 */
	struct UMovieSceneSectionExtensions_FindChannelsByType_Params
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ChannelType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneScriptingChannel*>                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	 */
	struct UMovieSceneSequenceExtensions_SortMarkedFrames_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	 */
	struct UMovieSceneSequenceExtensions_SetWorkRangeStart_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTimeInSeconds;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	 */
	struct UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTimeInSeconds;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	 */
	struct UMovieSceneSequenceExtensions_SetViewRangeStart_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTimeInSeconds;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	 */
	struct UMovieSceneSequenceExtensions_SetViewRangeEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTimeInSeconds;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	 */
	struct UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          TickResolution;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	 */
	struct UMovieSceneSequenceExtensions_SetTickResolution_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          TickResolution;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	 */
	struct UMovieSceneSequenceExtensions_SetReadOnly_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInReadOnly;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	 */
	struct UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	 */
	struct UMovieSceneSequenceExtensions_SetPlaybackStart_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StartFrame;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	 */
	struct UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	 */
	struct UMovieSceneSequenceExtensions_SetPlaybackEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndFrame;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	 */
	struct UMovieSceneSequenceExtensions_SetMarkedFrame_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InMarkIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InFrameNumber;                                           // 0x000C(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	 */
	struct UMovieSceneSequenceExtensions_SetEvaluationType_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieSceneEvaluationType                                  InEvaluationType;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	 */
	struct UMovieSceneSequenceExtensions_SetDisplayRate_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          DisplayRate;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	 */
	struct UMovieSceneSequenceExtensions_SetClockSource_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateClockSource                                         InClockSource;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	 */
	struct UMovieSceneSequenceExtensions_ResolveBindingID_Params
	{
	public:
		class UMovieSceneSequence*                                 MasterSequence;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneObjectBindingID                          InObjectBindingID;                                       // 0x0008(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	 */
	struct UMovieSceneSequenceExtensions_RemoveMasterTrack_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    MasterTrack;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	 */
	struct UMovieSceneSequenceExtensions_MakeRangeSeconds_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0010(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	 */
	struct UMovieSceneSequenceExtensions_MakeRange_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StartFrame;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0010(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	 */
	struct UMovieSceneSequenceExtensions_MakeBindingID_Params
	{
	public:
		class UMovieSceneSequence*                                 MasterSequence;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EMovieSceneObjectBindingSpace                              Space;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZIC4[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0024(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	 */
	struct UMovieSceneSequenceExtensions_LocateBoundObjects_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             Context;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	 */
	struct UMovieSceneSequenceExtensions_IsReadOnly_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	 */
	struct UMovieSceneSequenceExtensions_GetWorkRangeStart_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	 */
	struct UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	 */
	struct UMovieSceneSequenceExtensions_GetViewRangeStart_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	 */
	struct UMovieSceneSequenceExtensions_GetViewRangeEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	 */
	struct UMovieSceneSequenceExtensions_GetTimecodeSource_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTimecode                                           ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	 */
	struct UMovieSceneSequenceExtensions_GetTickResolution_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	 */
	struct UMovieSceneSequenceExtensions_GetSpawnables_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSequencerBindingProxy>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	 */
	struct UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneFolder*>                           ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	 */
	struct UMovieSceneSequenceExtensions_GetPossessables_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSequencerBindingProxy>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	 */
	struct UMovieSceneSequenceExtensions_GetPortableBindingID_Params
	{
	public:
		class UMovieSceneSequence*                                 MasterSequence;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSequence*                                 DestinationSequence;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	 */
	struct UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	 */
	struct UMovieSceneSequenceExtensions_GetPlaybackStart_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	 */
	struct UMovieSceneSequenceExtensions_GetPlaybackRange_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerScriptingRange                            ReturnValue;                                             // 0x0008(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	 */
	struct UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	 */
	struct UMovieSceneSequenceExtensions_GetPlaybackEnd_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	 */
	struct UMovieSceneSequenceExtensions_GetMovieScene_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieScene*                                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	 */
	struct UMovieSceneSequenceExtensions_GetMasterTracks_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	 */
	struct UMovieSceneSequenceExtensions_GetMarkedFrames_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMovieSceneMarkedFrame>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	 */
	struct UMovieSceneSequenceExtensions_GetEvaluationType_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovieSceneEvaluationType                                  ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	 */
	struct UMovieSceneSequenceExtensions_GetDisplayRate_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	 */
	struct UMovieSceneSequenceExtensions_GetClockSource_Params
	{
	public:
		class UMovieSceneSequence*                                 InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateClockSource                                         ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	 */
	struct UMovieSceneSequenceExtensions_GetBindings_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSequencerBindingProxy>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	 */
	struct UMovieSceneSequenceExtensions_GetBindingID_Params
	{
	public:
		struct FSequencerBindingProxy                              InBinding;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	 */
	struct UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InFrameNumber;                                           // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForward;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZB4D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	 */
	struct UMovieSceneSequenceExtensions_FindMasterTracksByType_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	 */
	struct UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneTrack*>                            ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	 */
	struct UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InLabel;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	 */
	struct UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        InFrameNumber;                                           // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	 */
	struct UMovieSceneSequenceExtensions_FindBindingByName_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	 */
	struct UMovieSceneSequenceExtensions_FindBindingById_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               BindingID;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	 */
	struct UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	 */
	struct UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DeleteIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	 */
	struct UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToSpawn;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	 */
	struct UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ClassToSpawn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	 */
	struct UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewFolderName;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneFolder*                                   ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	 */
	struct UMovieSceneSequenceExtensions_AddPossessable_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToPossess;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSequencerBindingProxy                              ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	 */
	struct UMovieSceneSequenceExtensions_AddMasterTrack_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              TrackType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneTrack*                                    ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	 */
	struct UMovieSceneSequenceExtensions_AddMarkedFrame_Params
	{
	public:
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneMarkedFrame                              InMarkedFrame;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	 */
	struct UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                InName;                                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    RowIndex;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	 */
	struct UMovieSceneTrackExtensions_SetSortingOrder_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SortingOrder;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	 */
	struct UMovieSceneTrackExtensions_SetSectionToKey_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSection*                                  Section;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	 */
	struct UMovieSceneTrackExtensions_SetDisplayName_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                InName;                                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	 */
	struct UMovieSceneTrackExtensions_SetColorTint_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ColorTint;                                               // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	 */
	struct UMovieSceneTrackExtensions_RemoveSection_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSection*                                  Section;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	 */
	struct UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RowIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1MRC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	 */
	struct UMovieSceneTrackExtensions_GetSortingOrder_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	 */
	struct UMovieSceneTrackExtensions_GetSectionToKey_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSection*                                  ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetSections
	 */
	struct UMovieSceneTrackExtensions_GetSections_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMovieSceneSection*>                          ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	 */
	struct UMovieSceneTrackExtensions_GetDisplayName_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	 */
	struct UMovieSceneTrackExtensions_GetColorTint_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneTrackExtensions.AddSection
	 */
	struct UMovieSceneTrackExtensions_AddSection_Params
	{
	public:
		class UMovieSceneTrack*                                    Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMovieSceneSection*                                  ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	 */
	struct UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params
	{
	public:
		class UMovieSceneFloatVectorTrack*                         Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InNumChannelsUsed;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	 */
	struct UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params
	{
	public:
		class UMovieSceneFloatVectorTrack*                         Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	 */
	struct UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params
	{
	public:
		class UMovieSceneDoubleVectorTrack*                        Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InNumChannelsUsed;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	 */
	struct UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params
	{
	public:
		class UMovieSceneDoubleVectorTrack*                        Track;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	 */
	struct USequencerScriptingRangeExtensions_SetStartSeconds_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Start;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	 */
	struct USequencerScriptingRangeExtensions_SetStartFrame_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Start;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	 */
	struct USequencerScriptingRangeExtensions_SetEndSeconds_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      End;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	 */
	struct USequencerScriptingRangeExtensions_SetEndFrame_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    End;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	 */
	struct USequencerScriptingRangeExtensions_RemoveStart_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	 */
	struct USequencerScriptingRangeExtensions_RemoveEnd_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	 */
	struct USequencerScriptingRangeExtensions_HasStart_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	 */
	struct USequencerScriptingRangeExtensions_HasEnd_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	 */
	struct USequencerScriptingRangeExtensions_GetStartSeconds_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	 */
	struct USequencerScriptingRangeExtensions_GetStartFrame_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	 */
	struct USequencerScriptingRangeExtensions_GetEndSeconds_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	 */
	struct USequencerScriptingRangeExtensions_GetEndFrame_Params
	{
	public:
		struct FSequencerScriptingRange                            Range;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
