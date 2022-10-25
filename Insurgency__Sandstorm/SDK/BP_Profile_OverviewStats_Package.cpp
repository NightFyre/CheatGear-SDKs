/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.GetRatioSafe
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_OverviewStats_C::GetRatioSafe(int32_t A, int32_t B, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.GetRatioSafe");
		
		UBP_Profile_OverviewStats_C_GetRatioSafe_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.PopulateFromPage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSandstormPlayerProfilePage                 StatPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Profile_OverviewStats_C::PopulateFromPage(const struct FSandstormPlayerProfilePage& StatPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.PopulateFromPage");
		
		UBP_Profile_OverviewStats_C_PopulateFromPage_Params params {};
		params.StatPage = StatPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.DelegateOnXPUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            Experience                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_OverviewStats_C::DelegateOnXPUpdated(int64_t Experience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.DelegateOnXPUpdated");
		
		UBP_Profile_OverviewStats_C_DelegateOnXPUpdated_Params params {};
		params.Experience = Experience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Profile_OverviewStats_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.Construct");
		
		UBP_Profile_OverviewStats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.UpdateWeaponIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WeaponName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_OverviewStats_C::UpdateWeaponIcon(const class FString& WeaponName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.UpdateWeaponIcon");
		
		UBP_Profile_OverviewStats_C_UpdateWeaponIcon_Params params {};
		params.WeaponName = WeaponName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.ExecuteUbergraph_BP_Profile_OverviewStats
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_OverviewStats_C::ExecuteUbergraph_BP_Profile_OverviewStats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_OverviewStats.BP_Profile_OverviewStats_C.ExecuteUbergraph_BP_Profile_OverviewStats");
		
		UBP_Profile_OverviewStats_C_ExecuteUbergraph_BP_Profile_OverviewStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_OverviewStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_OverviewStats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_OverviewStats.BP_Profile_OverviewStats_C");
		return ptr;
	}

}


