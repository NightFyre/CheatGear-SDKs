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
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.GetItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             NewParam                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantGoleItemSlot_C::GetItem(struct FPrimaryAssetId* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.GetItem");
		
		UWB_MerchantGoleItemSlot_C_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnRemoveItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_MerchantGoleItemSlot_C::OnRemoveItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnRemoveItem");
		
		UWB_MerchantGoleItemSlot_C_OnRemoveItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnSetItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UItemWidget*                                 ItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantGoleItemSlot_C::OnSetItem(class UItemWidget* ItemWidget, int32_t ItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnSetItem");
		
		UWB_MerchantGoleItemSlot_C_OnSetItem_Params params {};
		params.ItemWidget = ItemWidget;
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MerchantGoleItemSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MerchantGoleItemSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C");
		return ptr;
	}

}


