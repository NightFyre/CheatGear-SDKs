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
	 * 		Name   -> Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_MAL_SR_FireStormOrbs_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.UserConstructionScript");
		
		AProj_MAL_SR_FireStormOrbs_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_MAL_SR_FireStormOrbs_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ReceiveBeginPlay");
		
		AProj_MAL_SR_FireStormOrbs_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_MAL_SR_FireStormOrbs_C::ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs");
		
		AProj_MAL_SR_FireStormOrbs_C_ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_MAL_SR_FireStormOrbs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_MAL_SR_FireStormOrbs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C");
		return ptr;
	}

}


