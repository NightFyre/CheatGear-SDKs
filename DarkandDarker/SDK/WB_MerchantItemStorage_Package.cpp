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
	 * 		Name   -> Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.OnActiveSellBackService
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWB_ItemTooltip_C*                           ItemTooltip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantItemStorage_C::OnActiveSellBackService(class UWB_ItemTooltip_C* ItemTooltip, bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.OnActiveSellBackService");
		
		UWB_MerchantItemStorage_C_OnActiveSellBackService_Params params {};
		params.ItemTooltip = ItemTooltip;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_MerchantItemStorage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.Construct");
		
		UWB_MerchantItemStorage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.ExecuteUbergraph_WB_MerchantItemStorage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_MerchantItemStorage_C::ExecuteUbergraph_WB_MerchantItemStorage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.ExecuteUbergraph_WB_MerchantItemStorage");
		
		UWB_MerchantItemStorage_C_ExecuteUbergraph_WB_MerchantItemStorage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_MerchantItemStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_MerchantItemStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_MerchantItemStorage.WB_MerchantItemStorage_C");
		return ptr;
	}

}


