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
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65");
		
		AFrontEndMap_NEW_C_OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151");
		
		AFrontEndMap_NEW_C_OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveBeginPlay");
		
		AFrontEndMap_NEW_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.ShowMenu
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::ShowMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.ShowMenu");
		
		AFrontEndMap_NEW_C_ShowMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupCharacters
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::SetupCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupCharacters");
		
		AFrontEndMap_NEW_C_SetupCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.EquipFirearm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::EquipFirearm(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.EquipFirearm");
		
		AFrontEndMap_NEW_C_EquipFirearm_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupNVG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::SetupNVG(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupNVG");
		
		AFrontEndMap_NEW_C_SetupNVG_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.BindOnLoadingScreenEvent
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::BindOnLoadingScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.BindOnLoadingScreenEvent");
		
		AFrontEndMap_NEW_C_BindOnLoadingScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoadingScreenEvent_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::OnLoadingScreenEvent_Event(const class FName& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoadingScreenEvent_Event");
		
		AFrontEndMap_NEW_C_OnLoadingScreenEvent_Event_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.HideStartupScreen
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::HideStartupScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.HideStartupScreen");
		
		AFrontEndMap_NEW_C_HideStartupScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnKitAsssetListLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             LoadedAssets                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AFrontEndMap_NEW_C::OnKitAsssetListLoaded_Event(TArray<class UObject*> LoadedAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnKitAsssetListLoaded_Event");
		
		AFrontEndMap_NEW_C_OnKitAsssetListLoaded_Event_Params params {};
		params.LoadedAssets = LoadedAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveEndPlay");
		
		AFrontEndMap_NEW_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.PlayIdles
	 * 		Flags  -> ()
	 */
	void AFrontEndMap_NEW_C::PlayIdles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.PlayIdles");
		
		AFrontEndMap_NEW_C_PlayIdles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrontEndMap-NEW.FrontEndMap-NEW_C.ExecuteUbergraph_FrontEndMap-NEW
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontEndMap_NEW_C::ExecuteUbergraph_FrontEndMap_NEW(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndMap-NEW.FrontEndMap-NEW_C.ExecuteUbergraph_FrontEndMap-NEW");
		
		AFrontEndMap_NEW_C_ExecuteUbergraph_FrontEndMap_NEW_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrontEndMap_NEW_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontEndMap_NEW_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndMap_NEW.FrontEndMap-NEW_C");
		return ptr;
	}

}


