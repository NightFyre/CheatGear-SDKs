/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_a_IPGLineUp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ReceiveBeginPlay");
		
		Asot_frontend_01_a_IPGLineUp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_IPGLineUp_C::showPlayerMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.showPlayerMarker");
		
		Asot_frontend_01_a_IPGLineUp_C_showPlayerMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_IPGLineUp_C::hidePlayerMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.hidePlayerMarker");
		
		Asot_frontend_01_a_IPGLineUp_C_hidePlayerMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_IPGLineUp_C::ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C.ExecuteUbergraph_sot_frontend_01_a_IPGLineUp");
		
		Asot_frontend_01_a_IPGLineUp_C_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_IPGLineUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_IPGLineUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C");
		return ptr;
	}

}


