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
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.GetPlatformIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelection_Gamepad_C::GetPlatformIcon(class UTexture2D** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.GetPlatformIcon");
		
		UBP_WeaponSelection_Gamepad_C_GetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.RebuildItemListNew
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_WeaponSelection_Gamepad_C::RebuildItemListNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.RebuildItemListNew");
		
		UBP_WeaponSelection_Gamepad_C_RebuildItemListNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.BumpFadeTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelection_Gamepad_C::BumpFadeTimer(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.BumpFadeTimer");
		
		UBP_WeaponSelection_Gamepad_C_BumpFadeTimer_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.CreateOptionForItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AItemEquipable*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemSlot                                          Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelection_Gamepad_C::CreateOptionForItem(class AItemEquipable* Item, EItemSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.CreateOptionForItem");
		
		UBP_WeaponSelection_Gamepad_C_CreateOptionForItem_Params params {};
		params.Item = Item;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_WeaponSelection_Gamepad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.Construct");
		
		UBP_WeaponSelection_Gamepad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.ExecuteUbergraph_BP_WeaponSelection_Gamepad
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponSelection_Gamepad_C::ExecuteUbergraph_BP_WeaponSelection_Gamepad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.ExecuteUbergraph_BP_WeaponSelection_Gamepad");
		
		UBP_WeaponSelection_Gamepad_C_ExecuteUbergraph_BP_WeaponSelection_Gamepad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WeaponSelection_Gamepad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponSelection_Gamepad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C");
		return ptr;
	}

}


