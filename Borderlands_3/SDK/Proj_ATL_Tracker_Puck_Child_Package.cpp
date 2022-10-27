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
	 * 		Name   -> Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Puck_Child_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.UserConstructionScript");
		
		AProj_ATL_Tracker_Puck_Child_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Puck_Child_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ReceiveBeginPlay");
		
		AProj_ATL_Tracker_Puck_Child_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.SingleTargetTag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_Tracker_Puck_Child_C::SingleTargetTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.SingleTargetTag");
		
		AProj_ATL_Tracker_Puck_Child_C_SingleTargetTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_Tracker_Puck_Child_C::ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child");
		
		AProj_ATL_Tracker_Puck_Child_C_ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_ATL_Tracker_Puck_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_ATL_Tracker_Puck_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C");
		return ptr;
	}

}


