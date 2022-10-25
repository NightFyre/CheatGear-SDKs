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
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenuMap_P_C::FadeDownBlackScreen__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__FinishedFunc");
		
		AMenuMap_P_C_FadeDownBlackScreen__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenuMap_P_C::FadeDownBlackScreen__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__UpdateFunc");
		
		AMenuMap_P_C_FadeDownBlackScreen__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.HandRotate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenuMap_P_C::HandRotate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.HandRotate__FinishedFunc");
		
		AMenuMap_P_C_HandRotate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.HandRotate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenuMap_P_C::HandRotate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.HandRotate__UpdateFunc");
		
		AMenuMap_P_C_HandRotate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature");
		
		AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EMainMenuViewpointType                             MenuTransition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature(EMainMenuViewpointType MenuTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature");
		
		AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_14_MainMenuViewpointChangedDelegate__DelegateSignature_Params params {};
		params.MenuTransition = MenuTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PreviousPlayThroughCount                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewPlayThroughCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature(int32_t PreviousPlayThroughCount, int32_t NewPlayThroughCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature");
		
		AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_5_MenuMapPlaythroughChangedDelegate__DelegateSignature_Params params {};
		params.PreviousPlayThroughCount = PreviousPlayThroughCount;
		params.NewPlayThroughCount = NewPlayThroughCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenuMap_P_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.ReceiveBeginPlay");
		
		AMenuMap_P_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EPlayerDifficultySetting                           NewDifficultySetting                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature(EPlayerDifficultySetting NewDifficultySetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature");
		
		AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MenuMapOnDifficultyChanged__DelegateSignature_Params params {};
		params.NewDifficultySetting = NewDifficultySetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EOakGameStateUIGroupMode                           NewGroupMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature(EOakGameStateUIGroupMode NewGroupMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature");
		
		AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_2_MenuMapOnUIGroupModeChanged__DelegateSignature_Params params {};
		params.NewGroupMode = NewGroupMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.loadBTS
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenuMap_P_C::loadBTS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.loadBTS");
		
		AMenuMap_P_C_loadBTS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MenuMap_P.MenuMap_P_C.ExecuteUbergraph_MenuMap_P
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuMap_P_C::ExecuteUbergraph_MenuMap_P(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuMap_P.MenuMap_P_C.ExecuteUbergraph_MenuMap_P");
		
		AMenuMap_P_C_ExecuteUbergraph_MenuMap_P_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenuMap_P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuMap_P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuMap_P.MenuMap_P_C");
		return ptr;
	}

}


