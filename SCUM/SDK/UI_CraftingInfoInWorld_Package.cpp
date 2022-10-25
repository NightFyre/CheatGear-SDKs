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
	 * 		Name   -> Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       itemCDO                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInfoInWorld_C::Init(class AItem* itemCDO)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init");
		
		UUI_CraftingInfoInWorld_C_Init_Params params {};
		params.itemCDO = itemCDO;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Caption                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CraftingInfoInWorld_C::SetCaptionAndDescription(const class FText& Caption, const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription");
		
		UUI_CraftingInfoInWorld_C_SetCaptionAndDescription_Params params {};
		params.Caption = Caption;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingInfoInWorld_C::ExecuteUbergraph_UI_CraftingInfoInWorld(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld");
		
		UUI_CraftingInfoInWorld_C_ExecuteUbergraph_UI_CraftingInfoInWorld_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingInfoInWorld_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingInfoInWorld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C");
		return ptr;
	}

}


