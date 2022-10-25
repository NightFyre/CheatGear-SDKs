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
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.UpdateTierIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Band                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_CompRank_C::UpdateTierIcon(class UTexture2D** Icon, class UTexture2D** Band)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.UpdateTierIcon");
		
		UBP_PlayMenu_CompRank_C_UpdateTierIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
		if (Band != nullptr)
			*Band = params.Band;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnCompRatingUpdate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompetitiveRating                          Rating                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PlayMenu_CompRank_C::OnCompRatingUpdate(const struct FCompetitiveRating& Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnCompRatingUpdate");
		
		UBP_PlayMenu_CompRank_C_OnCompRatingUpdate_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_CompRank_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PreConstruct");
		
		UBP_PlayMenu_CompRank_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_CompRank_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.Construct");
		
		UBP_PlayMenu_CompRank_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PlayerRatingUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompetitiveRating                          Rating                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PlayMenu_CompRank_C::PlayerRatingUpdated(const struct FCompetitiveRating& Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.PlayerRatingUpdated");
		
		UBP_PlayMenu_CompRank_C_PlayerRatingUpdated_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.ExecuteUbergraph_BP_PlayMenu_CompRank
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_CompRank_C::ExecuteUbergraph_BP_PlayMenu_CompRank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.ExecuteUbergraph_BP_PlayMenu_CompRank");
		
		UBP_PlayMenu_CompRank_C_ExecuteUbergraph_BP_PlayMenu_CompRank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasRating                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInPlacements                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_CompRank_C::OnUpdated__DelegateSignature(bool HasRating, bool bInPlacements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C.OnUpdated__DelegateSignature");
		
		UBP_PlayMenu_CompRank_C_OnUpdated__DelegateSignature_Params params {};
		params.HasRating = HasRating;
		params.bInPlacements = bInPlacements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayMenu_CompRank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayMenu_CompRank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayMenu_CompRank.BP_PlayMenu_CompRank_C");
		return ptr;
	}

}


