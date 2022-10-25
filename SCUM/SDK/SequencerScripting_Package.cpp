/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InParentBinding                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetParent");
		
		UMovieSceneBindingExtensions_SetParent_Params params {};
		params.InBinding = InBinding;
		params.InParentBinding = InParentBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::SetName(const struct FSequencerBindingProxy& InBinding, const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetName");
		
		UMovieSceneBindingExtensions_SetName_Params params {};
		params.InBinding = InBinding;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        InDisplayName                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::SetDisplayName(const struct FSequencerBindingProxy& InBinding, const class FText& InDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName");
		
		UMovieSceneBindingExtensions_SetDisplayName_Params params {};
		params.InBinding = InBinding;
		params.InDisplayName = InDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            TrackToRemove                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack");
		
		UMovieSceneBindingExtensions_RemoveTrack_Params params {};
		params.InBinding = InBinding;
		params.TrackToRemove = TrackToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::Remove(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.Remove");
		
		UMovieSceneBindingExtensions_Remove_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      SourceBindingId                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      DestinationBindingId                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents");
		
		UMovieSceneBindingExtensions_MoveBindingContents_Params params {};
		params.SourceBindingId = SourceBindingId;
		params.DestinationBindingId = DestinationBindingId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneBindingExtensions::IsValid(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.IsValid");
		
		UMovieSceneBindingExtensions_IsValid_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetTracks");
		
		UMovieSceneBindingExtensions_GetTracks_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass");
		
		UMovieSceneBindingExtensions_GetPossessedObjectClass_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneBindingExtensions::GetParent(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetParent");
		
		UMovieSceneBindingExtensions_GetParent_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UObject* UMovieSceneBindingExtensions::GetObjectTemplate(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate");
		
		UMovieSceneBindingExtensions_GetObjectTemplate_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UMovieSceneBindingExtensions::GetName(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetName");
		
		UMovieSceneBindingExtensions_GetName_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UMovieSceneBindingExtensions::GetId(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetId");
		
		UMovieSceneBindingExtensions_GetId_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UMovieSceneBindingExtensions::GetDisplayName(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName");
		
		UMovieSceneBindingExtensions_GetDisplayName_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables");
		
		UMovieSceneBindingExtensions_GetChildPossessables_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType");
		
		UMovieSceneBindingExtensions_FindTracksByType_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType");
		
		UMovieSceneBindingExtensions_FindTracksByExactType_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.AddTrack");
		
		UMovieSceneBindingExtensions_AddTrack_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBindingExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindingExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneBindingExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneEventTrack*                       InTrack                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::AddEventTriggerSection(class UMovieSceneEventTrack* InTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection");
		
		UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params params {};
		params.InTrack = InTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneEventTrack*                       InTrack                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection");
		
		UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params params {};
		params.InTrack = InTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneEventTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InFolderName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::SetFolderName(class UMovieSceneFolder* Folder, const class FName& InFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName");
		
		UMovieSceneFolderExtensions_SetFolderName_Params params {};
		params.Folder = Folder;
		params.InFolderName = InFolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      InFolderColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor");
		
		UMovieSceneFolderExtensions_SetFolderColor_Params params {};
		params.Folder = Folder;
		params.InFolderColor = InFolderColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InObjectBinding                                            (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding");
		
		UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params params {};
		params.Folder = Folder;
		params.InObjectBinding = InObjectBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            InMasterTrack                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack");
		
		UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params params {};
		params.Folder = Folder;
		params.InMasterTrack = InMasterTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           TargetFolder                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneFolder*                           FolderToRemove                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder");
		
		UMovieSceneFolderExtensions_RemoveChildFolder_Params params {};
		params.TargetFolder = TargetFolder;
		params.FolderToRemove = FolderToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieSceneFolderExtensions::GetFolderName(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName");
		
		UMovieSceneFolderExtensions_GetFolderName_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UMovieSceneFolderExtensions::GetFolderColor(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor");
		
		UMovieSceneFolderExtensions_GetFolderColor_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings");
		
		UMovieSceneFolderExtensions_GetChildObjectBindings_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks");
		
		UMovieSceneFolderExtensions_GetChildMasterTracks_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders");
		
		UMovieSceneFolderExtensions_GetChildFolders_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InObjectBinding                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding");
		
		UMovieSceneFolderExtensions_AddChildObjectBinding_Params params {};
		params.Folder = Folder;
		params.InObjectBinding = InObjectBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            InMasterTrack                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack");
		
		UMovieSceneFolderExtensions_AddChildMasterTrack_Params params {};
		params.Folder = Folder;
		params.InMasterTrack = InMasterTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneFolder*                           TargetFolder                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneFolder*                           FolderToAdd                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder");
		
		UMovieSceneFolderExtensions_AddChildFolder_Params params {};
		params.TargetFolder = TargetFolder;
		params.FolderToAdd = FolderToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFolderExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFolderExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneFolderExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPropertyName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPropertyPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const class FName& InPropertyName, const class FString& InPropertyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath");
		
		UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params params {};
		params.Track = Track;
		params.InPropertyName = InPropertyName;
		params.InPropertyPath = InPropertyPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneObjectPropertyTrack*              Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PropertyClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass");
		
		UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params params {};
		params.Track = Track;
		params.PropertyClass = PropertyClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName");
		
		UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMovieScenePropertyTrackExtensions::GetPropertyPath(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath");
		
		UMovieScenePropertyTrackExtensions_GetPropertyPath_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieScenePropertyTrackExtensions::GetPropertyName(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName");
		
		UMovieScenePropertyTrackExtensions_GetPropertyName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneObjectPropertyTrack*              Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass");
		
		UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePropertyTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieScenePropertyTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InNewValue                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingActorReferenceKey::SetValue(const struct FMovieSceneObjectBindingID& InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue");
		
		UMovieSceneScriptingActorReferenceKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingActorReferenceKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime");
		
		UMovieSceneScriptingActorReferenceKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue");
		
		UMovieSceneScriptingActorReferenceKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime");
		
		UMovieSceneScriptingActorReferenceKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingActorReferenceKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingActorReferenceKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingActorReferenceKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InDefaultValue                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingActorReferenceChannel::SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault");
		
		UMovieSceneScriptingActorReferenceChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingActorReferenceChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey");
		
		UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault");
		
		UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingActorReferenceChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault");
		
		UMovieSceneScriptingActorReferenceChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys");
		
		UMovieSceneScriptingActorReferenceChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault");
		
		UMovieSceneScriptingActorReferenceChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneObjectBindingID                  NewValue                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey");
		
		UMovieSceneScriptingActorReferenceChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingActorReferenceChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingActorReferenceChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingActorReferenceChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue");
		
		UMovieSceneScriptingBoolKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingBoolKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime");
		
		UMovieSceneScriptingBoolKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingBoolKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue");
		
		UMovieSceneScriptingBoolKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingBoolKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime");
		
		UMovieSceneScriptingBoolKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingBoolKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingBoolKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingBoolKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault");
		
		UMovieSceneScriptingBoolChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingBoolChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey");
		
		UMovieSceneScriptingBoolChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingBoolChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault");
		
		UMovieSceneScriptingBoolChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingBoolChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault");
		
		UMovieSceneScriptingBoolChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneScriptingBoolChannel::GetNumKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys");
		
		UMovieSceneScriptingBoolChannel_GetNumKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys");
		
		UMovieSceneScriptingBoolChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingBoolChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault");
		
		UMovieSceneScriptingBoolChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys");
		
		UMovieSceneScriptingBoolChannel_EvaluateKeys_Params params {};
		params.Range = Range;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	 * 		Flags  -> ()
	 */
	struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange");
		
		UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey");
		
		UMovieSceneScriptingBoolChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingBoolChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingBoolChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingBoolChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingByteKey::SetValue(unsigned char InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.SetValue");
		
		UMovieSceneScriptingByteKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingByteKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.SetTime");
		
		UMovieSceneScriptingByteKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
	 * 		Flags  -> ()
	 */
	unsigned char UMovieSceneScriptingByteKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.GetValue");
		
		UMovieSceneScriptingByteKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingByteKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.GetTime");
		
		UMovieSceneScriptingByteKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingByteKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingByteKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingByteKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingByteChannel::SetDefault(unsigned char InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault");
		
		UMovieSceneScriptingByteChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingByteChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey");
		
		UMovieSceneScriptingByteChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingByteChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault");
		
		UMovieSceneScriptingByteChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingByteChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault");
		
		UMovieSceneScriptingByteChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys");
		
		UMovieSceneScriptingByteChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	 * 		Flags  -> ()
	 */
	unsigned char UMovieSceneScriptingByteChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault");
		
		UMovieSceneScriptingByteChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovieSceneKeyInterpolation                        InInterpolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(const struct FFrameNumber& InTime, unsigned char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey");
		
		UMovieSceneScriptingByteChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		params.InInterpolation = InInterpolation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingByteChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingByteChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingByteChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneEvent                            InNewValue                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingEventKey::SetValue(const struct FMovieSceneEvent& InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.SetValue");
		
		UMovieSceneScriptingEventKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingEventKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.SetTime");
		
		UMovieSceneScriptingEventKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
	 * 		Flags  -> ()
	 */
	struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.GetValue");
		
		UMovieSceneScriptingEventKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingEventKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.GetTime");
		
		UMovieSceneScriptingEventKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingEventKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingEventKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingEventKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingEventChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey");
		
		UMovieSceneScriptingEventChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys");
		
		UMovieSceneScriptingEventChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneEvent                            NewValue                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey");
		
		UMovieSceneScriptingEventChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingEventChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingEventChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingEventChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetValue(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue");
		
		UMovieSceneScriptingFloatKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime");
		
		UMovieSceneScriptingFloatKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERichCurveTangentWeightMode                        InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode");
		
		UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERichCurveTangentMode                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetTangentMode(ERichCurveTangentMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode");
		
		UMovieSceneScriptingFloatKey_SetTangentMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight");
		
		UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent");
		
		UMovieSceneScriptingFloatKey_SetLeaveTangent_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERichCurveInterpMode                               InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetInterpolationMode(ERichCurveInterpMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode");
		
		UMovieSceneScriptingFloatKey_SetInterpolationMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight");
		
		UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent");
		
		UMovieSceneScriptingFloatKey_SetArriveTangent_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue");
		
		UMovieSceneScriptingFloatKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingFloatKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime");
		
		UMovieSceneScriptingFloatKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	 * 		Flags  -> ()
	 */
	ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode");
		
		UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	 * 		Flags  -> ()
	 */
	ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode");
		
		UMovieSceneScriptingFloatKey_GetTangentMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight");
		
		UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatKey::GetLeaveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent");
		
		UMovieSceneScriptingFloatKey_GetLeaveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	 * 		Flags  -> ()
	 */
	ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode");
		
		UMovieSceneScriptingFloatKey_GetInterpolationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatKey::GetArriveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight");
		
		UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatKey::GetArriveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent");
		
		UMovieSceneScriptingFloatKey_GetArriveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingFloatKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingFloatKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingFloatKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERichCurveExtrapolation                            InExtrapolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params params {};
		params.InExtrapolation = InExtrapolation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERichCurveExtrapolation                            InExtrapolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params params {};
		params.InExtrapolation = InExtrapolation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault");
		
		UMovieSceneScriptingFloatChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingFloatChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey");
		
		UMovieSceneScriptingFloatChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingFloatChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault");
		
		UMovieSceneScriptingFloatChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingFloatChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault");
		
		UMovieSceneScriptingFloatChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	 * 		Flags  -> ()
	 */
	ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	 * 		Flags  -> ()
	 */
	ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneScriptingFloatChannel::GetNumKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys");
		
		UMovieSceneScriptingFloatChannel_GetNumKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys");
		
		UMovieSceneScriptingFloatChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	 * 		Flags  -> ()
	 */
	float UMovieSceneScriptingFloatChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault");
		
		UMovieSceneScriptingFloatChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys");
		
		UMovieSceneScriptingFloatChannel_EvaluateKeys_Params params {};
		params.Range = Range;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	 * 		Flags  -> ()
	 */
	struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange");
		
		UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovieSceneKeyInterpolation                        InInterpolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey");
		
		UMovieSceneScriptingFloatChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		params.InInterpolation = InInterpolation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingFloatChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingFloatChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingFloatChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingIntegerKey::SetValue(int32_t InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue");
		
		UMovieSceneScriptingIntegerKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingIntegerKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime");
		
		UMovieSceneScriptingIntegerKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneScriptingIntegerKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue");
		
		UMovieSceneScriptingIntegerKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingIntegerKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime");
		
		UMovieSceneScriptingIntegerKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingIntegerKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingIntegerKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingIntegerKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingIntegerChannel::SetDefault(int32_t InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault");
		
		UMovieSceneScriptingIntegerChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingIntegerChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey");
		
		UMovieSceneScriptingIntegerChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingIntegerChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault");
		
		UMovieSceneScriptingIntegerChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingIntegerChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault");
		
		UMovieSceneScriptingIntegerChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys");
		
		UMovieSceneScriptingIntegerChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneScriptingIntegerChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault");
		
		UMovieSceneScriptingIntegerChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey");
		
		UMovieSceneScriptingIntegerChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingIntegerChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingIntegerChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingIntegerChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingObjectPathKey::SetValue(class UObject* InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue");
		
		UMovieSceneScriptingObjectPathKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingObjectPathKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime");
		
		UMovieSceneScriptingObjectPathKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	 * 		Flags  -> ()
	 */
	class UObject* UMovieSceneScriptingObjectPathKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue");
		
		UMovieSceneScriptingObjectPathKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime");
		
		UMovieSceneScriptingObjectPathKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingObjectPathKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingObjectPathKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingObjectPathKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingObjectPathChannel::SetDefault(class UObject* InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault");
		
		UMovieSceneScriptingObjectPathChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingObjectPathChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey");
		
		UMovieSceneScriptingObjectPathChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault");
		
		UMovieSceneScriptingObjectPathChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingObjectPathChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault");
		
		UMovieSceneScriptingObjectPathChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys");
		
		UMovieSceneScriptingObjectPathChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	 * 		Flags  -> ()
	 */
	class UObject* UMovieSceneScriptingObjectPathChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault");
		
		UMovieSceneScriptingObjectPathChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey");
		
		UMovieSceneScriptingObjectPathChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingObjectPathChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingObjectPathChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingObjectPathChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewValue                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingStringKey::SetValue(const class FString& InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.SetValue");
		
		UMovieSceneScriptingStringKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingStringKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.SetTime");
		
		UMovieSceneScriptingStringKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
	 * 		Flags  -> ()
	 */
	class FString UMovieSceneScriptingStringKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.GetValue");
		
		UMovieSceneScriptingStringKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingStringKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.GetTime");
		
		UMovieSceneScriptingStringKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingStringKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingStringKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingStringKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InDefaultValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingStringChannel::SetDefault(const class FString& InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault");
		
		UMovieSceneScriptingStringChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingStringChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey");
		
		UMovieSceneScriptingStringChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	 * 		Flags  -> ()
	 */
	void UMovieSceneScriptingStringChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault");
		
		UMovieSceneScriptingStringChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	 * 		Flags  -> ()
	 */
	bool UMovieSceneScriptingStringChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault");
		
		UMovieSceneScriptingStringChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	 * 		Flags  -> ()
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys");
		
		UMovieSceneScriptingStringChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	 * 		Flags  -> ()
	 */
	class FString UMovieSceneScriptingStringChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault");
		
		UMovieSceneScriptingStringChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewValue                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const struct FFrameNumber& InTime, const class FString& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey");
		
		UMovieSceneScriptingStringChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingStringChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingStringChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingStringChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds");
		
		UMovieSceneSectionExtensions_SetStartFrameSeconds_Params params {};
		params.Section = Section;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBounded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded");
		
		UMovieSceneSectionExtensions_SetStartFrameBounded_Params params {};
		params.Section = Section;
		params.bIsBounded = bIsBounded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame");
		
		UMovieSceneSectionExtensions_SetStartFrame_Params params {};
		params.Section = Section;
		params.StartFrame = StartFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds");
		
		UMovieSceneSectionExtensions_SetRangeSeconds_Params params {};
		params.Section = Section;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRange");
		
		UMovieSceneSectionExtensions_SetRange_Params params {};
		params.Section = Section;
		params.StartFrame = StartFrame;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds");
		
		UMovieSceneSectionExtensions_SetEndFrameSeconds_Params params {};
		params.Section = Section;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBounded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded");
		
		UMovieSceneSectionExtensions_SetEndFrameBounded_Params params {};
		params.Section = Section;
		params.bIsBounded = bIsBounded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame");
		
		UMovieSceneSectionExtensions_SetEndFrame_Params params {};
		params.Section = Section;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSectionExtensions::HasStartFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame");
		
		UMovieSceneSectionExtensions_HasStartFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSectionExtensions::HasEndFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame");
		
		UMovieSceneSectionExtensions_HasEndFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSectionExtensions::GetStartFrameSeconds(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds");
		
		UMovieSceneSectionExtensions_GetStartFrameSeconds_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::GetStartFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame");
		
		UMovieSceneSectionExtensions_GetStartFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSubSection*                       Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InFrame                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSequence*                         ParentSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame");
		
		UMovieSceneSectionExtensions_GetParentSequenceFrame_Params params {};
		params.Section = Section;
		params.InFrame = InFrame;
		params.ParentSequence = ParentSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSectionExtensions::GetEndFrameSeconds(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds");
		
		UMovieSceneSectionExtensions_GetEndFrameSeconds_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::GetEndFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame");
		
		UMovieSceneSectionExtensions_GetEndFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetChannels");
		
		UMovieSceneSectionExtensions_GetChannels_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ChannelType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType");
		
		UMovieSceneSectionExtensions_FindChannelsByType_Params params {};
		params.Section = Section;
		params.ChannelType = ChannelType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSectionExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSectionExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneSectionExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SortMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames");
		
		UMovieSceneSequenceExtensions_SortMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTimeInSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart");
		
		UMovieSceneSequenceExtensions_SetWorkRangeStart_Params params {};
		params.InSequence = InSequence;
		params.StartTimeInSeconds = StartTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTimeInSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd");
		
		UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params params {};
		params.InSequence = InSequence;
		params.EndTimeInSeconds = EndTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTimeInSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart");
		
		UMovieSceneSequenceExtensions_SetViewRangeStart_Params params {};
		params.InSequence = InSequence;
		params.StartTimeInSeconds = StartTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTimeInSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd");
		
		UMovieSceneSequenceExtensions_SetViewRangeEnd_Params params {};
		params.InSequence = InSequence;
		params.EndTimeInSeconds = EndTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  TickResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly");
		
		UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params params {};
		params.Sequence = Sequence;
		params.TickResolution = TickResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  TickResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution");
		
		UMovieSceneSequenceExtensions_SetTickResolution_Params params {};
		params.Sequence = Sequence;
		params.TickResolution = TickResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInReadOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly");
		
		UMovieSceneSequenceExtensions_SetReadOnly_Params params {};
		params.Sequence = Sequence;
		params.bInReadOnly = bInReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds");
		
		UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params params {};
		params.Sequence = Sequence;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart");
		
		UMovieSceneSequenceExtensions_SetPlaybackStart_Params params {};
		params.Sequence = Sequence;
		params.StartFrame = StartFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds");
		
		UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params params {};
		params.Sequence = Sequence;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd");
		
		UMovieSceneSequenceExtensions_SetPlaybackEnd_Params params {};
		params.Sequence = Sequence;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMarkIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame");
		
		UMovieSceneSequenceExtensions_SetMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InMarkIndex = InMarkIndex;
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovieSceneEvaluationType                          InEvaluationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType");
		
		UMovieSceneSequenceExtensions_SetEvaluationType_Params params {};
		params.InSequence = InSequence;
		params.InEvaluationType = InEvaluationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  DisplayRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate");
		
		UMovieSceneSequenceExtensions_SetDisplayRate_Params params {};
		params.Sequence = Sequence;
		params.DisplayRate = DisplayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateClockSource                                 InClockSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource");
		
		UMovieSceneSequenceExtensions_SetClockSource_Params params {};
		params.InSequence = InSequence;
		params.InClockSource = InClockSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneObjectBindingID                  InObjectBindingID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID");
		
		UMovieSceneSequenceExtensions_ResolveBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.InObjectBindingID = InObjectBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            MasterTrack                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequenceExtensions::RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack");
		
		UMovieSceneSequenceExtensions_RemoveMasterTrack_Params params {};
		params.Sequence = Sequence;
		params.MasterTrack = MasterTrack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds");
		
		UMovieSceneSequenceExtensions_MakeRangeSeconds_Params params {};
		params.Sequence = Sequence;
		params.StartTime = StartTime;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange");
		
		UMovieSceneSequenceExtensions_MakeRange_Params params {};
		params.Sequence = Sequence;
		params.StartFrame = StartFrame;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMovieSceneObjectBindingSpace                      Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID");
		
		UMovieSceneSequenceExtensions_MakeBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.InBinding = InBinding;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects");
		
		UMovieSceneSequenceExtensions_LocateBoundObjects_Params params {};
		params.Sequence = Sequence;
		params.InBinding = InBinding;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequenceExtensions::IsReadOnly(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly");
		
		UMovieSceneSequenceExtensions_IsReadOnly_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetWorkRangeStart(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart");
		
		UMovieSceneSequenceExtensions_GetWorkRangeStart_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetWorkRangeEnd(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd");
		
		UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetViewRangeStart(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart");
		
		UMovieSceneSequenceExtensions_GetViewRangeStart_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetViewRangeEnd(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd");
		
		UMovieSceneSequenceExtensions_GetViewRangeEnd_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource");
		
		UMovieSceneSequenceExtensions_GetTimecodeSource_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UMovieSceneSequenceExtensions::GetTickResolution(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution");
		
		UMovieSceneSequenceExtensions_GetTickResolution_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables");
		
		UMovieSceneSequenceExtensions_GetSpawnables_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence");
		
		UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetPossessables(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables");
		
		UMovieSceneSequenceExtensions_GetPossessables_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSequence*                         DestinationSequence                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID");
		
		UMovieSceneSequenceExtensions_GetPortableBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.DestinationSequence = DestinationSequence;
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds");
		
		UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::GetPlaybackStart(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart");
		
		UMovieSceneSequenceExtensions_GetPlaybackStart_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange");
		
		UMovieSceneSequenceExtensions_GetPlaybackRange_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds");
		
		UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::GetPlaybackEnd(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd");
		
		UMovieSceneSequenceExtensions_GetPlaybackEnd_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene");
		
		UMovieSceneSequenceExtensions_GetMovieScene_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks");
		
		UMovieSceneSequenceExtensions_GetMasterTracks_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames");
		
		UMovieSceneSequenceExtensions_GetMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMovieSceneEvaluationType UMovieSceneSequenceExtensions::GetEvaluationType(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType");
		
		UMovieSceneSequenceExtensions_GetEvaluationType_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate");
		
		UMovieSceneSequenceExtensions_GetDisplayRate_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUpdateClockSource UMovieSceneSequenceExtensions::GetClockSource(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource");
		
		UMovieSceneSequenceExtensions_GetClockSource_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetBindings(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings");
		
		UMovieSceneSequenceExtensions_GetBindings_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID");
		
		UMovieSceneSequenceExtensions_GetBindingID_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForward                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame");
		
		UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InFrameNumber = InFrameNumber;
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType");
		
		UMovieSceneSequenceExtensions_FindMasterTracksByType_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType");
		
		UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel");
		
		UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params params {};
		params.Sequence = Sequence;
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber");
		
		UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params params {};
		params.Sequence = Sequence;
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName");
		
		UMovieSceneSequenceExtensions_FindBindingByName_Params params {};
		params.Sequence = Sequence;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       BindingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById");
		
		UMovieSceneSequenceExtensions_FindBindingById_Params params {};
		params.Sequence = Sequence;
		params.BindingID = BindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::DeleteMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames");
		
		UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeleteIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame");
		
		UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.DeleteIndex = DeleteIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToSpawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance");
		
		UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params params {};
		params.Sequence = Sequence;
		params.ObjectToSpawn = ObjectToSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass");
		
		UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params params {};
		params.Sequence = Sequence;
		params.ClassToSpawn = ClassToSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewFolderName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence");
		
		UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params params {};
		params.Sequence = Sequence;
		params.NewFolderName = NewFolderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable");
		
		UMovieSceneSequenceExtensions_AddPossessable_Params params {};
		params.Sequence = Sequence;
		params.ObjectToPossess = ObjectToPossess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack");
		
		UMovieSceneSequenceExtensions_AddMasterTrack_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneMarkedFrame                      InMarkedFrame                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame");
		
		UMovieSceneSequenceExtensions_AddMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InMarkedFrame = InMarkedFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSequenceExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequenceExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneSequenceExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SortingOrder                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder");
		
		UMovieSceneTrackExtensions_SetSortingOrder_Params params {};
		params.Track = Track;
		params.SortingOrder = SortingOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey");
		
		UMovieSceneTrackExtensions_SetSectionToKey_Params params {};
		params.Track = Track;
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        InName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::SetDisplayName(class UMovieSceneTrack* Track, const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName");
		
		UMovieSceneTrackExtensions_SetDisplayName_Params params {};
		params.Track = Track;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      ColorTint                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint");
		
		UMovieSceneTrackExtensions_SetColorTint_Params params {};
		params.Track = Track;
		params.ColorTint = ColorTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection");
		
		UMovieSceneTrackExtensions_RemoveSection_Params params {};
		params.Track = Track;
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneTrackExtensions::GetSortingOrder(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder");
		
		UMovieSceneTrackExtensions_GetSortingOrder_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey");
		
		UMovieSceneTrackExtensions_GetSectionToKey_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSections");
		
		UMovieSceneTrackExtensions_GetSections_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMovieSceneTrackExtensions::GetDisplayName(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName");
		
		UMovieSceneTrackExtensions_GetDisplayName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UMovieSceneTrackExtensions::GetColorTint(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint");
		
		UMovieSceneTrackExtensions_GetColorTint_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.AddSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.AddSection");
		
		UMovieSceneTrackExtensions_AddSection_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneVectorTrack*                      Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumChannelsUsed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed");
		
		UMovieSceneVectorTrackExtensions_SetNumChannelsUsed_Params params {};
		params.Track = Track;
		params.InNumChannelsUsed = InNumChannelsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneVectorTrack*                      Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneVectorTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed");
		
		UMovieSceneVectorTrackExtensions_GetNumChannelsUsed_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneVectorTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVectorTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneVectorTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::SetStartSeconds(struct FSequencerScriptingRange* Range, float Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds");
		
		USequencerScriptingRangeExtensions_SetStartSeconds_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::SetStartFrame(struct FSequencerScriptingRange* Range, int32_t Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame");
		
		USequencerScriptingRangeExtensions_SetStartFrame_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::SetEndSeconds(struct FSequencerScriptingRange* Range, float End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds");
		
		USequencerScriptingRangeExtensions_SetEndSeconds_Params params {};
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::SetEndFrame(struct FSequencerScriptingRange* Range, int32_t End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame");
		
		USequencerScriptingRangeExtensions_SetEndFrame_Params params {};
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::RemoveStart(struct FSequencerScriptingRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart");
		
		USequencerScriptingRangeExtensions_RemoveStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::RemoveEnd(struct FSequencerScriptingRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd");
		
		USequencerScriptingRangeExtensions_RemoveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencerScriptingRangeExtensions::HasStart(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart");
		
		USequencerScriptingRangeExtensions_HasStart_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencerScriptingRangeExtensions::HasEnd(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd");
		
		USequencerScriptingRangeExtensions_HasEnd_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencerScriptingRangeExtensions::GetStartSeconds(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds");
		
		USequencerScriptingRangeExtensions_GetStartSeconds_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t USequencerScriptingRangeExtensions::GetStartFrame(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame");
		
		USequencerScriptingRangeExtensions_GetStartFrame_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencerScriptingRangeExtensions::GetEndSeconds(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds");
		
		USequencerScriptingRangeExtensions_GetEndSeconds_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t USequencerScriptingRangeExtensions::GetEndFrame(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame");
		
		USequencerScriptingRangeExtensions_GetEndFrame_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequencerScriptingRangeExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequencerScriptingRangeExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.SequencerScriptingRangeExtensions");
		return ptr;
	}

}


