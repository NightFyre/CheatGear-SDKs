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
	 * 		Name   -> PredefinedFunction UChecklistActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChecklistActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverBootyChecklistActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverBootyChecklistActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.DeliverBootyChecklistActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillActorChecklistActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillActorChecklistActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.KillActorChecklistActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0397B5C0
	 * 		Name   -> Function ChecklistMaps.NamedChecklistEventActionData.EventsSource
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UNamedChecklistEventActionData::EventsSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChecklistMaps.NamedChecklistEventActionData.EventsSource");
		
		UNamedChecklistEventActionData_EventsSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNamedChecklistEventActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedChecklistEventActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.NamedChecklistEventActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCInteractionChecklistActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCInteractionChecklistActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.NPCInteractionChecklistActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChecklistItemsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChecklistItemsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistItemsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0397B890
	 * 		Name   -> Function ChecklistMaps.ChecklistMap.RefreshContents
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	void AChecklistMap::RefreshContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChecklistMaps.ChecklistMap.RefreshContents");
		
		AChecklistMap_RefreshContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0397B790
	 * 		Name   -> Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChecklistMap::OnTextCanvasUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChecklistMaps.ChecklistMap.OnTextCanvasUpdate");
		
		AChecklistMap_OnTextCanvasUpdate_Params params {};
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
	 * 		RVA    -> 0x0397B6D0
	 * 		Name   -> Function ChecklistMaps.ChecklistMap.OnRep_Contents
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FChecklistMapContents                       InPreviousContents                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AChecklistMap::OnRep_Contents(const struct FChecklistMapContents& InPreviousContents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChecklistMaps.ChecklistMap.OnRep_Contents");
		
		AChecklistMap_OnRep_Contents_Params params {};
		params.InPreviousContents = InPreviousContents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChecklistMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChecklistMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChecklistMapCollectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChecklistMapCollectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistMapCollectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChecklistMapCompletionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChecklistMapCompletionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistMapCompletionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChecklistMapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChecklistMapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChecklistMaps.ChecklistMapSettings");
		return ptr;
	}

}


