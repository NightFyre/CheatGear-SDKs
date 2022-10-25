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
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItemBySlotNum
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::SelectItemBySlotNum(int32_t SlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItemBySlotNum");
		
		UWBP_HUDElement_EquipmentSelect_C_SelectItemBySlotNum_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetSelectedItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFEqpSlotData                               OutSlotData                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFoundItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::GetSelectedItem(struct FFEqpSlotData* OutSlotData, bool* bFoundItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetSelectedItem");
		
		UWBP_HUDElement_EquipmentSelect_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSlotData != nullptr)
			*OutSlotData = params.OutSlotData;
		if (bFoundItem != nullptr)
			*bFoundItem = params.bFoundItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetMinSlotIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FFEqpSlotData>                       SlotDataArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            MinSlotIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::GetMinSlotIndex(TArray<struct FFEqpSlotData>* SlotDataArray, int32_t* MinSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetMinSlotIndex");
		
		UWBP_HUDElement_EquipmentSelect_C_GetMinSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotDataArray != nullptr)
			*SlotDataArray = params.SlotDataArray;
		if (MinSlotIndex != nullptr)
			*MinSlotIndex = params.MinSlotIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.CreateAndAddEquipmentWidget
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AHDBaseWeapon*                               EqpItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::CreateAndAddEquipmentWidget(class UTexture2D* Icon, int32_t SlotNum, bool bEnabled, class AHDBaseWeapon* EqpItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.CreateAndAddEquipmentWidget");
		
		UWBP_HUDElement_EquipmentSelect_C_CreateAndAddEquipmentWidget_Params params {};
		params.Icon = Icon;
		params.SlotNum = SlotNum;
		params.bEnabled = bEnabled;
		params.EqpItem = EqpItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ClearEquipmentList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::ClearEquipmentList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ClearEquipmentList");
		
		UWBP_HUDElement_EquipmentSelect_C_ClearEquipmentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RemoveEquipmentAtSlotNum
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemoved                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::RemoveEquipmentAtSlotNum(int32_t SlotNum, bool* bRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RemoveEquipmentAtSlotNum");
		
		UWBP_HUDElement_EquipmentSelect_C_RemoveEquipmentAtSlotNum_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRemoved != nullptr)
			*bRemoved = params.bRemoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RebuildEquipmentList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::RebuildEquipmentList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RebuildEquipmentList");
		
		UWBP_HUDElement_EquipmentSelect_C_RebuildEquipmentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.AddEquipment
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHDItemEntry                                EqpInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AHDBaseWeapon*                               EqpItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::AddEquipment(struct FHDItemEntry* EqpInfo, class AHDBaseWeapon* EqpItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.AddEquipment");
		
		UWBP_HUDElement_EquipmentSelect_C_AddEquipment_Params params {};
		params.EqpItem = EqpItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EqpInfo != nullptr)
			*EqpInfo = params.EqpInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSlotIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::SelectItem(int32_t NewSlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItem");
		
		UWBP_HUDElement_EquipmentSelect_C_SelectItem_Params params {};
		params.NewSlotIndex = NewSlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectPrevItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::SelectPrevItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectPrevItem");
		
		UWBP_HUDElement_EquipmentSelect_C_SelectPrevItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectNextItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::SelectNextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectNextItem");
		
		UWBP_HUDElement_EquipmentSelect_C_SelectNextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64");
		
		UWBP_HUDElement_EquipmentSelect_C_OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.PreConstruct");
		
		UWBP_HUDElement_EquipmentSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.LoadEquipmentAsset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDBaseWeapon*                               EqpItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::LoadEquipmentAsset(int32_t SlotNum, class AHDBaseWeapon* EqpItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.LoadEquipmentAsset");
		
		UWBP_HUDElement_EquipmentSelect_C_LoadEquipmentAsset_Params params {};
		params.SlotNum = SlotNum;
		params.EqpItem = EqpItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnEquipmentListModified
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::OnEquipmentListModified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnEquipmentListModified");
		
		UWBP_HUDElement_EquipmentSelect_C_OnEquipmentListModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ExecuteUbergraph_WBP_HUDElement_EquipmentSelect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_EquipmentSelect_C::ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ExecuteUbergraph_WBP_HUDElement_EquipmentSelect");
		
		UWBP_HUDElement_EquipmentSelect_C_ExecuteUbergraph_WBP_HUDElement_EquipmentSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_EquipmentSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_EquipmentSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C");
		return ptr;
	}

}


