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
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FPrimaryAssetId>                     ItemAssetIdList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bDoNotSort                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PlatformCustomisation_C::AddEntry(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList, bool bDoNotSort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEntry");
		
		UWBP_PlatformCustomisation_C_AddEntry_Params params {};
		params.Text = Text;
		params.bDoNotSort = bDoNotSort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemAssetIdList != nullptr)
			*ItemAssetIdList = params.ItemAssetIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PlatformCustomisation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.Construct");
		
		UWBP_PlatformCustomisation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddAmmunition
	 * 		Flags  -> ()
	 */
	void UWBP_PlatformCustomisation_C::AddAmmunition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddAmmunition");
		
		UWBP_PlatformCustomisation_C_AddAmmunition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddGrenades
	 * 		Flags  -> ()
	 */
	void UWBP_PlatformCustomisation_C::AddGrenades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddGrenades");
		
		UWBP_PlatformCustomisation_C_AddGrenades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEquipment
	 * 		Flags  -> ()
	 */
	void UWBP_PlatformCustomisation_C::AddEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.AddEquipment");
		
		UWBP_PlatformCustomisation_C_AddEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.ExecuteUbergraph_WBP_PlatformCustomisation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlatformCustomisation_C::ExecuteUbergraph_WBP_PlatformCustomisation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PlatformCustomisation.WBP_PlatformCustomisation_C.ExecuteUbergraph_WBP_PlatformCustomisation");
		
		UWBP_PlatformCustomisation_C_ExecuteUbergraph_WBP_PlatformCustomisation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PlatformCustomisation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PlatformCustomisation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlatformCustomisation.WBP_PlatformCustomisation_C");
		return ptr;
	}

}


