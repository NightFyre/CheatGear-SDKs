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
	 * 		Name   -> Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_MainMenu_LootMode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.UserConstructionScript");
		
		AIO_MainMenu_LootMode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.OnEnabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_LootMode_C::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.OnEnabled");
		
		AIO_MainMenu_LootMode_C_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.OnDisabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_MainMenu_LootMode_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.OnDisabled");
		
		AIO_MainMenu_LootMode_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.ExecuteUbergraph_IO_MainMenu_LootMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_MainMenu_LootMode_C::ExecuteUbergraph_IO_MainMenu_LootMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_MainMenu_LootMode.IO_MainMenu_LootMode_C.ExecuteUbergraph_IO_MainMenu_LootMode");
		
		AIO_MainMenu_LootMode_C_ExecuteUbergraph_IO_MainMenu_LootMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_MainMenu_LootMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_MainMenu_LootMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_MainMenu_LootMode.IO_MainMenu_LootMode_C");
		return ptr;
	}

}


