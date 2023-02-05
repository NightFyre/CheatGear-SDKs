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
	 * 		Name   -> Function WB_ItemTooltipSellCostSlot.WB_ItemTooltipSellCostSlot_C.OnSetMerchantCostData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ItemIconTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipSellCostSlot_C::OnSetMerchantCostData(class UTexture2D* ItemIconTexture, int32_t ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipSellCostSlot.WB_ItemTooltipSellCostSlot_C.OnSetMerchantCostData");
		
		UWB_ItemTooltipSellCostSlot_C_OnSetMerchantCostData_Params params {};
		params.ItemIconTexture = ItemIconTexture;
		params.ItemAmount = ItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ItemTooltipSellCostSlot.WB_ItemTooltipSellCostSlot_C.ExecuteUbergraph_WB_ItemTooltipSellCostSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ItemTooltipSellCostSlot_C::ExecuteUbergraph_WB_ItemTooltipSellCostSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemTooltipSellCostSlot.WB_ItemTooltipSellCostSlot_C.ExecuteUbergraph_WB_ItemTooltipSellCostSlot");
		
		UWB_ItemTooltipSellCostSlot_C_ExecuteUbergraph_WB_ItemTooltipSellCostSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemTooltipSellCostSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemTooltipSellCostSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemTooltipSellCostSlot.WB_ItemTooltipSellCostSlot_C");
		return ptr;
	}

}


