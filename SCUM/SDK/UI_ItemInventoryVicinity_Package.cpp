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
	 * 		Name   -> Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemInventoryVicinity_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick");
		
		UUI_ItemInventoryVicinity_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint
	 * 		Flags  -> ()
	 */
	void UUI_ItemInventoryVicinity_C::InitBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint");
		
		UUI_ItemInventoryVicinity_C_InitBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprintFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemInventoryVicinity_C::InitBlueprintFromItem(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprintFromItem");
		
		UUI_ItemInventoryVicinity_C_InitBlueprintFromItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink
	 * 		Flags  -> ()
	 */
	void UUI_ItemInventoryVicinity_C::Blink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink");
		
		UUI_ItemInventoryVicinity_C_Blink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemInventoryVicinity_C::ExecuteUbergraph_UI_ItemInventoryVicinity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity");
		
		UUI_ItemInventoryVicinity_C_ExecuteUbergraph_UI_ItemInventoryVicinity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemInventoryVicinity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemInventoryVicinity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C");
		return ptr;
	}

}


