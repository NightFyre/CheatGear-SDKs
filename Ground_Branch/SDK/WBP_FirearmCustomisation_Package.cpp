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
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.DetermineValidRailAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FirearmCustomisation_C::DetermineValidRailAttachments(class AActor* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.DetermineValidRailAttachments");
		
		UWBP_FirearmCustomisation_C_DetermineValidRailAttachments_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GetRiserWarningVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_FirearmCustomisation_C::GetRiserWarningVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GetRiserWarningVis");
		
		UWBP_FirearmCustomisation_C_GetRiserWarningVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FPrimaryAssetId>                     ItemAssetIdList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_FirearmCustomisation_C::AddEntries(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddEntries");
		
		UWBP_FirearmCustomisation_C_AddEntries_Params params {};
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
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.Construct");
		
		UWBP_FirearmCustomisation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddSights
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::AddSights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddSights");
		
		UWBP_FirearmCustomisation_C_AddSights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddRailAdapter
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::AddRailAdapter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddRailAdapter");
		
		UWBP_FirearmCustomisation_C_AddRailAdapter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GenerateRailAttachmentLists
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::GenerateRailAttachmentLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.GenerateRailAttachmentLists");
		
		UWBP_FirearmCustomisation_C_GenerateRailAttachmentLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMuzzleDevices
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::AddMuzzleDevices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMuzzleDevices");
		
		UWBP_FirearmCustomisation_C_AddMuzzleDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMagazines
	 * 		Flags  -> ()
	 */
	void UWBP_FirearmCustomisation_C::AddMagazines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.AddMagazines");
		
		UWBP_FirearmCustomisation_C_AddMagazines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.ExecuteUbergraph_WBP_FirearmCustomisation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FirearmCustomisation_C::ExecuteUbergraph_WBP_FirearmCustomisation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FirearmCustomisation.WBP_FirearmCustomisation_C.ExecuteUbergraph_WBP_FirearmCustomisation");
		
		UWBP_FirearmCustomisation_C_ExecuteUbergraph_WBP_FirearmCustomisation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FirearmCustomisation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FirearmCustomisation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FirearmCustomisation.WBP_FirearmCustomisation_C");
		return ptr;
	}

}


