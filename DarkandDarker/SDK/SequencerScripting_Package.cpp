/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x012265E0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetParent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InParentBinding                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetParent");
		
		UMovieSceneBindingExtensions_SetParent_Params params {};
		params.InBinding = InBinding;
		params.InParentBinding = InParentBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226430
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_SetName(const struct FSequencerBindingProxy& InBinding, const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetName");
		
		UMovieSceneBindingExtensions_SetName_Params params {};
		params.InBinding = InBinding;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226160
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        InDisplayName                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_SetDisplayName(const struct FSequencerBindingProxy& InBinding, const class FText& InDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName");
		
		UMovieSceneBindingExtensions_SetDisplayName_Params params {};
		params.InBinding = InBinding;
		params.InDisplayName = InDisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225D20
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            TrackToRemove                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack");
		
		UMovieSceneBindingExtensions_RemoveTrack_Params params {};
		params.InBinding = InBinding;
		params.TrackToRemove = TrackToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225860
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.Remove
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_Remove(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.Remove");
		
		UMovieSceneBindingExtensions_Remove_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225770
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      SourceBindingId                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      DestinationBindingId                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneBindingExtensions::STATIC_MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents");
		
		UMovieSceneBindingExtensions_MoveBindingContents_Params params {};
		params.SourceBindingId = SourceBindingId;
		params.DestinationBindingId = DestinationBindingId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012256D0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneBindingExtensions::STATIC_IsValid(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.IsValid");
		
		UMovieSceneBindingExtensions_IsValid_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012251A0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_GetTracks(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetTracks");
		
		UMovieSceneBindingExtensions_GetTracks_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224F00
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UClass* UMovieSceneBindingExtensions::STATIC_GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass");
		
		UMovieSceneBindingExtensions_GetPossessedObjectClass_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224E50
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetParent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneBindingExtensions::STATIC_GetParent(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetParent");
		
		UMovieSceneBindingExtensions_GetParent_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224DB0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UObject* UMovieSceneBindingExtensions::STATIC_GetObjectTemplate(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate");
		
		UMovieSceneBindingExtensions_GetObjectTemplate_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224BE0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UMovieSceneBindingExtensions::STATIC_GetName(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetName");
		
		UMovieSceneBindingExtensions_GetName_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224AB0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UMovieSceneBindingExtensions::STATIC_GetId(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetId");
		
		UMovieSceneBindingExtensions_GetId_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224890
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UMovieSceneBindingExtensions::STATIC_GetDisplayName(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName");
		
		UMovieSceneBindingExtensions_GetDisplayName_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224690
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneBindingExtensions::STATIC_GetChildPossessables(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables");
		
		UMovieSceneBindingExtensions_GetChildPossessables_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224220
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType");
		
		UMovieSceneBindingExtensions_FindTracksByType_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012240F0
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType");
		
		UMovieSceneBindingExtensions_FindTracksByExactType_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223E50
	 * 		Name   -> Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneTrack* UMovieSceneBindingExtensions::STATIC_AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.AddTrack");
		
		UMovieSceneBindingExtensions_AddTrack_Params params {};
		params.InBinding = InBinding;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01224350
	 * 		Name   -> Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneEvent                            EventKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* UMovieSceneEventTrackExtensions::STATIC_GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass");
		
		UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params params {};
		params.EventKey = EventKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012238F0
	 * 		Name   -> Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneEventTrack*                       InTrack                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::STATIC_AddEventTriggerSection(class UMovieSceneEventTrack* InTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection");
		
		UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params params {};
		params.InTrack = InTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223860
	 * 		Name   -> Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneEventTrack*                       InTrack                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::STATIC_AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection");
		
		UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params params {};
		params.InTrack = InTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01226360
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InFolderName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_SetFolderName(class UMovieSceneFolder* Folder, const class FName& InFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName");
		
		UMovieSceneFolderExtensions_SetFolderName_Params params {};
		params.Folder = Folder;
		params.InFolderName = InFolderName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226290
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      InFolderColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor");
		
		UMovieSceneFolderExtensions_SetFolderColor_Params params {};
		params.Folder = Folder;
		params.InFolderColor = InFolderColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225A90
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InObjectBinding                                            (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding");
		
		UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params params {};
		params.Folder = Folder;
		params.InObjectBinding = InObjectBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012259C0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            InMasterTrack                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack");
		
		UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params params {};
		params.Folder = Folder;
		params.InMasterTrack = InMasterTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012258F0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           TargetFolder                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneFolder*                           FolderToRemove                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder");
		
		UMovieSceneFolderExtensions_RemoveChildFolder_Params params {};
		params.TargetFolder = TargetFolder;
		params.FolderToRemove = FolderToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224A20
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieSceneFolderExtensions::STATIC_GetFolderName(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName");
		
		UMovieSceneFolderExtensions_GetFolderName_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224990
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UMovieSceneFolderExtensions::STATIC_GetFolderColor(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor");
		
		UMovieSceneFolderExtensions_GetFolderColor_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012245C0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneFolderExtensions::STATIC_GetChildObjectBindings(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings");
		
		UMovieSceneFolderExtensions_GetChildObjectBindings_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012244F0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::STATIC_GetChildMasterTracks(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks");
		
		UMovieSceneFolderExtensions_GetChildMasterTracks_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224420
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneFolder*> UMovieSceneFolderExtensions::STATIC_GetChildFolders(class UMovieSceneFolder* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders");
		
		UMovieSceneFolderExtensions_GetChildFolders_Params params {};
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223770
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InObjectBinding                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding");
		
		UMovieSceneFolderExtensions_AddChildObjectBinding_Params params {};
		params.Folder = Folder;
		params.InObjectBinding = InObjectBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012236A0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           Folder                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            InMasterTrack                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack");
		
		UMovieSceneFolderExtensions_AddChildMasterTrack_Params params {};
		params.Folder = Folder;
		params.InMasterTrack = InMasterTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012235D0
	 * 		Name   -> Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFolder*                           TargetFolder                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneFolder*                           FolderToAdd                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneFolderExtensions::STATIC_AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder");
		
		UMovieSceneFolderExtensions_AddChildFolder_Params params {};
		params.TargetFolder = TargetFolder;
		params.FolderToAdd = FolderToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x012266D0
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPropertyName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPropertyPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScenePropertyTrackExtensions::STATIC_SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const class FName& InPropertyName, const class FString& InPropertyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath");
		
		UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params params {};
		params.Track = Track;
		params.InPropertyName = InPropertyName;
		params.InPropertyPath = InPropertyPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226520
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneObjectPropertyTrack*              Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PropertyClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScenePropertyTrackExtensions::STATIC_SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass");
		
		UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params params {};
		params.Track = Track;
		params.PropertyClass = PropertyClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225280
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieScenePropertyTrackExtensions::STATIC_GetUniqueTrackName(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName");
		
		UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225030
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMovieScenePropertyTrackExtensions::STATIC_GetPropertyPath(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath");
		
		UMovieScenePropertyTrackExtensions_GetPropertyPath_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224FA0
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieScenePropertyTrack*                    Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMovieScenePropertyTrackExtensions::STATIC_GetPropertyName(class UMovieScenePropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName");
		
		UMovieScenePropertyTrackExtensions_GetPropertyName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224D20
	 * 		Name   -> Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneObjectPropertyTrack*              Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UMovieScenePropertyTrackExtensions::STATIC_GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass");
		
		UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01226A30
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226800
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225310
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue");
		
		UMovieSceneScriptingActorReferenceKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01225E00
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225B80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault");
		
		UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225590
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingActorReferenceChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault");
		
		UMovieSceneScriptingActorReferenceChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys");
		
		UMovieSceneScriptingActorReferenceChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224770
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault");
		
		UMovieSceneScriptingActorReferenceChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223980
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01226BA0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226800
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225410
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingBoolKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue");
		
		UMovieSceneScriptingBoolKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01225F50
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225BE0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingBoolChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault");
		
		UMovieSceneScriptingBoolChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225660
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingBoolChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault");
		
		UMovieSceneScriptingBoolChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224CC0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneScriptingBoolChannel::GetNumKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys");
		
		UMovieSceneScriptingBoolChannel_GetNumKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys");
		
		UMovieSceneScriptingBoolChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224810
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingBoolChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault");
		
		UMovieSceneScriptingBoolChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223F80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223F40
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange");
		
		UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223AF0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01226CA0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226800
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012254D0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char UMovieSceneScriptingByteKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.GetValue");
		
		UMovieSceneScriptingByteKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01226060
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225BE0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingByteChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault");
		
		UMovieSceneScriptingByteChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225660
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingByteChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault");
		
		UMovieSceneScriptingByteChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys");
		
		UMovieSceneScriptingByteChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224810
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char UMovieSceneScriptingByteChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault");
		
		UMovieSceneScriptingByteChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01223C80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x0122FDD0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		double                                             InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue");
		
		UMovieSceneScriptingDoubleKey_SetValue_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122FB80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameNumber                                NewFrameNumber                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime");
		
		UMovieSceneScriptingDoubleKey_SetTime_Params params {};
		params.NewFrameNumber = NewFrameNumber;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122FA40
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERichCurveTangentWeightMode                        InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode");
		
		UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F900
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERichCurveTangentMode                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetTangentMode(ERichCurveTangentMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode");
		
		UMovieSceneScriptingDoubleKey_SetTangentMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F4B0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight");
		
		UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F340
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent");
		
		UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F200
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERichCurveInterpMode                               InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetInterpolationMode(ERichCurveInterpMode InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode");
		
		UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EE10
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight");
		
		UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122ECA0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent");
		
		UMovieSceneScriptingDoubleKey_SetArriveTangent_Params params {};
		params.InNewValue = InNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E720
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	double UMovieSceneScriptingDoubleKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue");
		
		UMovieSceneScriptingDoubleKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneScriptingDoubleKey::GetTime(ESequenceTimeUnit TimeUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime");
		
		UMovieSceneScriptingDoubleKey_GetTime_Params params {};
		params.TimeUnit = TimeUnit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E6B0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveTangentWeightMode UMovieSceneScriptingDoubleKey::GetTangentWeightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode");
		
		UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E640
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveTangentMode UMovieSceneScriptingDoubleKey::GetTangentMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode");
		
		UMovieSceneScriptingDoubleKey_GetTangentMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E310
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight");
		
		UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E290
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingDoubleKey::GetLeaveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent");
		
		UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E220
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveInterpMode UMovieSceneScriptingDoubleKey::GetInterpolationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode");
		
		UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DF80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight");
		
		UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DF00
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingDoubleKey::GetArriveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent");
		
		UMovieSceneScriptingDoubleKey_GetArriveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingDoubleKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingDoubleKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingDoubleKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F790
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERichCurveExtrapolation                            InExtrapolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation");
		
		UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params params {};
		params.InExtrapolation = InExtrapolation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F620
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERichCurveExtrapolation                            InExtrapolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation");
		
		UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params params {};
		params.InExtrapolation = InExtrapolation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EF70
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		double                                             InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault");
		
		UMovieSceneScriptingDoubleChannel_SetDefault_Params params {};
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneScriptingKey*                     Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneScriptingDoubleChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey");
		
		UMovieSceneScriptingDoubleChannel_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EB20
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingDoubleChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault");
		
		UMovieSceneScriptingDoubleChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E940
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingDoubleChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault");
		
		UMovieSceneScriptingDoubleChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E560
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation");
		
		UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E480
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation");
		
		UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E390
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneScriptingDoubleChannel::GetNumKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys");
		
		UMovieSceneScriptingDoubleChannel_GetNumKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys");
		
		UMovieSceneScriptingDoubleChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E000
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	double UMovieSceneScriptingDoubleChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault");
		
		UMovieSceneScriptingDoubleChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DB10
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys");
		
		UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params params {};
		params.Range = Range;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DA90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange");
		
		UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122D320
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameNumber                                InTime                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESequenceTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovieSceneKeyInterpolation                        InInterpolation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey");
		
		UMovieSceneScriptingDoubleChannel_AddKey_Params params {};
		params.InTime = InTime;
		params.NewValue = NewValue;
		params.SubFrame = SubFrame;
		params.TimeUnit = TimeUnit;
		params.InInterpolation = InInterpolation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingDoubleChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingDoubleChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingDoubleChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122FEA0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226800
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E760
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.GetValue");
		
		UMovieSceneScriptingEventKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys");
		
		UMovieSceneScriptingEventChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122D4F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x0122FFD0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122FCB0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122FB00
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F9C0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F590
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F420
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F2C0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EEE0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122ED80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E840
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue");
		
		UMovieSceneScriptingFloatKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E6F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode");
		
		UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E680
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode");
		
		UMovieSceneScriptingFloatKey_GetTangentMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E350
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight");
		
		UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E2D0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatKey::GetLeaveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent");
		
		UMovieSceneScriptingFloatKey_GetLeaveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E260
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode");
		
		UMovieSceneScriptingFloatKey_GetInterpolationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DFC0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatKey::GetArriveTangentWeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight");
		
		UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DF40
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatKey::GetArriveTangent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent");
		
		UMovieSceneScriptingFloatKey_GetArriveTangent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingActualFloatKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingActualFloatKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingActualFloatKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneScriptingDoubleAsFloatKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneScriptingDoubleAsFloatKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F840
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F6D0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122F080
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EBD0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingFloatChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault");
		
		UMovieSceneScriptingFloatChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E9C0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingFloatChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault");
		
		UMovieSceneScriptingFloatChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E5C0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E4E0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation");
		
		UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E3F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneScriptingFloatChannel::GetNumKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys");
		
		UMovieSceneScriptingFloatChannel_GetNumKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys");
		
		UMovieSceneScriptingFloatChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E090
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMovieSceneScriptingFloatChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault");
		
		UMovieSceneScriptingFloatChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DC80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122DAD0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange");
		
		UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122D750
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01230060
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01226800
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E880
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneScriptingIntegerKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue");
		
		UMovieSceneScriptingIntegerKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x0122F100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EBF0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingIntegerChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault");
		
		UMovieSceneScriptingIntegerChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EAA0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingIntegerChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault");
		
		UMovieSceneScriptingIntegerChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys");
		
		UMovieSceneScriptingIntegerChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122E190
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMovieSceneScriptingIntegerChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault");
		
		UMovieSceneScriptingIntegerChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122D910
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01237760
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012374F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012357B0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UMovieSceneScriptingObjectPathKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue");
		
		UMovieSceneScriptingObjectPathKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01236410
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225B80
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault");
		
		UMovieSceneScriptingObjectPathChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012359F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingObjectPathChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault");
		
		UMovieSceneScriptingObjectPathChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys");
		
		UMovieSceneScriptingObjectPathChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234720
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UMovieSceneScriptingObjectPathChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault");
		
		UMovieSceneScriptingObjectPathChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233230
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x012378B0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012374F0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235820
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMovieSceneScriptingStringKey::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.GetValue");
		
		UMovieSceneScriptingStringKey_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225100
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x012364D0
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01225C90
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	 * 		Flags  -> (Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0122EB20
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMovieSceneScriptingStringChannel::RemoveDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault");
		
		UMovieSceneScriptingStringChannel_RemoveDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235A30
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMovieSceneScriptingStringChannel::HasDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault");
		
		UMovieSceneScriptingStringChannel_HasDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224B60
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys");
		
		UMovieSceneScriptingStringChannel_GetKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234750
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMovieSceneScriptingStringChannel::GetDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault");
		
		UMovieSceneScriptingStringChannel_GetDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233390
	 * 		Name   -> Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01237290
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds");
		
		UMovieSceneSectionExtensions_SetStartFrameSeconds_Params params {};
		params.Section = Section;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012371D0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBounded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded");
		
		UMovieSceneSectionExtensions_SetStartFrameBounded_Params params {};
		params.Section = Section;
		params.bIsBounded = bIsBounded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237110
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame");
		
		UMovieSceneSectionExtensions_SetStartFrame_Params params {};
		params.Section = Section;
		params.StartFrame = StartFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236F50
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds");
		
		UMovieSceneSectionExtensions_SetRangeSeconds_Params params {};
		params.Section = Section;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236E50
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRange");
		
		UMovieSceneSectionExtensions_SetRange_Params params {};
		params.Section = Section;
		params.StartFrame = StartFrame;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012368D0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds");
		
		UMovieSceneSectionExtensions_SetEndFrameSeconds_Params params {};
		params.Section = Section;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236810
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBounded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded");
		
		UMovieSceneSectionExtensions_SetEndFrameBounded_Params params {};
		params.Section = Section;
		params.bIsBounded = bIsBounded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236750
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSectionExtensions::STATIC_SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame");
		
		UMovieSceneSectionExtensions_SetEndFrame_Params params {};
		params.Section = Section;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235B70
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSectionExtensions::STATIC_HasStartFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame");
		
		UMovieSceneSectionExtensions_HasStartFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235AE0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSectionExtensions::STATIC_HasEndFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame");
		
		UMovieSceneSectionExtensions_HasEndFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012355F0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSectionExtensions::STATIC_GetStartFrameSeconds(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds");
		
		UMovieSceneSectionExtensions_GetStartFrameSeconds_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235560
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::STATIC_GetStartFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame");
		
		UMovieSceneSectionExtensions_GetStartFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234DD0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSubSection*                       Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InFrame                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSequence*                         ParentSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::STATIC_GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame");
		
		UMovieSceneSectionExtensions_GetParentSequenceFrame_Params params {};
		params.Section = Section;
		params.InFrame = InFrame;
		params.ParentSequence = ParentSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234A30
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSectionExtensions::STATIC_GetEndFrameSeconds(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds");
		
		UMovieSceneSectionExtensions_GetEndFrameSeconds_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012349A0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSectionExtensions::STATIC_GetEndFrame(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame");
		
		UMovieSceneSectionExtensions_GetEndFrame_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233D90
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ChannelType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType");
		
		UMovieSceneSectionExtensions_GetChannelsByType_Params params {};
		params.Section = Section;
		params.ChannelType = ChannelType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012345C0
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetChannels(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetChannels");
		
		UMovieSceneSectionExtensions_GetChannels_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234370
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetAllChannels(class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels");
		
		UMovieSceneSectionExtensions_GetAllChannels_Params params {};
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233D90
	 * 		Name   -> Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ChannelType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType");
		
		UMovieSceneSectionExtensions_FindChannelsByType_Params params {};
		params.Section = Section;
		params.ChannelType = ChannelType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01237AD0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SortMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames");
		
		UMovieSceneSequenceExtensions_SortMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237A10
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTimeInSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart");
		
		UMovieSceneSequenceExtensions_SetWorkRangeStart_Params params {};
		params.InSequence = InSequence;
		params.StartTimeInSeconds = StartTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237A10
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTimeInSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd");
		
		UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params params {};
		params.InSequence = InSequence;
		params.EndTimeInSeconds = EndTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237A10
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTimeInSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart");
		
		UMovieSceneSequenceExtensions_SetViewRangeStart_Params params {};
		params.InSequence = InSequence;
		params.StartTimeInSeconds = StartTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237A10
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTimeInSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd");
		
		UMovieSceneSequenceExtensions_SetViewRangeEnd_Params params {};
		params.InSequence = InSequence;
		params.EndTimeInSeconds = EndTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237420
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  TickResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly");
		
		UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params params {};
		params.Sequence = Sequence;
		params.TickResolution = TickResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237350
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  TickResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution");
		
		UMovieSceneSequenceExtensions_SetTickResolution_Params params {};
		params.Sequence = Sequence;
		params.TickResolution = TickResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01237050
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInReadOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly");
		
		UMovieSceneSequenceExtensions_SetReadOnly_Params params {};
		params.Sequence = Sequence;
		params.bInReadOnly = bInReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236D90
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds");
		
		UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params params {};
		params.Sequence = Sequence;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236CD0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart");
		
		UMovieSceneSequenceExtensions_SetPlaybackStart_Params params {};
		params.Sequence = Sequence;
		params.StartFrame = StartFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236C10
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds");
		
		UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params params {};
		params.Sequence = Sequence;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236B50
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndFrame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd");
		
		UMovieSceneSequenceExtensions_SetPlaybackEnd_Params params {};
		params.Sequence = Sequence;
		params.EndFrame = EndFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236A50
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMarkIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame");
		
		UMovieSceneSequenceExtensions_SetMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InMarkIndex = InMarkIndex;
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236990
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovieSceneEvaluationType                          InEvaluationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType");
		
		UMovieSceneSequenceExtensions_SetEvaluationType_Params params {};
		params.InSequence = InSequence;
		params.InEvaluationType = InEvaluationType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236680
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  DisplayRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate");
		
		UMovieSceneSequenceExtensions_SetDisplayRate_Params params {};
		params.Sequence = Sequence;
		params.DisplayRate = DisplayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236350
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateClockSource                                 InClockSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource");
		
		UMovieSceneSequenceExtensions_SetClockSource_Params params {};
		params.InSequence = InSequence;
		params.InClockSource = InClockSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236230
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneObjectBindingID                  InObjectBindingID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID");
		
		UMovieSceneSequenceExtensions_ResolveBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.InObjectBindingID = InObjectBindingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236160
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneTrack*                            MasterTrack                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequenceExtensions::STATIC_RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack");
		
		UMovieSceneSequenceExtensions_RemoveMasterTrack_Params params {};
		params.Sequence = Sequence;
		params.MasterTrack = MasterTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01236050
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds");
		
		UMovieSceneSequenceExtensions_MakeRangeSeconds_Params params {};
		params.Sequence = Sequence;
		params.StartTime = StartTime;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235F40
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange");
		
		UMovieSceneSequenceExtensions_MakeRange_Params params {};
		params.Sequence = Sequence;
		params.StartFrame = StartFrame;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235E00
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMovieSceneObjectBindingSpace                      Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID");
		
		UMovieSceneSequenceExtensions_MakeBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.InBinding = InBinding;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235C90
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UMovieSceneSequenceExtensions::STATIC_LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects");
		
		UMovieSceneSequenceExtensions_LocateBoundObjects_Params params {};
		params.Sequence = Sequence;
		params.InBinding = InBinding;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235C00
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequenceExtensions::STATIC_IsReadOnly(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly");
		
		UMovieSceneSequenceExtensions_IsReadOnly_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235960
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetWorkRangeStart(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart");
		
		UMovieSceneSequenceExtensions_GetWorkRangeStart_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235960
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetWorkRangeEnd(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd");
		
		UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235960
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetViewRangeStart(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart");
		
		UMovieSceneSequenceExtensions_GetViewRangeStart_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235960
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetViewRangeEnd(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd");
		
		UMovieSceneSequenceExtensions_GetViewRangeEnd_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235710
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimecode UMovieSceneSequenceExtensions::STATIC_GetTimecodeSource(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource");
		
		UMovieSceneSequenceExtensions_GetTimecodeSource_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235680
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UMovieSceneSequenceExtensions::STATIC_GetTickResolution(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution");
		
		UMovieSceneSequenceExtensions_GetTickResolution_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235490
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetSpawnables(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables");
		
		UMovieSceneSequenceExtensions_GetSpawnables_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012353C0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneFolder*> UMovieSceneSequenceExtensions::STATIC_GetRootFoldersInSequence(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence");
		
		UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012352F0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetPossessables(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables");
		
		UMovieSceneSequenceExtensions_GetPossessables_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012351B0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         MasterSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSequence*                         DestinationSequence                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID");
		
		UMovieSceneSequenceExtensions_GetPortableBindingID_Params params {};
		params.MasterSequence = MasterSequence;
		params.DestinationSequence = DestinationSequence;
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235120
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds");
		
		UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01235090
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_GetPlaybackStart(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart");
		
		UMovieSceneSequenceExtensions_GetPlaybackStart_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234FF0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_GetPlaybackRange(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange");
		
		UMovieSceneSequenceExtensions_GetPlaybackRange_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234F60
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneSequenceExtensions::STATIC_GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds");
		
		UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234ED0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_GetPlaybackEnd(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd");
		
		UMovieSceneSequenceExtensions_GetPlaybackEnd_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234D40
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieScene* UMovieSceneSequenceExtensions::STATIC_GetMovieScene(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene");
		
		UMovieSceneSequenceExtensions_GetMovieScene_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234C70
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_GetMasterTracks(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks");
		
		UMovieSceneSequenceExtensions_GetMasterTracks_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234B50
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::STATIC_GetMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames");
		
		UMovieSceneSequenceExtensions_GetMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234AC0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMovieSceneEvaluationType UMovieSceneSequenceExtensions::STATIC_GetEvaluationType(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType");
		
		UMovieSceneSequenceExtensions_GetEvaluationType_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234910
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UMovieSceneSequenceExtensions::STATIC_GetDisplayRate(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate");
		
		UMovieSceneSequenceExtensions_GetDisplayRate_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234690
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUpdateClockSource UMovieSceneSequenceExtensions::STATIC_GetClockSource(class UMovieSceneSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource");
		
		UMovieSceneSequenceExtensions_GetClockSource_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012344F0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetBindings(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings");
		
		UMovieSceneSequenceExtensions_GetBindings_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234440
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerBindingProxy                      InBinding                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_GetBindingID(const struct FSequencerBindingProxy& InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID");
		
		UMovieSceneSequenceExtensions_GetBindingID_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234270
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForward                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame");
		
		UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InFrameNumber = InFrameNumber;
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234160
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType");
		
		UMovieSceneSequenceExtensions_FindMasterTracksByType_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01234050
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType");
		
		UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233F70
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel");
		
		UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params params {};
		params.Sequence = Sequence;
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233EA0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InFrameNumber                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber");
		
		UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params params {};
		params.Sequence = Sequence;
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233C50
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName");
		
		UMovieSceneSequenceExtensions_FindBindingByName_Params params {};
		params.Sequence = Sequence;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233B60
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       BindingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById");
		
		UMovieSceneSequenceExtensions_FindBindingById_Params params {};
		params.Sequence = Sequence;
		params.BindingID = BindingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233AE0
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_DeleteMarkedFrames(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames");
		
		UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233A20
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeleteIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequenceExtensions::STATIC_DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame");
		
		UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.DeleteIndex = DeleteIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233940
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToSpawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance");
		
		UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params params {};
		params.Sequence = Sequence;
		params.ObjectToSpawn = ObjectToSpawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233940
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass");
		
		UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params params {};
		params.Sequence = Sequence;
		params.ClassToSpawn = ClassToSpawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233810
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewFolderName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneFolder* UMovieSceneSequenceExtensions::STATIC_AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence");
		
		UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params params {};
		params.Sequence = Sequence;
		params.NewFolderName = NewFolderName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233730
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable");
		
		UMovieSceneSequenceExtensions_AddPossessable_Params params {};
		params.Sequence = Sequence;
		params.ObjectToPossess = ObjectToPossess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233660
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneTrack* UMovieSceneSequenceExtensions::STATIC_AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack");
		
		UMovieSceneSequenceExtensions_AddMasterTrack_Params params {};
		params.Sequence = Sequence;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01233560
	 * 		Name   -> Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneMarkedFrame                      InMarkedFrame                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneSequenceExtensions::STATIC_AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame");
		
		UMovieSceneSequenceExtensions_AddMarkedFrame_Params params {};
		params.Sequence = Sequence;
		params.InMarkedFrame = InMarkedFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01239960
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        InName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RowIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_SetTrackRowDisplayName(class UMovieSceneTrack* Track, const class FText& InName, int32_t RowIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName");
		
		UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params params {};
		params.Track = Track;
		params.InName = InName;
		params.RowIndex = RowIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012396D0
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SortingOrder                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder");
		
		UMovieSceneTrackExtensions_SetSortingOrder_Params params {};
		params.Track = Track;
		params.SortingOrder = SortingOrder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239610
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey");
		
		UMovieSceneTrackExtensions_SetSectionToKey_Params params {};
		params.Track = Track;
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239270
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        InName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_SetDisplayName(class UMovieSceneTrack* Track, const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName");
		
		UMovieSceneTrackExtensions_SetDisplayName_Params params {};
		params.Track = Track;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012391B0
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      ColorTint                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint");
		
		UMovieSceneTrackExtensions_SetColorTint_Params params {};
		params.Track = Track;
		params.ColorTint = ColorTint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239060
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMovieSceneSection*                          Section                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneTrackExtensions::STATIC_RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection");
		
		UMovieSceneTrackExtensions_RemoveSection_Params params {};
		params.Track = Track;
		params.Section = Section;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238D60
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RowIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMovieSceneTrackExtensions::STATIC_GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName");
		
		UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params params {};
		params.Track = Track;
		params.RowIndex = RowIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238B90
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneTrackExtensions::STATIC_GetSortingOrder(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder");
		
		UMovieSceneTrackExtensions_GetSortingOrder_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238A30
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneSection* UMovieSceneTrackExtensions::STATIC_GetSectionToKey(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey");
		
		UMovieSceneTrackExtensions_GetSectionToKey_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238AC0
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetSections
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UMovieSceneSection*> UMovieSceneTrackExtensions::STATIC_GetSections(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSections");
		
		UMovieSceneTrackExtensions_GetSections_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238770
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMovieSceneTrackExtensions::STATIC_GetDisplayName(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName");
		
		UMovieSceneTrackExtensions_GetDisplayName_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01224990
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UMovieSceneTrackExtensions::STATIC_GetColorTint(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint");
		
		UMovieSceneTrackExtensions_GetColorTint_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012386E0
	 * 		Name   -> Function SequencerScripting.MovieSceneTrackExtensions.AddSection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneTrack*                            Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneSection* UMovieSceneTrackExtensions::STATIC_AddSection(class UMovieSceneTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.AddSection");
		
		UMovieSceneTrackExtensions_AddSection_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x01239550
	 * 		Name   -> Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFloatVectorTrack*                 Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumChannelsUsed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneFloatVectorTrackExtensions::STATIC_SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed");
		
		UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params params {};
		params.Track = Track;
		params.InNumChannelsUsed = InNumChannelsUsed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012389A0
	 * 		Name   -> Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneFloatVectorTrack*                 Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneFloatVectorTrackExtensions::STATIC_GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed");
		
		UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFloatVectorTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatVectorTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneFloatVectorTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239550
	 * 		Name   -> Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneDoubleVectorTrack*                Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumChannelsUsed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneDoubleVectorTrackExtensions::STATIC_SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed");
		
		UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params params {};
		params.Track = Track;
		params.InNumChannelsUsed = InNumChannelsUsed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012389A0
	 * 		Name   -> Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMovieSceneDoubleVectorTrack*                Track                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneDoubleVectorTrackExtensions::STATIC_GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed");
		
		UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params params {};
		params.Track = Track;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneDoubleVectorTrackExtensions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneDoubleVectorTrackExtensions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239870
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_SetStartSeconds(struct FSequencerScriptingRange* Range, float Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds");
		
		USequencerScriptingRangeExtensions_SetStartSeconds_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239790
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_SetStartFrame(struct FSequencerScriptingRange* Range, int32_t Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame");
		
		USequencerScriptingRangeExtensions_SetStartFrame_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239460
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_SetEndSeconds(struct FSequencerScriptingRange* Range, float End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds");
		
		USequencerScriptingRangeExtensions_SetEndSeconds_Params params {};
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239380
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_SetEndFrame(struct FSequencerScriptingRange* Range, int32_t End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame");
		
		USequencerScriptingRangeExtensions_SetEndFrame_Params params {};
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01239120
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_RemoveStart(struct FSequencerScriptingRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart");
		
		USequencerScriptingRangeExtensions_RemoveStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238FD0
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USequencerScriptingRangeExtensions::STATIC_RemoveEnd(struct FSequencerScriptingRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd");
		
		USequencerScriptingRangeExtensions_RemoveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238F30
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencerScriptingRangeExtensions::STATIC_HasStart(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart");
		
		USequencerScriptingRangeExtensions_HasStart_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238E90
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencerScriptingRangeExtensions::STATIC_HasEnd(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd");
		
		USequencerScriptingRangeExtensions_HasEnd_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238CC0
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencerScriptingRangeExtensions::STATIC_GetStartSeconds(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds");
		
		USequencerScriptingRangeExtensions_GetStartSeconds_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238C20
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t USequencerScriptingRangeExtensions::STATIC_GetStartFrame(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame");
		
		USequencerScriptingRangeExtensions_GetStartFrame_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238900
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencerScriptingRangeExtensions::STATIC_GetEndSeconds(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds");
		
		USequencerScriptingRangeExtensions_GetEndSeconds_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01238860
	 * 		Name   -> Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencerScriptingRange                    Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t USequencerScriptingRangeExtensions::STATIC_GetEndFrame(const struct FSequencerScriptingRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame");
		
		USequencerScriptingRangeExtensions_GetEndFrame_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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


