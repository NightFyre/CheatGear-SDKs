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
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.CorrespondsToPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              ComparePlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MatchesOwningPlayerState                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InGameMap_C::CorrespondsToPlayerState(class AGBPlayerState* ComparePlayerState, bool* MatchesOwningPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.CorrespondsToPlayerState");
		
		UWBP_InGameMap_C_CorrespondsToPlayerState_Params params {};
		params.ComparePlayerState = ComparePlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchesOwningPlayerState != nullptr)
			*MatchesOwningPlayerState = params.MatchesOwningPlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectiveMarkers
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_C::UpdateObjectiveMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectiveMarkers");
		
		UWBP_InGameMap_C_UpdateObjectiveMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectives
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_C::UpdateObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectives");
		
		UWBP_InGameMap_C_UpdateObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.FindOrAddPlayerBlip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_InGameMap_PlayerBlip_C*                 OutPlayerBlip                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_C::FindOrAddPlayerBlip(class AGBPlayerState* InPlayerState, class UWBP_InGameMap_PlayerBlip_C** OutPlayerBlip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.FindOrAddPlayerBlip");
		
		UWBP_InGameMap_C_FindOrAddPlayerBlip_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerBlip != nullptr)
			*OutPlayerBlip = params.OutPlayerBlip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InGameMap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.Construct");
		
		UWBP_InGameMap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.Tick");
		
		UWBP_InGameMap_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.UpdatePlayerBlips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_C::UpdatePlayerBlips(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.UpdatePlayerBlips");
		
		UWBP_InGameMap_C_UpdatePlayerBlips_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InGameMap.WBP_InGameMap_C.ExecuteUbergraph_WBP_InGameMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InGameMap_C::ExecuteUbergraph_WBP_InGameMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InGameMap.WBP_InGameMap_C.ExecuteUbergraph_WBP_InGameMap");
		
		UWBP_InGameMap_C_ExecuteUbergraph_WBP_InGameMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InGameMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InGameMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameMap.WBP_InGameMap_C");
		return ptr;
	}

}


