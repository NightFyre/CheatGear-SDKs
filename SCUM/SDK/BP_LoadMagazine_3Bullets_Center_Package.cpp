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
	 * 		Name   -> Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.GetEndSectionName
	 * 		Flags  -> ()
	 */
	class FName UBP_LoadMagazine_3Bullets_Center_C::GetEndSectionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.GetEndSectionName");
		
		UBP_LoadMagazine_3Bullets_Center_C_GetEndSectionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.Begin
	 * 		Flags  -> ()
	 */
	float UBP_LoadMagazine_3Bullets_Center_C::Begin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.Begin");
		
		UBP_LoadMagazine_3Bullets_Center_C_Begin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.CanBeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemActionDescription*                      Description                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_LoadMagazine_3Bullets_Center_C::CanBeSelected(class UItemActionDescription* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.CanBeSelected");
		
		UBP_LoadMagazine_3Bullets_Center_C_CanBeSelected_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LoadMagazine_3Bullets_Center_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LoadMagazine_3Bullets_Center_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C");
		return ptr;
	}

}


