/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_MainMenu_GameModes_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.UserConstructionScript");
		
		AIO_MainMenu_GameModes_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnEnabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_GameModes_C::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnEnabled");
		
		AIO_MainMenu_GameModes_C_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnDisabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_GameModes_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnDisabled");
		
		AIO_MainMenu_GameModes_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnLStateLocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_GameModes_C::OnLStateLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnLStateLocked");
		
		AIO_MainMenu_GameModes_C_OnLStateLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnLStateUnlocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_GameModes_C::OnLStateUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.OnLStateUnlocked");
		
		AIO_MainMenu_GameModes_C_OnLStateUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.ExecuteUbergraph_IO_MainMenu_GameModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_MainMenu_GameModes_C::ExecuteUbergraph_IO_MainMenu_GameModes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_GameModes.IO_MainMenu_GameModes_C.ExecuteUbergraph_IO_MainMenu_GameModes");
		
		AIO_MainMenu_GameModes_C_ExecuteUbergraph_IO_MainMenu_GameModes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_MainMenu_GameModes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_MainMenu_GameModes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_MainMenu_GameModes.IO_MainMenu_GameModes_C");
		return ptr;
	}

}


