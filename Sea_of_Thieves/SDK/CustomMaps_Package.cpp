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
	 * 		Name   -> PredefinedFunction UCustomMapDisplayObjectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDisplayObjectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDisplayObjectBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040C1900
	 * 		Name   -> Function CustomMaps.CustomMap.OnRep_FontUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACustomMap::OnRep_FontUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMaps.CustomMap.OnRep_FontUpdated");
		
		ACustomMap_OnRep_FontUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040C18E0
	 * 		Name   -> Function CustomMaps.CustomMap.OnRep_DisplayItem
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACustomMap::OnRep_DisplayItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMaps.CustomMap.OnRep_DisplayItem");
		
		ACustomMap_OnRep_DisplayItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040C17E0
	 * 		Name   -> Function CustomMaps.CustomMap.OnMapItemsUpdate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCanvas*                                     Canvas                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomMap::OnMapItemsUpdate(class UCanvas* Canvas, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMaps.CustomMap.OnMapItemsUpdate");
		
		ACustomMap_OnMapItemsUpdate_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapCollectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapCollectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapCollectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapDataTypeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDataTypeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDataTypeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapDataTypePositional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDataTypePositional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDataTypePositional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapDisplayObjectPositional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDisplayObjectPositional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDisplayObjectPositional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapDisplayObjectText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDisplayObjectText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDisplayObjectText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapDataTypeText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapDataTypeText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapDataTypeText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMaps.CustomMapSettings");
		return ptr;
	}

}


