/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.AddEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FPrimaryAssetId>                     ItemAssetIdList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_Heltmet_Customisation_C::AddEntry(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.AddEntry");
		
		UWBP_Heltmet_Customisation_C_AddEntry_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemAssetIdList != nullptr)
			*ItemAssetIdList = params.ItemAssetIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Heltmet_Customisation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.Construct");
		
		UWBP_Heltmet_Customisation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.ExecuteUbergraph_WBP_Heltmet_Customisation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Heltmet_Customisation_C::ExecuteUbergraph_WBP_Heltmet_Customisation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C.ExecuteUbergraph_WBP_Heltmet_Customisation");
		
		UWBP_Heltmet_Customisation_C_ExecuteUbergraph_WBP_Heltmet_Customisation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Heltmet_Customisation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Heltmet_Customisation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C");
		return ptr;
	}

}


