/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UHasPlayerMysteriousNotesRadialContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasPlayerMysteriousNotesRadialContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookingAtMysteriousNoteInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookingAtMysteriousNoteInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.LookingAtMysteriousNoteInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMysteriousNoteDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMysteriousNoteDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNoteDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMysteriousNotesCompletionEventsModelDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMysteriousNotesCompletionEventsModelDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMysteriousNoteSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMysteriousNoteSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNoteSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMysteriousNotesServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMysteriousNotesServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldableMysteriousNoteLayout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldableMysteriousNoteLayout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNoteLayout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldableMysteriousNoteDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldableMysteriousNoteDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNoteDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMysteriousNotesService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMysteriousNotesService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMysteriousNoteInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMysteriousNoteInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.PlayerMysteriousNoteInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4730
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
	 * 		Flags  -> (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		bool                                               InCinematicSkipped                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerMysteriousNoteComponent::TriggerNotesReceivedPopup(bool InCinematicSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup");
		
		UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params params {};
		params.InCinematicSkipped = InCinematicSkipped;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4630
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InCompletionID                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const class FName& InCompletionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived");
		
		UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params params {};
		params.InPlayerController = InPlayerController;
		params.InCompletionID = InCompletionID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4530
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       NoteId                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead");
		
		UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params params {};
		params.InPlayerController = InPlayerController;
		params.NoteId = NoteId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4430
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class APlayerController*                           InPlayerController                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       NoteId                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UPlayerMysteriousNoteComponent::Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted");
		
		UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params params {};
		params.InPlayerController = InPlayerController;
		params.NoteId = NoteId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA42F0
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void UPlayerMysteriousNoteComponent::OnRep_NoteData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData");
		
		UPlayerMysteriousNoteComponent_OnRep_NoteData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA42D0
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void UPlayerMysteriousNoteComponent::OnRep_BeenPossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed");
		
		UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4230
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes
	 * 		Flags  -> (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<struct FNotesRemoteServiceNoteDetailModel>  InNotes                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void UPlayerMysteriousNoteComponent::CustomServerUpdateDetailNotes(TArray<struct FNotesRemoteServiceNoteDetailModel> InNotes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes");
		
		UPlayerMysteriousNoteComponent_CustomServerUpdateDetailNotes_Params params {};
		params.InNotes = InNotes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4050
	 * 		Name   -> Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
	 * 		Flags  -> (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class FString                                      NoteType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NoteTitle                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NoteBody                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              CompletionStrings                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void UPlayerMysteriousNoteComponent::AddFakeNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, TArray<class FString> CompletionStrings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote");
		
		UPlayerMysteriousNoteComponent_AddFakeNote_Params params {};
		params.NoteType = NoteType;
		params.NoteTitle = NoteTitle;
		params.NoteBody = NoteBody;
		params.CompletionStrings = CompletionStrings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMysteriousNoteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMysteriousNoteComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.PlayerMysteriousNoteComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4330
	 * 		Name   -> Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWieldableMysteriousNote::OnTextCanvasUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate");
		
		AWieldableMysteriousNote_OnTextCanvasUpdate_Params params {};
		params.Canvas = Canvas;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03CA4310
	 * 		Name   -> Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void AWieldableMysteriousNote::OnRep_NoteLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout");
		
		AWieldableMysteriousNote_OnRep_NoteLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWieldableMysteriousNote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWieldableMysteriousNote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNote");
		return ptr;
	}

}


