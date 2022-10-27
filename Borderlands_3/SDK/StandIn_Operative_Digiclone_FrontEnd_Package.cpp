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
	 * 		Name   -> Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStandIn_Operative_Digiclone_FrontEnd_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.UserConstructionScript");
		
		AStandIn_Operative_Digiclone_FrontEnd_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStandIn_Operative_Digiclone_FrontEnd_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ReceiveBeginPlay");
		
		AStandIn_Operative_Digiclone_FrontEnd_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandIn_Operative_Digiclone_FrontEnd_C::ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C.ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd");
		
		AStandIn_Operative_Digiclone_FrontEnd_C_ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandIn_Operative_Digiclone_FrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_Operative_Digiclone_FrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C");
		return ptr;
	}

}


