/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction UDefaultLevelSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultLevelSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F3F0
	 * 		Name   -> Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");
		
		ULevelSequence_RemoveMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6ED70
	 * 		Name   -> Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");
		
		ULevelSequence_FindOrAddMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6ED70
	 * 		Name   -> Function LevelSequence.LevelSequence.FindMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");
		
		ULevelSequence_FindMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6ED70
	 * 		Name   -> Function LevelSequence.LevelSequence.CopyMetaData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InMetaData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");
		
		ULevelSequence_CopyMetaData_Params params {};
		params.InMetaData = InMetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnInInitSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInInitSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F7B0
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoftClassPath                              InBurnInClass                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");
		
		ULevelSequenceBurnInOptions_SetBurnIn_Params params {};
		params.InBurnInClass = InBurnInClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnInOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6FAF0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ShowBurnin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::ShowBurnin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");
		
		ALevelSequenceActor_ShowBurnin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6FA70
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelSequence*                              InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");
		
		ALevelSequenceActor_SetSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F9E0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ReplicatePlayback                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");
		
		ALevelSequenceActor_SetReplicatePlayback_Params params {};
		params.ReplicatePlayback = ReplicatePlayback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F8A0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              AdditionalReceivers                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");
		
		ALevelSequenceActor_SetEventReceivers_Params params {};
		params.AdditionalReceivers = AdditionalReceivers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F680
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetBindingByTag
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BindingTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetBindingByTag(const class FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");
		
		ALevelSequenceActor_SetBindingByTag_Params params {};
		params.BindingTag = BindingTag;
		params.Actors = Actors;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F530
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetBinding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");
		
		ALevelSequenceActor_SetBinding_Params params {};
		params.Binding = Binding;
		params.Actors = Actors;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F510
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::ResetBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");
		
		ALevelSequenceActor_ResetBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F460
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");
		
		ALevelSequenceActor_ResetBinding_Params params {};
		params.Binding = Binding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F330
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::RemoveBindingByTag(const class FName& Tag, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");
		
		ALevelSequenceActor_RemoveBindingByTag_Params params {};
		params.Tag = Tag;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F240
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.RemoveBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");
		
		ALevelSequenceActor_RemoveBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");
		
		ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F1D0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.LoadSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequence* ALevelSequenceActor::LoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");
		
		ALevelSequenceActor_LoadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F1B0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.HideBurnin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::HideBurnin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");
		
		ALevelSequenceActor_HideBurnin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F160
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");
		
		ALevelSequenceActor_GetSequencePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F130
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequence* ALevelSequenceActor::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");
		
		ALevelSequenceActor_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F010
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.FindNamedBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");
		
		ALevelSequenceActor_FindNamedBindings_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6EF60
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.FindNamedBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");
		
		ALevelSequenceActor_FindNamedBinding_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6EC60
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.AddBindingByTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BindingTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::AddBindingByTag(const class FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");
		
		ALevelSequenceActor_AddBindingByTag_Params params {};
		params.BindingTag = BindingTag;
		params.Actor = Actor;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6EB20
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.AddBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");
		
		ALevelSequenceActor_AddBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InSettings                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");
		
		ULevelSequenceBurnIn_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F190
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* ULevelSequenceBurnIn::GetSettingsClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");
		
		ULevelSequenceBurnIn_GetSettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnIn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnIn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function LevelSequence.LevelSequenceDirector.OnCreated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULevelSequenceDirector::OnCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");
		
		ULevelSequenceDirector_OnCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegacyLevelSequenceDirectorBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyLevelSequenceDirectorBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F0F0
	 * 		Name   -> Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");
		
		ULevelSequencePlayer_GetActiveCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6EDF0
	 * 		Name   -> Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ALevelSequenceActor*                         OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");
		
		ULevelSequencePlayer_CreateLevelSequencePlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelSequence = LevelSequence;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6FB10
	 * 		Name   -> Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DesyncThresholdSeconds                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer");
		
		ALevelSequenceMediaController_SynchronizeToServer_Params params {};
		params.DesyncThresholdSeconds = DesyncThresholdSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F220
	 * 		Name   -> Function LevelSequence.LevelSequenceMediaController.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceMediaController::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.Play");
		
		ALevelSequenceMediaController_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F6F200
	 * 		Name   -> Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds");
		
		ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE160
	 * 		Name   -> Function LevelSequence.LevelSequenceMediaController.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetSequence");
		
		ALevelSequenceMediaController_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006BE140
	 * 		Name   -> Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent");
		
		ALevelSequenceMediaController_GetMediaComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALevelSequenceMediaController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelSequenceMediaController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMediaController");
		return ptr;
	}

}


