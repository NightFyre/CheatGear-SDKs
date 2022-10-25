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
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Profile_Stats_WeaponsItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnFocusReceived");
		
		UBP_Profile_Stats_WeaponsItem_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetWeaponName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WeaponNameString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        LocalizedWeaponTextName                                    (Parm, OutParm)
	 * 		class FText                                        LocalizedWeaponTextDescription                             (Parm, OutParm)
	 */
	void UBP_Profile_Stats_WeaponsItem_C::GetWeaponName(const class FString& WeaponNameString, class FText* LocalizedWeaponTextName, class FText* LocalizedWeaponTextDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetWeaponName");
		
		UBP_Profile_Stats_WeaponsItem_C_GetWeaponName_Params params {};
		params.WeaponNameString = WeaponNameString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedWeaponTextName != nullptr)
			*LocalizedWeaponTextName = params.LocalizedWeaponTextName;
		if (LocalizedWeaponTextDescription != nullptr)
			*LocalizedWeaponTextDescription = params.LocalizedWeaponTextDescription;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.UpdateFromStatRecord
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatisticsPlayerWeaponStats                WeaponStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Profile_Stats_WeaponsItem_C::UpdateFromStatRecord(struct FStatisticsPlayerWeaponStats* WeaponStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.UpdateFromStatRecord");
		
		UBP_Profile_Stats_WeaponsItem_C_UpdateFromStatRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponStat != nullptr)
			*WeaponStat = params.WeaponStat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetBrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Stats_WeaponsItem_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetBrushColor_1");
		
		UBP_Profile_Stats_WeaponsItem_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnLoaded_279241074EC8FA141D202CAB3BD10C32
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_WeaponsItem_C::OnLoaded_279241074EC8FA141D202CAB3BD10C32(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnLoaded_279241074EC8FA141D202CAB3BD10C32");
		
		UBP_Profile_Stats_WeaponsItem_C_OnLoaded_279241074EC8FA141D202CAB3BD10C32_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.LoadWeaponIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WeaponName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_WeaponsItem_C::LoadWeaponIcon(const class FString& WeaponName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.LoadWeaponIcon");
		
		UBP_Profile_Stats_WeaponsItem_C_LoadWeaponIcon_Params params {};
		params.WeaponName = WeaponName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.ExecuteUbergraph_BP_Profile_Stats_WeaponsItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Stats_WeaponsItem_C::ExecuteUbergraph_BP_Profile_Stats_WeaponsItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.ExecuteUbergraph_BP_Profile_Stats_WeaponsItem");
		
		UBP_Profile_Stats_WeaponsItem_C_ExecuteUbergraph_BP_Profile_Stats_WeaponsItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_Stats_WeaponsItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_Stats_WeaponsItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C");
		return ptr;
	}

}


