/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_SquadListing.UI_SquadListing_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            squadRank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SquadName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FConZSquadEmblem                            SquadEmblem                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FString                                      SquadInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            SquadScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadListing_C::SetInfo(int32_t squadRank, const class FString& SquadName, const struct FConZSquadEmblem& SquadEmblem, const class FString& SquadInfo, int32_t SquadScore, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.SetInfo");
		
		UUI_SquadListing_C_SetInfo_Params params {};
		params.squadRank = squadRank;
		params.SquadName = SquadName;
		params.SquadEmblem = SquadEmblem;
		params.SquadInfo = SquadInfo;
		params.SquadScore = SquadScore;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadListing.UI_SquadListing_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SquadListing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.Construct");
		
		UUI_SquadListing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadListing_C::ExecuteUbergraph_UI_SquadListing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing");
		
		UUI_SquadListing_C_ExecuteUbergraph_UI_SquadListing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadListing.UI_SquadListing_C");
		return ptr;
	}

}


